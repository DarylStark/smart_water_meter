#include <Arduino.h>

#include <dsl_esp_wifimanager_portal.h>

using dsl::esp::apps::AppBase;
using dsl::esp::apps::WiFiManagerPortal;

AppBase *app;

void setup()
{
    app = new WiFiManagerPortal("Smart Water Meter", 115200);
    app->setup();
    WiFiManagerPortal *wifiportal = dynamic_cast<WiFiManagerPortal *>(app);
    if (wifiportal)
    {
        if (wifiportal->get_mode() == WiFiManagerPortal::ManagerMode::Connected)
        {
            Serial.println("WiFi portal is connected!");
        }
    }
}

void loop()
{
    app->loop();
}