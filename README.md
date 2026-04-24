# parkir-otomatis
  This project is an Arduino-based automatic parking barrier system. It uses a servo motor to open/close the gate, a DC motor driver for mechanism simulation, and an LCD I2C to display status such as “PALANG TERBUKA” and “PALANG TERTUTUP”. It demonstrates basic automation and smart parking concepts.
# Automatic Parking Barrier System (Arduino)

This project is an **automatic parking barrier system** built using Arduino. It simulates a real-world parking gate system commonly used in parking areas, toll gates, and smart access control systems.

---

##  Features
- Automatic gate control using servo motor  
- DC motor simulation using L293D motor driver  
- LCD I2C display for system status  
- Push button and potentiometer input  
- Real-time gate open/close indication  

---

##  How It Works
- The system detects input from a push button or potentiometer.  
- If triggered, the servo motor opens the barrier gate.  
- The DC motor runs via motor driver to simulate gate movement.  
- LCD displays status:  
  - "PALANG TERBUKA" (Gate Open)  
  - "PALANG TERTUTUP" (Gate Closed)  
- When no input is detected, the gate returns to closed position automatically.

---

##  Components Used
- Arduino Uno  
- Servo Motor  
- DC Motor  
- L293D Motor Driver Module  
- LCD 16x2 (I2C)  
- Push Button  
- Potentiometer  
- External Power Supply (9V battery)  
- Jumper wires  

---

##  Software Used
- Arduino IDE  
- C++ (Arduino Programming)

---

##  Wiring Overview
- Servo → Pin 9  
- Button → Pin 2  
- Potentiometer → A0  
- L293D IN1 → Pin 7  
- L293D IN2 → Pin 6  
- LCD → SDA (A4), SCL (A5)

---

##  Purpose
This project is designed for educational purposes to learn:
- Embedded systems with Arduino  
- Motor control using driver modules  
- Basic automation systems  
- Integration of sensors and actuators  

---

## Future Improvements
- Add ultrasonic sensor for real vehicle detection  
- Add RFID card access system  
- Add vehicle counter system  
- Mobile app integration  

---

## simulation video

https://youtu.be/vR7B27MEHOg
---

