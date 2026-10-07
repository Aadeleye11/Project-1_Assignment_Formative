# Project 1: C Programming & Embedded Systems Fundamentals

This repository contains three C programs and one Arduino simulation created for Project 1[cite: 10]. It covers basic C programming, control flow, functions, recursion, and embedded hardware logic[cite: 10, 13, 17, 22].

## 📂 Project Files

### 1. Water Quality Monitor (`q1_water_quality.c`)
A program that calculates a Water Quality Index using temperature and turbidity sensor data[cite: 10]. It categorizes the water status as Good, Warning, or Critical based on the calculated index[cite: 10, 11].

### 2. Mobile Money System (`q2_mobile_money.c`)
An interactive terminal menu for a mobile money agent[cite: 13]. It uses an infinite loop to process deposits and withdrawals, checks for sufficient balances, and prints a final transaction summary[cite: 13, 14, 15, 16].

### 3. Delivery Distance Tracker (`q3_delivery_analysis.c`)
A logistics tool that takes user input for delivery routes and analyzes the distances[cite: 17, 19, 20]. It calculates totals and averages using modular functions, and includes a recursive function to sum the array[cite: 17, 18, 20].

### 4. Smart Parking System (Tinkercad)
An Arduino-based simulation that detects if a parking space is occupied[cite: 22].
*   **Hardware:** Arduino Uno, HC-SR04 Ultrasonic Sensor, Red/Green LEDs, and a Buzzer[cite: 22, 23, 24].
*   **Logic:** If a vehicle is detected within 50 cm, the Red LED and Buzzer turn on. If clear, the Green LED stays on[cite: 25, 26]. 

---

## 🚀 How to Run

### C Programs
You will need a C compiler (like GCC) installed. Run these commands in your terminal:
1. Compile the code: `gcc filename.c -o program`
2. Run the executable (Mac/Linux): `./program`
3. Run the executable (Windows): `.\program.exe`

### Arduino Simulation
1. Open Tinkercad Circuits.
2. Build the circuit using the Arduino, ultrasonic sensor, LEDs, and buzzer[cite: 22].
3. Paste in the C++ source code and click **Start Simulation**[cite: 23, 24, 25].

---

**Author:** Ayomide Shadrach Adeleye[cite: 10]