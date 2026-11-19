import rclpy

from rclpy.node import Node
from rclpy.action import ActionClient

from maintenance_interfaces.action import SimpleTask


class SwitchToolClient(Node):

    def __init__(self):

        super().__init__('switch_tool_client')

        self.client = ActionClient(
            self,
            SimpleTask,
            'switch_tool'
        )

    def send_goal(self):

        goal = SimpleTask.Goal()

        goal.task_name = "SUCTION"

        self.client.wait_for_server()

        self.get_logger().info(
            "Sending Goal..."
        )

        self.client.send_goal_async(goal)


def main(args=None):

    rclpy.init(args=args)

    client = SwitchToolClient()

    client.send_goal()

    rclpy.spin(client)

    rclpy.shutdown()


if __name__ == '__main__':
    main()