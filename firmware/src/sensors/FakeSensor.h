#pragma once

#include "Sensor.h"

class FakeSensor : public Sensor{
public:
    bool begin() override;
    SensorData read() override; 
};      
