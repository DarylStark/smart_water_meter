#include "water_meter.h"

WaterMeter::WaterMeter()
    : __meter("sensor", 26)
{
    register_component(__meter);
}

void WaterMeter::setup()
{
    // Start the Serial
    Serial.begin(115200);

    // Start the setup for
    _setup();
}

void WaterMeter::loop()
{
    _loop();

    Serial.println("LOOP");
    delay(200);
}