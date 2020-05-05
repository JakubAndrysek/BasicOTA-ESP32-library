/**
 * Project:     BasicOTA for VSCode-PlatformIO
 * Doc:         https://github.com/JakubAndrysek/BasicOTA-ESP32-library/blob/master/README.md
 * Proj URL:    https://github.com/JakubAndrysek/BasicOTA-ESP32-library  
 * Author:      Kuba Andrýsek
 * Created:     2020-5-5
 * Website:     https://kubaandrysek.cz
 * Inspiration: https://lastminuteengineers.com/esp32-ota-updates-arduino-ide/
*/

#include "BasicOTA.hpp"
#include <ArduinoOTA.h>

BasicOTA::BasicOTA()
{
    ArduinoOTA
    .onStart([]() {
      String type;
      if (ArduinoOTA.getCommand() == U_FLASH)
        type = "sketch";
      else // U_SPIFFS
        type = "filesystem";

      // NOTE: if updating SPIFFS this would be the place to unmount SPIFFS using SPIFFS.end()
      Serial.println("Start updating " + type);
    })
    .onEnd([]() {
      Serial.println("\nEnd");
    })
    .onProgress([](unsigned int progress, unsigned int total) {
      Serial.printf("Progress: %u%%\r", (progress / (total / 100)));
    })
    .onError([](ota_error_t error) {
      Serial.printf("Error[%u]: ", error);
      if (error == OTA_AUTH_ERROR) Serial.println("Auth Failed");
      else if (error == OTA_BEGIN_ERROR) Serial.println("Begin Failed");
      else if (error == OTA_CONNECT_ERROR) Serial.println("Connect Failed");
      else if (error == OTA_RECEIVE_ERROR) Serial.println("Receive Failed");
      else if (error == OTA_END_ERROR) Serial.println("End Failed");
    });
}

void BasicOTA::begin()
{
    ArduinoOTA.begin();
}

void BasicOTA::handle()
{
    ArduinoOTA.handle();
}