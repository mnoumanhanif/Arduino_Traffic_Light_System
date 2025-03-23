# Traffic Control Light System using Arduino

This project simulates a **Traffic Light System** using **Arduino UNO** and **LEDs**. The LEDs light up in a traffic signal pattern (Red → Yellow → Green) to mimic real-world traffic signals.

## 📌 Features
- **Red, Yellow, and Green LEDs** to represent a real traffic light.
- **Time-based transitions** to simulate real signal operation.
- Simple circuit with **Arduino, resistors, and jumper wires**.

## 🛠️ Components Required
| Component      | Quantity | Price (PKR) |
|---------------|----------|------------|
| Arduino UNO   | 1        | 510        |
| Breadboard    | 1        | 130        |
| Red LED       | 1        | 10         |
| Yellow LED    | 1        | 10         |
| Green LED     | 1        | 10         |
| 220Ω Resistors | 3       | 20         |
| Jumper Wires  | 5        | 20         |

## 🏗️ Circuit Diagram
*Refer to `circuit_diagram.png` in this repository.*

## 🔧 Working & Explanation
1. **Circuit Setup**  
   - The **negative** pins of all LEDs are connected to **GND** via **220Ω resistors**.
   - The **positive** pins are connected to:
     - **Red LED → Pin 2**
     - **Yellow LED → Pin 4**
     - **Green LED → Pin 6**
   - Jumper wires connect the **breadboard** to the **Arduino UNO**.

2. **Code Execution**  
   - The **Arduino IDE** is used to write and upload the code.
   - The system cycles through **Red → Yellow → Green** with appropriate delays.

## 📜 Arduino Code
The Arduino code is provided in **`traffic_light.ino`**. It:
- Turns on the **Red LED**, waits, then turns it off.
- Turns on the **Yellow LED**, waits, then turns it off.
- Turns on the **Green LED**, waits, then turns it off.
- Repeats the cycle.

## 🚀 Future Enhancements
- Add **more LEDs** for pedestrian signals.
- Modify the **timing delay** for different traffic conditions.
- Implement the system **without resistors**.

## 📚 References
- Original guide: [PiMyLifeUp - Arduino Traffic Light](https://pimylifeup.com/arduino-traffic-light-project/)
- LED Data Sheet: *Check the provided documentation.*

---

### **How to Add This to GitHub**
1. **Create a new GitHub repository**.
2. Click **"Add file" → "Upload files"**.
3. Upload:
   - `traffic_light.ino`
   - `README.md`
   - `circuit_diagram.png` (if available)
4. Click **"Commit changes"**.

---

✅ **Your Traffic Light System project is ready for GitHub!** 🚦 Let me know if you need any modifications. 🚀
