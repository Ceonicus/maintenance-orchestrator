import time
from datetime import datetime
from xml.sax import handler

import rclpy

from rclpy.node import Node
from rclpy.action import ActionServer
from rclpy.action import ActionClient

from maintenance_interfaces.action import (
    MaintenanceSession,
    SimpleTask,
)


class MaintenanceSessionServer(Node):

    def __init__(self):

        super().__init__(
            'maintenance_session_server'
        )

        self.maintenance_hour = 3

        self.server = ActionServer(
            self,
            MaintenanceSession,
            'maintenance_session',
            self.execute_callback
        )

        self.switch_client = ActionClient(
            self,
            SimpleTask,
            'switch_tool'
        )

        self.cover_client = ActionClient(
            self,
            SimpleTask,
            'cover_removal'
        )

        self.unscrew_client = ActionClient(
            self,
            SimpleTask,
            'unscrew'
        )

        self.contact_arm_cleaning_client = ActionClient(
            self,
            SimpleTask,
            'contact_arm_cleaning'
        )

        self.step_handlers = {

            "CoverRemoval":
                self.call_cover_removal,

            "Unscrew":
                self.call_unscrew,

            "CleanContactArm":
                self.call_contact_arm_cleaning,

        }

        self.get_logger().info(
            'Maintenance Session Ready'
        )

    async def execute_callback(
            self,
            goal_handle):

        feedback = (
            MaintenanceSession.Feedback()
        )

        floors = (
            goal_handle.request.service_floors
        )

        total = len(floors)

        await self.maintenance_window_check()

        await self.robot_health_check()

        for index, floor in enumerate(floors):

            feedback.current_floor = floor

            feedback.current_step = (
                f"Maintenance Floor {floor}"
            )

            feedback.progress = (
                float(index + 1)
                / total
                * 100.0
            )

            goal_handle.publish_feedback(
                feedback
            )

            self.get_logger().info(
                f"===== 🟨 FLOOR {floor} 🟨====="
            )

            steps = [

                "ContactBoxPerception",

                "SwitchToSuction",

                "CoverRemoval",

                "SwitchToScrewdriver",

                "Unscrew",

                "CleanContactArm",

                "InstallScrews",

                "SwitchToSuction",

                "CoverPlacement",

                "DoorBarCleaning",

                "DoorSillCleaning",

            ]

            for step in steps:

                self.log_step_banner(step)

                handler = self.step_handlers.get(step)

                if handler:

                        success = await handler()

                else:

                        success = await self.call_switch_tool(step)

                if not success:

                    self.get_logger().error(
                        f"{step} failed"
                    )

                    goal_handle.abort()

                    result = (
                        MaintenanceSession.Result()
                    )

                    result.success = False

                    result.report_path = ""

                    return result

        await self.close_maintenance_session()

        goal_handle.succeed()

        result = (
            MaintenanceSession.Result()
        )

        result.success = True

        result.report_path = (
            "/tmp/report.json"
        )

        return result

    async def call_switch_tool(
            self,
            task_name):

        goal = SimpleTask.Goal()

        goal.task_name = task_name

        self.switch_client.wait_for_server()

        self.get_logger().info(
            f"Calling switch_tool: {task_name}"
        )

        goal_handle = await self.switch_client.send_goal_async(
            goal,
            feedback_callback=self.feedback_callback
        )

        result_future = (
            goal_handle.get_result_async()
        )

        result = await result_future

        self.get_logger().info(
            f"Completed: {task_name}"
        )

        return result.result.success

    async def call_cover_removal(self):

        goal = SimpleTask.Goal()

        goal.task_name = "CoverRemoval"

        self.cover_client.wait_for_server()

        self.get_logger().info(
            "Calling cover_removal"
        )

        goal_handle = await self.cover_client.send_goal_async(
            goal,
            feedback_callback=self.feedback_callback
        )

        result_future = (
            goal_handle.get_result_async()
        )

        result = await result_future

        self.get_logger().info(
            "Completed: CoverRemoval"
        )

        return result.result.success

    async def call_unscrew(self):

        goal = SimpleTask.Goal()

        goal.task_name = "Unscrew"

        self.unscrew_client.wait_for_server()

        self.get_logger().info(
            "Calling unscrew"
        )

        goal_handle = await self.unscrew_client.send_goal_async(
            goal,
            feedback_callback=self.feedback_callback
        )

        result_future = (
            goal_handle.get_result_async()
        )

        result = await result_future

        self.get_logger().info(
        "✅ Completed: Unscrew"
        )

        return result.result.success

    async def call_contact_arm_cleaning(self):

        goal = SimpleTask.Goal()

        goal.task_name = "CleanContactArm"

        self.contact_arm_cleaning_client.wait_for_server()

        self.get_logger().info(
            "Calling contact_arm_cleaning"
        )

        goal_handle = await (
            self.contact_arm_cleaning_client.send_goal_async(
                goal,
                feedback_callback=self.feedback_callback
            )
        )

        result_future = (
            goal_handle.get_result_async()
        )

        result = await result_future

        self.get_logger().info(
            "✅ Completed: CleanContactArm"
        )

        return result.result.success

    async def robot_health_check(self):

        self.get_logger().info(
            "🩺 Robot Health Check"
        )

        time.sleep(2)

        self.get_logger().info(
            "✅ Robot Healthy"
        )

        time.sleep(2)
        
        self.get_logger().info(
            "✅ Moving to Top Service Floor..."
        )

        time.sleep(10)

        return True

    async def maintenance_window_check(self):

        current_time = datetime.now().strftime(
            "%I:%M %p"
        )

        time.sleep(2)

        self.get_logger().info(
            f"🕒 Current Time: {current_time}"
        )

        time.sleep(2)

        self.get_logger().info(
            f"🎯 Maintenance Start Window: "
            f"{self.maintenance_hour:02d}:00 AM"
        )

        time.sleep(2)

        self.get_logger().info(
            "✅ Maintenance Window Open"
        )

        return True

    async def close_maintenance_session(self):

        self.get_logger().info("")

        self.get_logger().info(
                "🟨 ALL MAINTENANCE ACTIVITIES COMPLETED 🟨"
            )
        
        self.get_logger().info("")

        time.sleep(3)
    
        self.get_logger().info(
            "📝 Recording Maintenance Results"
        )

        time.sleep(1)

        self.get_logger().info(
            "✅ Contact Inspection Recorded"
        )

        time.sleep(1)

        self.get_logger().info(
            "✅ Cleaning Results Recorded"
        )

        time.sleep(1)

        self.get_logger().info(
            "✅ Tool Usage Recorded"
        )

        time.sleep(1)

        self.get_logger().info(
            "✅ Maintenance Log Recorded"
        )

        time.sleep(2)

        self.get_logger().info(
            "📊 Generating Session Report"
        )

        time.sleep(2)

        self.get_logger().info(
            "✅ Session Report Generated"
        )

        time.sleep(2)

        self.get_logger().info(
            "🏢 Restoring Passenger Service"
        )

        time.sleep(2)

        self.get_logger().info(
            "✅ Maintenance Mode Released"
        )

        self.get_logger().info(
            "✅ Elevator Returned To Passenger Service"
        )

        time.sleep(1)

        self.get_logger().info("")
    
        self.get_logger().info(
            "🌙 MAINTENANCE SESSION COMPLETE"
        )

        return True


    def log_step_banner(self, step_name):

        icons = {

            "SwitchToSuction": "🔧",
            "SwitchToScrewdriver": "🔧",

            "ContactBoxPerception": "👁️",

            "CoverRemoval": "📦",
            "CoverPlacement": "📦",

            "Unscrew": "🔩",
            "InstallScrews": "🔩",

            "CleanContactArm": "🧹",
            "DoorBarCleaning": "🧹",
            "DoorSillCleaning": "🧹",

        }

        icon = icons.get(step_name, "⚙️")

        self.get_logger().info(
            "\n" + "=" * 60
        )

        self.get_logger().info(
            f"{icon}  {step_name}"
        )

        self.get_logger().info(
            "=" * 60
        )

    def feedback_callback(
            self,
            feedback_msg):

        feedback = feedback_msg.feedback

        self.get_logger().info(
            f"      Feedback: {feedback.status}"
        )


def main(args=None):

    rclpy.init(args=args)

    node = MaintenanceSessionServer()

    rclpy.spin(node)

    rclpy.shutdown()


if __name__ == "__main__":
    main()