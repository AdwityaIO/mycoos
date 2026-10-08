#include "FakeSensor.h"

bool FakeSensor::begin()
{
    return true;
}

SensorData FakeSensor::read(){
    SensorData data;
    data.temperature = 24.5 ;
    data.humidity = 87.0 ;
    data.valid =true ;
}