# Advanced-Line-Following-Robot-on-AVR-ATmega128-V2
#Overview

This project develops an autonomous line-following robot using the ATmega128 microcontroller with three infrared line sensors. The robot follows a track using a simple on/off motor control strategy instead of PWM-based speed adjustment.

#Key Features
Three Infrared Line Sensors: Detects the line for directional control.

Direct Motor Activation: Motors turn ON/OFF for movement instead of PWM control.

Basic Directional Logic: Adjusts movement based on sensor input.

AVR-Based Firmware: Programmed in C/C++ using AVR-GCC.

#Hardware & Components
ATmega128 Microcontroller

Three Infrared Line Sensors

DC Motors & Motor Driver (L298N or similar)

Power Source (Li-Po or Li-Ion Battery)

#Implementation
Sensor Reading: Process signals from three infrared sensors.

Motor Control (ON/OFF): Robot moves based on predefined conditions.

Directional Correction: Adjusts movement when the line is lost.

#Algorithm

Middle Sensor Active (0b010) → Motors ON, move forward.

Left Sensor Active (0b110, 0b100, 0b111) → Left motor OFF, right motor ON (turn left).

Right Sensor Active (0b011, 0b001) → Right motor OFF, left motor ON (turn right).

No Line Detected (0b000) → Follow the last direction or reverse briefly.

#Results & Performance

Robot tracks straight and curved paths using simple logic.

Quick direction adjustments enable efficient movement.

No need for PWM control, making implementation simpler and hardware-friendly.

#Future Improvements

Implement PID control for smoother tracking.

Add more sensors for better path recognition.

Upgrade wireless communication for remote monitoring.
