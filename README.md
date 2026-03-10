# ☀️ Arduino Solar Tracker 

This project implements a **Solar Tracking System using Arduino UNO**, Light Dependent Resistors (LDRs), and a Servo Motor.  
The system automatically adjusts the direction of a solar panel (or sensor platform) to follow the direction of maximum sunlight.

Solar tracking improves the **efficiency of solar panels** by ensuring they remain aligned with the strongest light source throughout the day.

---

## Components Used

- Arduino UNO
- Servo Motor
- LDR Sensors (Light Dependent Resistors)
- Resistors (10kΩ)
- Breadboard
- Jumper Wires
- USB Power Supply

---

## Working Principle

1. Multiple **LDR sensors** detect the intensity of light from different directions.
2. The Arduino reads the **analog values** from the LDR sensors.
3. The system compares the light intensity values.
4. Based on the difference in light levels, the **servo motor rotates** towards the direction with higher light intensity.
5. This allows the system to **track the sun automatically**.

---

## Circuit Description

- LDR sensors are connected to the **analog input pins of Arduino**.
- Each LDR forms a **voltage divider with a resistor** to produce readable analog signals.
- The **servo motor is connected to a PWM digital pin**.
- Arduino processes the sensor data and sends position signals to the servo motor.

---

## System Flow

1. Read LDR sensor values
2. Compare light intensity levels
3. Determine the direction of maximum light
4. Rotate servo motor accordingly
5. Continuously update position

---

## Circuit Diagram

![Solar Tracker Circuit](solar_tracker.png)

---

## Technologies Used

- Arduino IDE
- Embedded C
- Analog Sensor Processing
- Servo Motor Control

---

## Applications

- Solar panel orientation systems
- Automatic light tracking devices
- Renewable energy optimization
- Smart agriculture systems

---
