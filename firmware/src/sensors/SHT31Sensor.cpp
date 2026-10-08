#include "SHT31Sensor.h"

SHT31Sensor::SHT31Sensor(uint8_t address)
    : address(address)
{
}

bool SHT31Sensor::begin()
{
    return sensor.begin(address);
}

SensorData SHT31Sensor::read()
{
    SensorData data;

    data.temperature = sensor.readTemperature();
    data.humidity = sensor.readHumidity();

    data.valid =
        !isnan(data.temperature) &&
        !isnan(data.humidity);

    return data;
}