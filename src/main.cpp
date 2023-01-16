#include <Arduino.h>

#include <dsl_esp_wifimanager.h>

using dsl::esp::apps::AppBase;
using dsl::esp::apps::WiFiManager;

AppBase *app;

void setup()
{
    app = new WiFiManager("Smart Water Meter", 115200);
    app->setup();
}

void loop()
{
    app->loop();
}