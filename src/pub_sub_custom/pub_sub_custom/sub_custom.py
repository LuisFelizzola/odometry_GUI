#ROS CLIENT LIBRARY FOR PYTHON
import rclpy 

#HANDLES THE CREATION OF NODES
from rclpy.node import Node


#ENABLE USAGE OF THE STRING MESSAGE TYPE
from custom_msg.msg import TargetCoordinates


class MinimalSubscriber(Node):
    def __init__(self):

        #initialize the Node class's contructor and give it a name
        super().__init__('minimal_subscriber_custom')

        #the nodes subscribes to messages of type std_msgs/String over a topic named: /addison
        #the callback fuction is called as soon as the message is received 
        #the maximun number of queued messages is 10


        self.subscription =self.create_subscription(TargetCoordinates,'addison_custom',self.listener_callback,10)

    def listener_callback(self,msg):
        #Displays a msg onthe conslo every time a message is received
        self.get_logger().info('I heard: "%s"  X: "%f" Y: "%f" Z: "%f"'%(msg.name, msg.coordinate.x, msg.coordinate.y ,msg.coordinate.z))

def main(args=None):
    rclpy.init(args=args)


    #create a subscriber

    minimal_subscriber = MinimalSubscriber()

    #Spin the node so the callback fuction is called 
    rclpy.spin(minimal_subscriber)


    #Destroy the node explicitly

    minimal_subscriber.destroy_node()


    #SHutdown ROS client library for python

    rclpy.shutdown()



if __name__=='__main__':
    main()