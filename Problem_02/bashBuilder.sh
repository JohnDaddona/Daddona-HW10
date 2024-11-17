#This is is my Bash script to compile the test_all_App program and configure GPIO pins
#It compiles the source files with threading and sets pin modes for GPIO functionality.
#Example invocation: ./bashBuilder.sh

#!/bin/bash

g++ -g test_all_App.cpp AnalogIn.cpp GPIO.cpp makeLEDs.cpp -o test_all_app -pthread

config-pin p9.12 gpio
config-pin p8.16 gpio_pu

