// This is my test_analog.cpp application, it simple instantiates the defined
// functions in AnalogIn.cpp. Setting the current temp to 0, then reading the
// number, displaying it, reading the ADC and displaying it. Example invocation
// is ./test_analog

#include <iostream>
#include <sstream>
#include <fstream>
using namespace std;
#include "AnalogIn.h"
#define ADC_PATH "/sys/bus/iio/devices/iio:device0/in_voltage"

int main(){

AnalogIn Temperature(0);

cout << "Current Number: " <<  Temperature.getNumber() << endl;

cout << "Current ADC: " << Temperature.readAdcSample() << endl;

}









