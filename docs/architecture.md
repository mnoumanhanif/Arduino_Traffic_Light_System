# Architecture

This document describes the design and logic of the Traffic Light System.

## Overview

The system simulates a standard traffic light using three LEDs controlled by an Arduino UNO. The program runs an infinite loop that cycles through four states, mimicking real-world traffic signal behavior.

## System Components

```
┌─────────────────────────────────────────────────┐
│                  Arduino UNO                     │
│                                                  │
│   Pin 2 ──── 220Ω ──── Red LED ──── GND        │
│   Pin 4 ──── 220Ω ──── Yellow LED ──── GND     │
│   Pin 6 ──── 220Ω ──── Green LED ──── GND      │
│                                                  │
└─────────────────────────────────────────────────┘
```

## State Machine

The traffic light operates as a four-state sequential machine:

```
┌───────────┐     1.5s     ┌───────────┐
│           │ ───────────> │           │
│  RED (3s) │              │  YELLOW   │
│           │              │  (1.5s)   │
└───────────┘              └─────┬─────┘
      ^                         │
      │                         v
┌─────┴─────┐              ┌───────────┐
│           │              │           │
│  YELLOW   │ <─────────── │ GREEN (3s)│
│  (1.5s)   │              │           │
└───────────┘              └───────────┘
```

| State  | Red | Yellow | Green | Duration |
|--------|-----|--------|-------|----------|
| 1      | ON  | OFF    | OFF   | 3000 ms  |
| 2      | OFF | ON     | OFF   | 1500 ms  |
| 3      | OFF | OFF    | ON    | 3000 ms  |
| 4      | OFF | ON     | OFF   | 1500 ms  |

## Code Structure

The sketch follows standard Arduino conventions:

- **`setup()`** — Runs once at power-on. Configures LED pins as outputs.
- **`loop()`** — Runs repeatedly. Calls state functions in sequence with delays.
- **`showRed()`** / **`showYellow()`** / **`showGreen()`** — Each function activates one LED and deactivates the others, ensuring only one light is on at a time.

## Design Decisions

1. **`const` variables** — Pin assignments and durations are declared as `const int` to prevent accidental modification and enable compiler optimizations.
2. **Dedicated state functions** — Each traffic light state is a separate function for clarity and maintainability.
3. **Single Yellow function** — States 2 and 4 both show yellow, so they reuse the same `showYellow()` function instead of duplicating code.

## Future Improvements

- **Pedestrian crossing** — Add a button input and pedestrian signal LEDs.
- **Configurable timing** — Read timing values from serial input or EEPROM.
- **Multiple intersections** — Coordinate two or more traffic lights.
- **Night mode** — Flash yellow only during low-traffic hours.
