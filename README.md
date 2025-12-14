# 🔌 Embedded C Menu-Driven Simulation Project

A console-based simulation of common embedded systems functionalities using pure C. This project does not require any hardware or simulator — it mimics embedded behavior entirely in software, making it ideal for learning, demonstration, and testing embedded concepts.

---

## 📋 Features

This menu-driven program includes the following modules:

| Module | Description |
|--------|-------------|
| 🟥 Traffic Light Simulation | Simulates Red, Yellow, and Green lights using a finite state machine |
| 🔒 Password Protected Lock | Secure access system using string comparison and limited attempts |
| 💡 LED Pattern Generator | Generates visual patterns using bitwise operations |
| ⏱ Stopwatch Timer | A simple timer that counts seconds with delay logic |
| 🔁 UART Communication Simulation | Mimics character send/receive using standard I/O |
| 🔧 Bitwise Port Control | Demonstrates port-level control using bit masking |
| 🧠 EEPROM File Simulation | Emulates EEPROM behavior using file read/write operations |

---

## ⚙️ Requirements

- [GCC](https://gcc.gnu.org/) or any C compiler (e.g., Turbo C++, Code::Blocks, Dev C++)
- Unix-based terminal or Windows command line

---

## 🚀 How to Compile & Run

### 💻 On Linux / Mac / WSL:
gcc embedded_menu.c -o embedded_menu
./embedded_menu


### 🪟 On Windows:

Use any C IDE like Code::Blocks or Dev C++

Compile and run embedded_menu.c as a console application



### 🧠 Learning Outcomes

Understanding embedded systems logic without hardware

Practice with FSM, I/O simulation, and port bit control

Mastery of C constructs like enums, structures, functions, and file handling

Exposure to embedded-like tasks in a safe desktop environment

### 🛡️ Disclaimer

This is a software-only educational simulation. It doesn't interact with actual microcontrollers or GPIO pins. To deploy these concepts on hardware, adaptations using microcontroller SDKs (e.g., for 8051, AVR, or STM32) would be necessary.

### 📌 License

This project is licensed under the MIT License. Feel free to use, modify, and distribute.

### 👨‍💻 Author

**Embedded C — Menu-Driven Simulation**

This small project is a console-based simulation of common embedded-system building blocks written in plain C. It's intended for learning and demonstrations without requiring real hardware.

Highlights
- Portable menu-driven examples showing FSMs, bitwise port control, simple file-backed "EEPROM", UART-style I/O emulation, and more.
- Small, single-source-file project ideal for students and hobbyists.

Repository status
- License: MIT
- CI: Build on push/PR (GitHub Actions)

Features
- Traffic light (finite-state machine)
- Password-protected lock (simple auth example)
- LED pattern generator (bitwise ops)
- Stopwatch timer
- UART I/O simulation (stdin/stdout)
- Bitwise port control examples
- EEPROM simulation using a binary file

Requirements
- A C compiler (GCC / clang / MSVC)

Quick Start (Linux / macOS / WSL)
```bash
gcc -std=c11 -Wall -Wextra embedded_menu.c -o embedded_menu
./embedded_menu
```

Quick Start (Windows using MSYS2 / MinGW)
```powershell
gcc -std=c11 -Wall -Wextra embedded_menu.c -o embedded_menu.exe
.\embedded_menu.exe
```

Build with Make (Unix-like)
```bash
make
```

Notes
- The program is intentionally simple for teaching; inputs use standard console I/O.
- The code includes a small portability layer so it builds on Windows and POSIX systems.

Contributing
- See `CONTRIBUTING.md` for contribution guidelines.

License
- This project is released under the MIT License. See `LICENSE`.

Author
- Joseph Jonathan Fernandes
