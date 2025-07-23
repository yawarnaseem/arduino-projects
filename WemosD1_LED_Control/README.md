# Wemos D1 Mini – Control LEDs via Blynk App

This project demonstrates how to control LEDs over WiFi using the **Wemos D1 Mini** and the **Blynk App**.

It uses **ESP8266 SmartConfig** to receive WiFi credentials from your phone and connect the microcontroller to the internet.

---

## 🔧 Hardware

- Wemos D1 Mini (ESP8266)
- LEDs
- Resistors (220Ω recommended)
- Breadboard + Jumper wires

---

## 📱 Features

- WiFi connection via SmartConfig (no hardcoding SSID/PASS)
- Real-time control of LEDs through Blynk mobile app
- Internet-based interaction without external servers

---

## 🧠 How It Works

1. On power-up, the board waits for SmartConfig credentials.
2. Your phone sends WiFi SSID and password using ESP8266 SmartConfig.
3. Once connected, the board authenticates with Blynk using your auth token.
4. You control LEDs from your phone.

---

## 🧪 Setup

1. Download the **Blynk App** (iOS/Android)
2. Create a new project and select **ESP8266**
3. Copy the **auth token** from the project settings
4. Replace it in the code:
   ```cpp
   char auth[] = "YOUR_AUTH_TOKEN";


D1 --> Resistor --> LED --> GND  
D2 --> Resistor --> LED --> GND
(Use Blynk virtual pins to control D1, D2, etc.)

Blynk Library
https://github.com/blynkkk/blynk-library
ESP8266 Board Package
Install via Arduino Board Manager:
https://arduino.esp8266.com/stable/package_esp8266com_index.json
