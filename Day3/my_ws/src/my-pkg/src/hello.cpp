#include <ros/ros.h>

int main(int argc, char** argv) {
  ros::init(argc,argv,"ObiWan");
  ros::NodeHandle nh;
  ros::Rate loop_rate(20000000000000);

  while(ros::ok())
  {
    ROS_INFO("Hello world!");
  }

  return 0;
}
