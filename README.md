# Smart Home Automation System | ESP32

An ESP32-based smart home automation project using PIR, LDR and temperature sensing with relay-based appliance control.

## Features
- Motion-based control using PIR
- Automatic light control using LDR
- Temperature monitoring
- Relay-based light/fan control
- ESP32 GPIO and ADC interfacing
- Embedded C/C++

## Components
ESP32, PIR sensor, LDR sensor, temperature sensor, relay modules, breadboard, jumper wires, LED/fan load.

## Software
Arduino IDE, Embedded C/C++, ESP32 board support.

## Working
The ESP32 reads motion, light and temperature inputs and switches relay outputs according to programmed conditions.

## Repository
- `src/smart_home_automation.ino` — sample firmware
- `images/project_showcase.png` — illustrative project visuals
- `circuit/circuit_description.txt` — wiring overview

> Note: The hardware image in this repository is an illustrative generated visual, not a photograph of an actual personal build. Replace it with your own project photo if available.

## Future Scope
Wi-Fi dashboard, mobile control, MQTT, energy monitoring and voice control can be added.
