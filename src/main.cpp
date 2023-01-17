#include <Arduino.h>

#include <dsl_esp_wifimanager_portal.h>

using dsl::esp::apps::AppBase;
using dsl::esp::apps::WiFiManagerPortal;

AppBase *app;

void setup()
{
    app = new WiFiManagerPortal("Smart Water Meter", 115200);
    app->setup();
    if (app->get_status() == 3)
        Serial.println("WiFi is connected, no portal will be shown!");
}

void loop()
{
    app->loop();
}