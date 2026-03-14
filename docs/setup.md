# Setup Guide

This guide covers everything you need to build and run the Traffic Light System.

## Hardware Requirements

| Component        | Quantity | Description                          |
|-----------------|----------|--------------------------------------|
| Arduino UNO     | 1        | Microcontroller board                |
| Breadboard      | 1        | For prototyping the circuit          |
| Red LED         | 1        | Represents the stop signal           |
| Yellow LED      | 1        | Represents the caution signal        |
| Green LED       | 1        | Represents the go signal             |
| 220Ω Resistors  | 3        | Current-limiting resistors for LEDs  |
| Jumper Wires    | 5        | For connecting components            |
| USB Cable       | 1        | To connect Arduino to your computer  |

## Software Requirements

- [Arduino IDE](https://www.arduino.cc/en/software) (version 1.8 or later) **or**
- [PlatformIO](https://platformio.org/) with VS Code

## Wiring Instructions

Connect the components as follows:

| LED    | Positive Pin (Anode) | Negative Pin (Cathode)       |
|--------|---------------------|------------------------------|
| Red    | Arduino Pin 2       | GND via 220Ω resistor        |
| Yellow | Arduino Pin 4       | GND via 220Ω resistor        |
| Green  | Arduino Pin 6       | GND via 220Ω resistor        |

Refer to `assets/circuit_diagram.png` for a visual diagram.

## Upload the Sketch

### Using Arduino IDE

1. Open the Arduino IDE.
2. Go to **File → Open** and select `src/Traffic_Light_System/Traffic_Light_System.ino`.
3. Select your board: **Tools → Board → Arduino UNO**.
4. Select your port: **Tools → Port → (your Arduino port)**.
5. Click the **Upload** button (right arrow icon).

### Using Arduino CLI

```bash
arduino-cli compile --fqbn arduino:avr:uno src/Traffic_Light_System/Traffic_Light_System.ino
arduino-cli upload -p /dev/ttyACM0 --fqbn arduino:avr:uno src/Traffic_Light_System/Traffic_Light_System.ino
```

## Verify Operation

After uploading, the LEDs should cycle:

1. **Red** lights up for 3 seconds.
2. **Yellow** lights up for 1.5 seconds.
3. **Green** lights up for 3 seconds.
4. **Yellow** lights up for 1.5 seconds.
5. Cycle repeats.
