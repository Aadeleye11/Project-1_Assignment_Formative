# Project 1: C Programming Formative

This repository contains three C programs and one Arduino simulation created for Project 1. It covers basic C programming, control flow, functions, recursion, and embedded hardware logic.

## Project Files

### 1. Water Quality Monitor (`q1_water_quality.c`)
A program that calculates a Water Quality Index using temperature and turbidity sensor data. It categorizes the water status as Good, Warning, or Critical based on the calculated index.

### 2. Mobile Money System (`q2_mobile_money.c`)
An interactive terminal menu for a mobile money agent. It uses an infinite loop to process deposits and withdrawals, checks for sufficient balances, and prints a final transaction summary.

### 3. Delivery Distance Tracker (`q3_delivery_analysis.c`)
A logistics tool that takes user input for delivery routes and analyzes the distances. It calculates totals and averages using modular functions, and includes a recursive function to sum the array.

### 4. Smart Parking System (Tinkercad)
An Arduino-based simulation that detects if a parking space is occupied.
*   **Hardware:** Arduino Uno, HC-SR04 Ultrasonic Sensor, Red/Green LEDs, and a Buzzer.
*   **Logic:** If a vehicle is detected within 50 cm, the Red LED and Buzzer turn on. If clear, the Green LED stays on. 



## How to Run

### C Programs
You will need a C compiler (like GCC) installed. Run these commands in your terminal:
1. Compile the code: `gcc filename.c -o program`
2. Run the executable (Mac/Linux): `./program`
3. Run the executable (Windows): `.\program.exe`

### Arduino Simulation
1. Open Tinkercad Circuits.
2. Build the circuit using the Arduino, ultrasonic sensor, LEDs, and buzzer.
3. Paste in the C++ source code and click **Start Simulation**.



**Author:** Ayomide Shadrach Adeleye
