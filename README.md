# Smart-AC-Automation-ESP8266
IoT-based Smart AC Automation system built using ESP8266 and DHT22. The system continuously monitors room temperature and automatically activates a relay to turn ON the air conditioner when temperature reaches 33°C. Designed for energy-efficient smart home control with real-time sensing and embedded automation logic.

🌡 Smart AC Automation using ESP8266 & DHT22
This project is an IoT-based smart home automation system built using ESP8266 and a DHT22 temperature sensor. The system continuously monitors room temperature and automatically turns ON an air conditioner when the temperature reaches 33°C using a relay module.

The goal of this project is to demonstrate real-time sensing, embedded automation logic, and energy-efficient control.

🚀 Features

Real-time temperature monitoring

Automatic AC activation at 33°C

Relay-based AC switching

Energy-efficient automation

Serial monitoring for debugging

🛠 Hardware Components

ESP8266 (NodeMCU)

DHT22 Temperature Sensor

Relay Module

Breadboard

Jumper Wires

💻 Software Used

Arduino IDE

Embedded C/C++

⚙️ Working Principle

DHT22 reads room temperature.

ESP8266 processes the temperature value.

If temperature ≥ 33°C → Relay turns ON AC.

If temperature < 33°C → Relay turns OFF AC.

Temperature updates every 5 seconds.
