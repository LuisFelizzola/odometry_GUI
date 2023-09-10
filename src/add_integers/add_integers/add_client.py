import sys #help us to get the numbers from terminal and arguments


import rclpy
from rclpy.node import Node


from custom_msg.srv import SetLed #SetLed is the name of the .srv file

class AdditionClientAsync(Node): #create a client with an asynchronous call to the server
    def __init__(self): 
        super().__init__("addition_client_asyn")
        self.client=self.create_client(SetLed,"add_two_ints")


        while not self.client.wait_for_service(timeout_sec=1.0):
            self.get_logger().info("Service not available, waiting for it")
    
    def send_request(self):
        request=SetLed.Request()
        request.a=int(sys.argv[1])
        request.b=int(sys.argv[2])
        self.future=self.client.call_async(request)


def main(args=None):
    rclpy.init(args=args)

    #create a node
    addition_client=AdditionClientAsync()
    addition_client.send_request()


    #use/spin node
    while rclpy.ok():
        rclpy.spin_once(addition_client) #spin_once is needed to not block the code. executes a piece of code once
        if addition_client.future.done():
            try:
                response =addition_client.future.result()
            except Exception as e:
                addition_client.get_logger().info(f"Service call failed{e}")
            else:
                addition_client.get_logger().info(f"RESULT IS: {response.sum}")
            break
        

    #destroy node and shutdown
    addition_client.destroy_node()
    rclpy.shutdown()
    pass

if __name__=="__main__":
    main()