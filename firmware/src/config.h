#pragma once 

//Set True if testing and no hardware
#define USE_FAKE_SENSOR true

// SHT31 I2C address.
// common address are 0x44 and 0x45
#define SHT31_ADDRESS 0x44

//How often the controller read the sensor
#define SENSOR_READ_INTERVAL_MS 2000