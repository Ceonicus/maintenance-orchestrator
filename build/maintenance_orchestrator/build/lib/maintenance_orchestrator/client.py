import rclpy

from rclpy.node import Node
from rclpy.action import ActionClient
from maintenance_interfaces.action import SimpleTask

from maintenance_interfaces.action import (
    MaintenanceSession
)


class MaintenanceClient(Node):

    def __init__(self):

        super().__init__(
            'maintenance_client'
        )

        self.client = ActionClient(
            self,
            MaintenanceSession,
            'maintenance_session'
        )

        self.switch_tool_client = ActionClient(
            self,
            SimpleTask,
            'switch_tool'
        )

    def send_goal(self):

        goal = (
            MaintenanceSession.Goal()
        )

        goal.service_floors = [
            4,
            3,
            2,
            1
        ]

        self.client.wait_for_server()

        self.client.send_goal_async(
            goal
        )

    def call_step(self, task_name):

        goal = SimpleTask.Goal()

        goal.task_name = task_name

        self.switch_tool_client.wait_for_server()

        future = (
            self.switch_tool_client.send_goal_async(
                goal
            )
        )

        self.get_logger().info(
            f"Calling {task_name}"
        )


def main(args=None):

    rclpy.init(args=args)

    node = MaintenanceClient()

    node.send_goal()

    rclpy.spin(node)

    rclpy.shutdown()


if __name__ == "__main__":
    main()