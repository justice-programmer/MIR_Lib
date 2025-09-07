# MIR_lib

**MIR_lib** is a lightweight Arduino library for controlling and reading from a multi-sensor/motor driver array.  
It is designed for robotics projects where multiple pins need to be managed efficiently.

---

## ✨ Features
- Simple pin configuration and initialization.
- Provides easy functions for setting outputs.
- Designed for extensibility to handle multi-sensor arrays.
- Works with PlatformIO and Arduino IDE.

---

## 📦 Installation

### PlatformIO
Add this to your `platformio.ini`:
```ini
lib_deps =
    yourusername/MIR_lib
```


Or install manually:

```bash

pio lib install https://github.com/justice-programmer/MIR_Lib/

```


## Example codes
```ino
#include <Arduino.h>
#include <MIR_Lib.h>

// Example pin numbers for motor/sensor array
int pins[] = {13, 12, 11, 10};

void setup() {
    Serial.begin(9600);

    // Initialize the MIR library with pin array
    for (int i = 0; i < 4; i++) {
        pinMode(pins[i], OUTPUT);
    }
}

void loop() {
    // Example forward motor driver setup (H-L-H-L)
    digitalWrite(13, HIGH);
    digitalWrite(12, LOW);
    digitalWrite(11, HIGH);
    digitalWrite(10, LOW);

    delay(1000); // Wait before next cycle
}
```

