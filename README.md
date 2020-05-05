# Basic OTA for VSCode - PlatformIO
This project is inspirated by [Lastminuteengineers.com](https://lastminuteengineers.com/esp32-ota-updates-arduino-ide/)
## Usage

### [Example code](https://github.com/JakubAndrysek/BasicOTA-ESP32-library/example/BasicUsage)

### First start
1. Create new [PlatformIO](https://platformio.org/) projest - Eespressif ESP32 Dev Module
1. Copy [example]() into `main.cpp`
1. Change WiFi SSID and PASSWORD
1. Open `platformio.ini` and after `framework = arduino` put this line `upload_flags = -p 3232`. It fix some issue.
1. Connect ESP32 to the PC and flash software. For the first time ESP must be connected by cable!

### Next Usage
1. If you se in your terminal IP adress of your ESP follow to the next point. If not, try the First start again
1. Open again `platformio.ini` and add `upload_port = YOUR ESP32 IP` after `upload_flags = -p 3232` Example: [`upload_port = 192.168.0.166`]()
1. That`s all 😃

Succes Terminal message
[![Build Status](/docs/SuccesTerminal.png)]()
Succes ESP message
[![Build Status](/docs/SussecESP.png)]()


### License - [MIT](https://github.com/JakubAndrysek/BasicOTA-ESP32-library/blob/master/LICENSE)
