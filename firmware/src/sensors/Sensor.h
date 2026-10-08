#pragma once
#include "SensorData.h"

class Sensor{
public:
    virtual bool begin() = 0;

    virtual SensorData read()  = 0;
    
    virtual ~Sensor() = default;
    

};