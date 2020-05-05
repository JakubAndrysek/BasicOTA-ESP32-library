# Basic OTA library for ESP32 and VSCode - PlatformIO
### By [Kuba Andrýsek](https://kubaandrysek.cz/)
This project is inspirated by [Lastminuteengineers.com](https://lastminuteengineers.com/esp32-ota-updates-arduino-ide/)
## Usage

### [Example project](https://github.com/JakubAndrysek/BasicOTA-ESP32-library/tree/master/example/BasicUsage)

### First start
1. Create new [PlatformIO](https://platformio.org/) projest - Eespressif ESP32 Dev Module
1. Copy [example](https://github.com/JakubAndrysek/BasicOTA-ESP32-library/blob/master/example/BasicUsage/main.cpp) code into `main.cpp`
1. Change WiFi SSID and PASSWORD
1. Open `platformio.ini` and after `framework = arduino` put this line `upload_flags = -p 3232`. It fix [upload](https://github.com/platformio/platform-espressif32/issues/197) issue.
1. Connect ESP32 to the PC and flash software. For the first time ESP must be connected by cable!

### Next Usage
1. If you se in your terminal IP adress of your ESP follow to the next point. If not, try the First start again
1. Open `platformio.ini` and add `upload_port = YOUR ESP32 IP` (IP adress is displayed in the terminal) after `upload_flags = -p 3232` Example: [`upload_port = 192.168.0.166`]()
1. That`s all 😃. Now will be your programe uploaded trought the WiFI

Succes upload message - Upload status

[![Build Status](/docs/SuccesTerminal.png)]()
Succes upload message - Terminal

[![Build Status](/docs/SussecESP.png)]()


### License - [MIT](https://github.com/JakubAndrysek/BasicOTA-ESP32-library/blob/master/LICENSE)
