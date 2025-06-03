# Advanced Line Following Robot on AVR ATmega128 (V2)

## 📌 Overview

This project develops an **autonomous line-following robot** using the **ATmega128 microcontroller** with **three infrared line sensors**.  
The robot follows a track using a **simple ON/OFF motor control strategy** instead of PWM-based speed adjustment.

---

## 🔧 Key Features

- **Three Infrared Line Sensors**  
  Detects the black line for directional control.

- **Direct Motor Activation (ON/OFF)**  
  Motors are directly turned ON or OFF for movement — no PWM.

- **Basic Directional Logic**  
  Adjusts movement using predefined logic based on sensor readings.

- **AVR-Based Firmware**  
  Programmed in **C/C++** using **AVR-GCC** for maximum efficiency.

---

## 🔩 Hardware & Components

- ✅ ATmega128 Microcontroller  
- ✅ 3 x Infrared Line Sensors (Left - Middle - Right)  
- ✅ 2 x DC Motors + Motor Driver (L298N or equivalent)  
- ✅ Power Supply (Li-Po or Li-Ion battery recommended)

---

## 🧠 Implementation Steps

1. **Sensor Reading**  
   Read digital values (1 or 0) from 3 IR sensors to determine position.

2. **Motor Control (ON/OFF logic)**  
   Motors are activated or deactivated depending on sensor readings.

3. **Directional Correction**  
   If the line is lost, the robot adjusts direction or stops briefly.

---

## 🔁 Control Algorithm

| Sensor Reading (Binary) | Meaning                        | Action                      |
|-------------------------|--------------------------------|-----------------------------|
| `0b010`                 | Middle sensor on line          | Go straight (both motors ON) |
| `0b110`, `0b100`, `0b111` | Line on left side              | Turn left (right motor ON only) |
| `0b011`, `0b001`        | Line on right side             | Turn right (left motor ON only) |
| `0b000`                 | No line detected               | Stop or reverse briefly     |

---

## ✅ Results & Performance

- Robot successfully tracks **both straight and curved paths**.
- **Quick direction changes** using simple logic.
- Minimal hardware complexity thanks to **non-PWM motor control**.

---

## 🚀 Future Improvements

- 🔄 Implement **PID control** for smoother line tracking.
- ➕ Add **more IR sensors** for precise path detection.
- 📡 Upgrade with **wireless communication** (Bluetooth/Wi-Fi) for real-time control or telemetry.

---

## 👨‍💻 Developed With

- **Language:** C (AVR-GCC)
- **Platform:** Atmel Studio / AVR toolchain
- **Microcontroller:** ATmega128

