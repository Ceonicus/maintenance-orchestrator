import time

import rclpy
from rclpy.node import Node
from rclpy.action import ActionServer

from maintenance_interfaces.action import SimpleTask


class SwitchToolServer(Node):

    def __init__(self):

        super().__init__('cover_removal_server')

        self._server = ActionServer(
            self,
            SimpleTask,
            'cover_removal',
            self.execute_callback
        )

        self.get_logger().info(
            "Cover Removal Server Ready"
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


def main(args=None):

    rclpy.init(args=args)

    node = SwitchToolServer()

    rclpy.spin(node)

    rclpy.shutdown()


if __name__ == '__main__':
    main()