# Ultrasonic Distance Sensor — Arduino Uno R4 WiFi

## Project overview
This project reads distance from an HC-SR04 ultrasonic sensor using an `Arduino Uno R4 WiFi` board. Source and configuration files are:
- `src/main.cpp`
- `platformio.ini`

## Hardware
- Arduino Uno R4 WiFi
- HC-SR04 ultrasonic sensor
- Jumper wires
- Breadboard (optional)

Wiring (sensor \-> board):
- `VCC` \-> `5V`
- `GND` \-> `GND`
- `Trig` \-> Digital pin 9
- `Echo` \-> Digital pin 10

_Note: adjust wiring if you change pins in `src/main.cpp`._

## Software
- PlatformIO (recommended) or Arduino CLI/IDE
- Code uses `Serial.begin(9600)`; serial monitor must use 9600 baud.

## `platformio.ini` (template)
Replace `<platform-id>` and `<board-id>` with the correct PlatformIO identifiers for Arduino Uno R4 WiFi.

```ini
[env:uno_r4_wifi]
platform = <platform-id>
board = <board-id>        ; replace with the Uno R4 WiFi board id
framework = arduino
monitor_speed = 9600
