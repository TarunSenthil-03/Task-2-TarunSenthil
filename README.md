# 🌱 Automated Irrigation Controller (Actuator Logic)

## 📌 Project Overview

The Automated Irrigation Controller is an Arduino-based smart irrigation system that monitors soil moisture and automatically controls water supply. The system reads real-time analog data from a soil moisture sensor (simulated using a potentiometer in Wokwi) and activates a relay or LED when the soil becomes dry.

This project demonstrates the implementation of a closed-loop feedback control system using Arduino, Analog-to-Digital Conversion (ADC), and threshold-based actuator logic.

---

## 🚀 Features

- Automatic irrigation control
- Real-time soil moisture monitoring
- Threshold-based decision making
- Relay/LED control for water pump simulation
- Arduino Uno compatible
- Wokwi simulation support

---

## 🛠️ Components Used

- Arduino Uno
- Soil Moisture Sensor (Potentiometer in Simulation)
- 5V Relay Module
- LED
- 220Ω Resistor
- Jumper Wires

---

## ⚙️ Working Principle

1. The soil moisture sensor measures the moisture level.
2. Arduino reads the analog value from pin A0.
3. The value is compared with a predefined threshold.
4. If the soil is dry, Arduino activates the relay (or LED), simulating the water pump.
5. When sufficient moisture is detected, the relay is turned OFF.

---

## 🔌 Pin Connections

| Component | Pin | Arduino Connection |
|-----------|-----|--------------------|
| Soil Moisture Sensor (Potentiometer) | VCC | 5V |
| Soil Moisture Sensor (Potentiometer) | GND | GND |
| Soil Moisture Sensor (Potentiometer) | SIG (AO) | A0 |
| Relay Module | VCC | 5V |
| Relay Module | GND | GND |
| Relay Module | IN | D8 |
| LED | Anode (+) | D8 (through a 220Ω resistor) |
| LED | Cathode (-) | GND |

---

## 💻 Software Used

- Arduino IDE
- Wokwi Simulator

---

## 📊 Simulation Output

The Automated Irrigation Controller successfully monitors the simulated soil moisture level and automatically controls the irrigation pump based on a predefined threshold value.

### Threshold Logic

- **Moisture Value < 500 → Relay/LED ON (Pump ON)**
- **Moisture Value ≥ 500 → Relay/LED OFF (Pump OFF)**

### Sample Serial Monitor Output

```text
Moisture: 174
Pump ON

Moisture: 333
Pump ON

Moisture: 746
Pump OFF

Moisture: 890
Pump OFF
```

### Observation

| Moisture Value | Soil Condition | Relay/LED Status | Pump Status |
|---------------:|---------------|------------------|-------------|
| 174 | Dry | ON | ON |
| 333 | Dry | ON | ON |
| 746 | Wet | OFF | OFF |
| 890 | Wet | OFF | OFF |

### Result

The Arduino continuously reads the simulated soil moisture values from the potentiometer through analog pin A0. When the moisture value is below the threshold of **500**, the relay/LED is activated, indicating that the pump is **ON** to irrigate the soil. When the moisture value is **500 or higher**, the relay/LED is deactivated, indicating that the pump is **OFF** because the soil has sufficient moisture. This demonstrates an efficient threshold-based automated irrigation control system.

---

## 🎯 Learning Outcomes

- Arduino Programming
- Analog-to-Digital Conversion (ADC)
- Sensor Interfacing
- Relay Control
- Threshold-Based Logic
- Embedded Systems
- Smart Irrigation System Design

---

## 👨‍💻 Author

**Tarun Senthil**

**B.E. Electronics and Communication Engineering (ECE)**
