#ifndef __WATER_METER_H__
#define __WATER_METER_H__

#include <Arduino.h>
#include <dsl_esp_binarysensor.h>
#include <dsl_esp_appbase.h>

using dsl::esp::apps::AppBase;

class WaterMeter : public AppBase
{
private:
    dsl::esp::components::BinarySensor __meter;

public:
    WaterMeter();
    void setup();
    void loop();
};

#endif /* __WATER_METER_H__ */