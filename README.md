# Arduino Push Button Input

Project Overview
This project demonstrates digital input handling using a push button with Arduino Uno.
It explains internal pull-up, external pull-up, and external pull-down resistor configurations.

Components Used
- Arduino Uno
- Push Button
- LED
- 220Ω Resistor
- 10kΩ Resistor
- Jumper Wires

Circuit Configurations

1️⃣ Internal Pull-Up Configuration
- Button connected between Pin 2 and GND
- Internal pull-up enabled using INPUT_PULLUP
- Logic: Pressed → LOW, Released → HIGH

2️⃣ External Pull-Up Configuration
- Pin 2 connected to +5V through 10kΩ resistor
- Button connected to GND
- Logic: Pressed → LOW, Released → HIGH

3️⃣ External Pull-Down Configuration
- Pin 2 connected to GND through 10kΩ resistor
- Button connected to +5V
- Logic: Pressed → HIGH, Released → LOW

Understanding the Codes
This project uses three separate programs to clearly demonstrate:

- Internal pull-up resistor configuration
- External pull-up resistor configuration
- External pull-down resistor configuration

Each configuration is implemented using a separate and simple Arduino program
to make learning and understanding easier.

Pull-Up vs Pull-Down Explanation
Arduino Uno uses ATmega328P microcontroller which supports only internal pull-up resistors.
Internal pull-down resistors are not available at hardware level, therefore external pull-down resistors must be used.

Learning Outcome
- Digital input handling
- INPUT_PULLUP concept
- Pull-up vs pull-down logic
- Professional GitHub documentation
