#include <Arduino.h>

#include "config.h"

#include "sensors/Sensor.h"
#include "sensors/FakeSensor.h"
#include "sensors/SHT31Sensor.h"


// Sensor selection

FakeSensor fakeSensor;
SHT31Sensor sht31Sensor(SHT31_ADDRESS);

Sensor *sensor = nullptr;

// timing

unsigned long lastSensorRead = 0;

// Setup

void setup(){

    Serial.begin(115200);

    delay(1000);

    Serial.println();
    Serial.println("==============================");
    Serial.println("        MycoOS v0.1");
    Serial.println("==============================");

    // Select sensor implementation.
    if (USE_FAKE_SENSOR)
    {

        Serial.println("Sensor: FakeSensor");

        sensor = &fakeSensor;
    }
    else
    {

        Serial.println("Sensor: SHT31");

        sensor = &sht31Sensor;
    }

    // Initialize selected sensor.
    if (!sensor->begin())
    {

        Serial.println("ERROR: Sensor initialization failed.");

        return;
    }

    Serial.println("Sensor initialized.");
    Serial.println("System ready.");
}

// Main loop

void loop()
{

    unsigned long currentTime = millis();

    // Only read the sensor every defined interval.
    if (currentTime - lastSensorRead >= SENSOR_READ_INTERVAL_MS)
    {

        lastSensorRead = currentTime;

        // Ask the sensor for environmental data.
        SensorData data = sensor->read();

        // Check whether the reading is valid.
        if (!data.valid)
        {

            Serial.println("ERROR: Invalid sensor reading.");

            return;
        }

        // Display the data.
        Serial.print("Temperature: ");
        Serial.print(data.temperature, 2);
        Serial.println(" °C");

        Serial.print("Humidity: ");
        Serial.print(data.humidity, 2);
        Serial.println(" % RH");

        Serial.println("------------------------------");
    }
}




