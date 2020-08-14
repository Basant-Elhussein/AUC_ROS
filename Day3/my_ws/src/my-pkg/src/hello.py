#! /usr/bin/env python
import rospy

rospy.init_node("Obiwan")
rate = rospy.Rate(2)
while not rospy.is_shutdown():
    print "Hello world!"
    rate.sleep()
