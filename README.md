# Process Memory Monitoring & Security Detection System (C++ OOP)

## Overview

This project is a C++ Object-Oriented Programming (OOP) simulation of a basic Process Memory Monitoring and Security Detection System.

It simulates how operating systems or security tools monitor running processes, analyze memory usage, and detect suspicious behavior based on a predefined threshold.

The system demonstrates core OOP principles such as:
- Encapsulation
- Abstraction
- Class interaction
- Modular design

---

## Features

- Simulated process management (PID, name, memory usage)
- Memory usage monitoring system
- Average memory usage calculation
- Security detection based on memory threshold
- Alert system for suspicious processes
- Modular OOP architecture

---

## Project Structure

All code is currently implemented in a single file:

main.cpp

---

## Classes Overview

### 1. Process Class
Represents a system process:
- PID
- Process name
- Memory usage

---

### 2. MemoryMonitor Class
Responsible for:
- Displaying all processes
- Calculating average memory usage

---

### 3. SecurityDetector Class
Responsible for:
- Detecting processes that exceed memory threshold
- Generating security alerts

---

### 4. SystemManager Class
Acts as the main controller:
- Stores processes
- Coordinates monitoring and detection

---

## How It Works

1. System is initialized with a memory threshold (e.g. 300 MB)
2. Simulated processes are added to the system
3. System displays all running processes
4. Average memory usage is calculated
5. Security scan is performed:
   - If process memory > threshold → ALERT
   - Otherwise → SAFE

---

## Example Output

--- Process Memory Report ---
PID: 1 | Name: chrome.exe | Memory: 450 MB
PID: 2 | Name: explorer.exe | Memory: 120 MB
PID: 3 | Name: game.exe | Memory: 800 MB
PID: 4 | Name: notepad.exe | Memory: 50 MB

Average Memory Usage: 355 MB

--- Security Scan Report ---
[ALERT] Suspicious Process Detected!
PID: 1 | Name: chrome.exe | Memory: 450 MB
[ALERT] Suspicious Process Detected!
PID: 3 | Name: game.exe | Memory: 800 MB

---

## How to Run

### 1. Compile the code
g++ main.cpp -o app

### 2. Run the program
./app

---

## Concepts Used

- Object-Oriented Programming (OOP)
- Encapsulation
- Class composition
- Vectors (STL)
- Basic algorithm design
- Simple anomaly detection logic

---

## Use Case

This project simulates how:
- Operating systems monitor processes
- Security tools detect abnormal behavior
- Memory usage analysis is performed

It is a simplified model of real-world tools such as:
- Task Manager (Windows)
- top / htop (Linux)
- Basic antivirus systems

---

## Future Improvements

- Real-time process monitoring (OS API integration)
- Multithreading support
- GUI dashboard (Qt)
- Advanced anomaly detection (AI/ML-based)
- Logging system (save alerts to file)

---

## Author

Dita Salsabila Lubis

Focus: System Simulation & Security Tools

---

## License

This project is for educational purposes only.
