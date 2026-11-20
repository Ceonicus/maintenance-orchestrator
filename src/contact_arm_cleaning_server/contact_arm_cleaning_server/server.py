import time
from unittest import result

import rclpy
from rclpy.node import Node
from rclpy.action import ActionServer
from rclpy.action import ActionClient

from maintenance_interfaces.action import SimpleTask


class SwitchToolServer(Node):

    def __init__(self):

        super().__init__('contact_arm_cleaning_server')

        self._server = ActionServer(
            self,
            SimpleTask,
            'contact_arm_cleaning',
            self.execute_callback
        )

        self.contact_arm_cleaning_client = ActionClient(
            self,
            SimpleTask,
            'contact_arm_cleaning'
        )

        self.get_logger().info(
            "Contact Arm Cleaning Server Ready"
        )

    async def execute_callback(self, goal_handle):

        task = goal_handle.request.task_name

        self.get_logger().info(
            f"Goal Received: {task}"
        )

        feedback = SimpleTask.Feedback()

        for i in range(5):

            feedback.status = f"working step {i}"

            goal_handle.publish_feedback(
                feedback
            )

            self.get_logger().info(
                feedback.status
            )

            time.sleep(1)

        goal_handle.succeed()

        result = SimpleTask.Result()

        result.success = True
        result.message = f"{task} completed"

        return result

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


def main(args=None):

    rclpy.init(args=args)

    node = SwitchToolServer()

    rclpy.spin(node)

    rclpy.shutdown()


if __name__ == '__main__':
    main()