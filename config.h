#ifndef CONFIG_H_INCLUDED
#define CONFIG_H_INCLUDED
        /*path to the input event, need to be part of input group in order to read*/
        char devname[] = "/dev/input/by-id/usb-Wacom_Co._Ltd._Pen_and_multitouch_sensor-event-if00";
        /*path to accelerometer data*/
        std::string accelpath = "/sys/devices/pci0000:00/0000:00:13.0/{33AECD58-B679-4E54-9BD9-A04D34F0C226}/001F:8087:0AC2.0003/HID-SENSOR-200073.8.auto/"; //in there the program looks for a folder named iio:device0 or 1
        std::string xrawdata = "in_accel_x_raw"; // in iio:device* there should be these files with the respective data
        std::string yrawdata = "in_accel_y_raw";
        /*maximum values x and y coordinate can have, usually bottom right of screen and can be found using evtest on the input device*/
        int xmax = 11747;
        int ymax = 6607;
        /*minimum length required for something to be a swipe*/
        double swipetolerance = 0.15;
        /*value to scale the angle in degrees for e.g. changing volume*/
        int anglescaling = 2;
        /*another value to set the stepsize for rotations*/
        int anglestepping = 5;
        /*how much the com may move for a rotation*/
        int comdisttolerance = 200;
        /*an array of commands to use within the program*/
        char* commands[] = {
            "onboard &", /*1 finger from bottom*/
            "dmenu_run &", /*1 finger from top*/
            "", /*1 finger from right*/
            "stabbed &", /*1 finger from left*/
            "", /*2 finger swipe down*/
            "", /*2 finger swipe up*/
            "xdotool key super+2", /*2 finger swipe right*/
            "xdotool key super+1", /*2 finger swipe left*/
            "/home/christopher/bin/changevolume ", /*2 finger rotation left*/
            "/home/christopher/bin/changevolume ", /*2finger rotation right*/
            "", /*3 finger swipe down*/
            "", /*3 finger swipe up*/
            "xdotool key super+shift+2", /*3 finger swipe right*/
            "xdotool key super+shift+1", /*3 finger swipe left*/
            "xbacklight -dec ", /*3 finger rotation left*/
            "xbacklight -inc ", /*3 finger rotation right*/
            "", /*4 finger swipe down*/
            "", /*4 finger swipe up*/
            "", /*4 finger swipe right*/
            "", /*4 finger swipe left*/
            "", /*4 finger rotation left*/
            "", /*4 finger rotation right*/
            "", /*5 finger swipe down*/
            "", /*5 finger swipe up*/
            "", /*5 finger swipe right*/
            "", /*5 finger swipe left*/
            "xdotool key super+shift+q ", /*5 finger rotation left*/
            "", /*5 finger rotation right*/
        };

#endif // CONFIG_H_INCLUDED
