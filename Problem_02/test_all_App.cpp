// This is my program test_all_App.cpp that tests the functionality of LEDs,
// AnalogIn, and GPIO classes.
// It includes turning LEDs on and off, flashing, reading the temperature sensor, and
// responding to a button press.
// Example invocation: ./test_all_App


#include<iostream>
#include<fstream>
#include<string>
#include<sstream>
#include<cstdlib>
#include<cstdio>
#include<fcntl.h>
#include<unistd.h>
#include<sys/epoll.h>
#include<pthread.h>
#include "makeLEDs.h"
#include "AnalogIn.h"
#include "GPIO.h"

using namespace exploringBB;
using namespace std; 


int main(){
  // 1.
  LED led1(0);
  LED led3(2);
  LED led4(3);
  led1.turnOn();
  led3.turnOn();
  led4.turnOff();
  
  //2.
  LED led2(1);
  led2.flash("50");

  //3.
  AnalogIn tempSensor(0);
  int tempValue = tempSensor.readAdcSample();
  cout << "Temperature sensor value: " << tempValue << endl;

  //4.
  GPIO button(46);
  button.setDirection(INPUT);
  GPIO_VALUE buttonState = button.getValue();

  //5.
  if (buttonState == LOW){
    cout << "Button pressed. Turning on GPIO 60 LED." << endl;
    GPIO gpioLED(60);
    
    gpioLED.setDirection(OUTPUT);
    gpioLED.setValue(HIGH);
    }
  else{
    cout << "Button not pressed." << endl;
    GPIO gpioLED(60);
    gpioLED.setDirection(OUTPUT);
    gpioLED.setValue(LOW);
}
  cout << "Done." << endl;
  
  
  return 0;
}










