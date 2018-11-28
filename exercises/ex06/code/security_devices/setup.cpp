//Laser
output(laser, D5, "off", "on").set("on");

//Photoresistor
analog(a0).with_precision(10).with_threshold(150, "1", "0");

//Photointerrupter
input(alarm, D2, "0", "1");