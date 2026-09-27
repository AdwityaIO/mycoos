# MycoOS

> Cheap. Reliable. Scalable. Open.

An open-source ecosystem for mushroom cultivation using low-cost hardware and fully offline software. MycoOS is designed to be reproducible, repairable, accessible, and scalable.

**Status:** Prototype Development · Stardance 2026

---

## Design Principles

- **Cheap** — Built from widely available components with a target cost under **$50 USD**.
- **Reliable** — Fail-safe firmware, watchdog recovery, and modular hardware.
- **Scalable** — A single chamber works independently, while multiple chambers can operate as a local network.
- **Open** — Hardware, firmware, CAD, PCB, and documentation are released under open licenses.

---

## Current Scope

- ESP32 environmental controller
- Automatic humidity regulation
- Fresh-air exchange control
- Local web dashboard (offline)
- Climate data logging
- QR-based experiment tracking
- Portable `.myco` experiment files

---

## Hardware

| Component | Purpose |
|------------|---------|
| ESP32 | Main controller |
| SHT31 | Temperature & humidity sensing |
| 120 mm PWM fan | Air exchange |
| Ultrasonic mist maker | Humidity generation |
| MOSFET / Relay | Power switching |
| 45–60 L storage tote | Chamber enclosure |

The enclosure is intentionally based on a standard plastic storage tote to minimize manufacturing cost and maximize repairability.

---

## Repository Structure

```text
MycoOS/
├── firmware/          # ESP32 C++
├── dashboard/         # Local web interface
├── hardware/
│   ├── pcb/           # KiCad files
│   └── wiring/        # Schematics
├── cad/               # STEP & STL files
├── docs/
│   ├── devlogs/
│   ├── assembly.md
│   ├── calibration.md
│   └── protocol.md
├── BOM.csv
├── LICENSE
├── LICENSE-HARDWARE
└── LICENSE-DOCS
```

---

## Project Status

| Module | Status |
|----------|--------|
| Repository | ✅ Complete |
| README | ✅ Complete |
| Hardware Architecture | 🟨 In Progress |
| ESP32 Firmware | ⬜ Not Started |
| Dashboard | ⬜ Not Started |
| PCB Design | ⬜ Not Started |
| Prototype Chamber | ⬜ Not Started |

---

## Project Goals

| Metric | Target |
|---------|--------|
| Cost | **Under $50** |
| Runtime | **30+ days** |
| Humidity Stability | **±2% RH** |
| Internet Dependency | **None** |
| Repair Time | **Under 5 minutes** |

---

## Building

Documentation will be added as each subsystem is completed.

1. Assemble the hardware.
2. Flash the ESP32 firmware.
3. Connect to the local Wi-Fi access point.
4. Open the dashboard in a browser.
5. Calibrate the chamber and begin logging experiments.

---

## Roadmap

Development is organized into incremental versions to keep hardware and software reproducible.

### v0.1

- Humidity control
- Fan control
- Sensor readings

### v0.2

- Local dashboard
- Climate logging
- Calibration tools

### v0.3

- QR experiment tracking
- `.myco` export format
- Multi-chamber support

---

## Contributing

Contributions are welcome. For major hardware or protocol changes, please open an issue before submitting a pull request to keep the ecosystem interoperable.

---

## License

- **Software:** MIT License
- **Hardware:** CERN Open Hardware Licence v2 (CERN-OHL-W-2.0)
- **Documentation:** CC BY 4.0

---

MycoOS is an open engineering project focused on making mushroom cultivation reproducible, affordable, and repairable through open hardware and embedded software.
