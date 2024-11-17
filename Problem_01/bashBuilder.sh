#Small bash build file to compile multiple programs into one single application
#for reading temperature. An example invocation is ./bashBuilder.sh

#!/bin/bash

g++ -g test_analog.cpp AnalogIn.cpp -o test_analog

echo "Built."




