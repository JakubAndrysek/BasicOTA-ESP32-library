/**
 * Project:     BasicOTA for VSCode-PlatformIO
 * Doc:         https://github.com/JakubAndrysek/BasicOTA-ESP32-library/blob/master/README.md
 * Proj URL:    https://github.com/JakubAndrysek/BasicOTA-ESP32-library  
 * Author:      Kuba Andrýsek
 * Created:     2020-5-5
 * Website:     https://kubaandrysek.cz
 * Inspiration: https://lastminuteengineers.com/esp32-ota-updates-arduino-ide/
*/

#include <Arduino.h>
#include <WiFi.h>
#include "BasicOTA.hpp"

#define SSID      "SSID"
#define PASSWORD  "PASSWORD"

BasicOTA OTA;

void setup() {
  Serial.begin(115200);
  Serial.println("Startup");
  WiFi.mode(WIFI_STA);
  WiFi.begin(SSID, PASSWORD);
  while (WiFi.waitForConnectResult() != WL_CONNECTED) {
    Serial.println("Connection Failed! Rebooting...");
    delay(5000);
    ESP.restart();
  }

  OTA.begin(); // Setup settings

  Serial.println("Ready");
  Serial.print("IP address: ");
  Serial.println(WiFi.localIP());
}

void loop() {
  OTA.handle();  
}