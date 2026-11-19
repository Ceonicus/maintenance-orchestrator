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
                f"===== FLOOR {floor} ====="
            )

            steps = [

                "SwitchToSuction",

                "ContactBoxPerception",

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

                if step == "CoverRemoval":

                    success = await self.call_cover_removal()

                else:

                    success = await self.call_switch_tool(
                        step
                    )

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