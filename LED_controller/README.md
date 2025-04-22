# Arduino LED Controller

This project is an Arduino-based LED controller that allows you to toggle between two modes using a button:

- **Blink Mode:** Two LEDs blink alternately.
- **Fade Mode:** Both LEDs fade in and out together using PWM.

## Hardware Requirements
- Arduino Uno (or compatible)
- 2 LEDs
- 2 current-limiting resistors (220Ω recommended)
- 1 push button
- Breadboard and jumper wires

## Circuit Connections
- **LED 1:** Anode to pin 9 (PWM), cathode to GND through a resistor
- **LED 2:** Anode to pin 10 (PWM), cathode to GND through a resistor
- **Button:** One side to pin 3, other side to GND

## How It Works
- On startup, the controller is in Fade mode.
- Press the button to toggle between Blink and Fade modes.
- In Blink mode, the LEDs alternate on and off.
- In Fade mode, both LEDs smoothly fade in and out together.

## Usage
1. Connect the components as described above.
2. Upload the code in `src/main.cpp` to your Arduino board.
3. Press the button to switch between modes.

## File Structure
- `src/main.cpp` - Main Arduino code
- `platformio.ini` - PlatformIO project configuration

## License
This project is open source and free to use.
