# Pepito Library

## Overview
The **Pepito Library** is a robust and modular C library designed to simulate and manage various components of a nuclear reactor's auxiliary systems. It provides a set of functions to initialize, monitor, and control critical subsystems such as steam turbines, temperature regulation, and remote access. The library is developed as part of the **G-SEC-210 Pipeto Project** and adheres to secure software development practices.

This library is intended for educational purposes and is not suitable for real-world nuclear reactor systems.

---

## Features
The Pepito Library offers the following functionalities:
- **Steam Turbine Initialization**: Safely initialize and monitor the steam turbine system.
- **Configuration Management**: Read and apply turbine configuration files.
- **Temperature Control**: Adjust and monitor turbine temperature.
- **Remote Access**: Enable and manage secure remote access to turbine systems.
- **Diagnostics**: Run turbine diagnostics and simulate operational scenarios.

---

## Installation

### Prerequisites
- GCC or any compatible C compiler.
- Make utility.
- Linux-based operating system (recommended for compatibility).

### Build Instructions
   ```bash
   $> git clone https://github.com/your-repo/pepito-library.git
   $> cd pepito-library
   $> make
```

---

## Security Considerations
The Pepito Library is designed for educational purposes and includes intentional vulnerabilities to simulate real-world scenarios. These vulnerabilities are meant to teach secure coding practices and should not be used in production environments.

---
## Project Structure
```
pepito-library/
├── includes/
│   └── pepito.h          # Header file for the library
├── src/
│   ├── init_steam_turbine.c
│   ├── read_turbine_config.c
│   ├── turbine_remote_access.c
│   ├── turbine_temperature.c
│   └── run_turbine.c
├── Makefile              # Build script
└── README.md             # Project documentation
```

---

## License
This project is licensed under the MIT License.

---

## Disclaimer
The Pepito Library is for educational purposes only. It is not intended for use in real-world nuclear reactor systems or any other critical infrastructure.