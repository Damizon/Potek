# Potek Library

**Author:** Damizon  
**Language:** C++ (Arduino Library)  
**Purpose:** Simplify and improve potentiometer use with Arduino.

---

## 🧠 What is Potek?

**Potek** is an Arduino library designed to simplify the instantiation and handling of analog potentiometers. It includes built-in features such as:

- Output value mapping
- Optional signal inversion
- Output smoothing (noise filtering)

It saves code, adds flexibility, and makes your sketches cleaner and easier to debug.

---

## 📦 Installation

### Option 1 – Arduino IDE

1. Download the latest release `.zip` from the repository.
2. In Arduino IDE, go to **Sketch → Include Library → Add .ZIP Library**.
3. Select the downloaded `Potek.zip` file.

### Option 2 – Manual

1. Extract `Potek.zip` into your `Arduino/libraries` directory.
2. Restart Arduino IDE.

---

## 🧪 Example

```cpp
#include <potek.h>

potek pot1(A0, 0, 255, false, 2);

void setup() {
  Serial.begin(9600); // Start serial communication
}

void loop() {
  int p1 = pot1.read(); // Read smoothed and mapped value
  Serial.println(p1);
}
```

### Constructor Parameters

```cpp
potek(pin, outMin, outMax, invert, smooth);
```

| Parameter | Description                                                  |
|-----------|--------------------------------------------------------------|
| `pin`     | Analog input pin (e.g., `A0`)                                |
| `outMin`  | Minimum output value                                         |
| `outMax`  | Maximum output value                                         |
| `invert`  | `true` to invert output (e.g. 255 → 0), `false` otherwise    |
| `smooth`  | Smoothing threshold (0 = no smoothing, higher = more stable) |

---

## 📁 File Structure

```
Potek/
├── src/
│   └── potek.h / potek.cpp
├── examples/
│   └── basic_usage/
├── library.properties
├── keywords.txt
```

---

## 📄 License

MIT License – free to use, modify, and distribute.

---

## 🧑‍💻 Maintainer

Created by **Ourniti**, reorganized and published with README by **Damizon**.
