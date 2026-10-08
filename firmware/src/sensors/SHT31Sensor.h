#pragma once

#include <Adafruit_SHT31.h>

#include "Sensor.h"

class SHT31Sensor : public Sensor
{
public:
    explicit SHT31Sensor(uint8_t address = 0x44);

    bool begin() override;
    SensorData read() override;

private:
    Adafruit_SHT31 sensor;
    uint8_t address;
};