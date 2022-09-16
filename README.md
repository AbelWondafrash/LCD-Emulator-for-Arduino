# LCD_Emulator_Arduino-side
🐦 A lightweight Arduino class for emulating LCD on your computer. Include this class, plug in your Arduino, start Serial Communication and, run!

### Example

#include "LCDemulator.h"
LCDemulator lcd;

void setup() {
  Serial.begin (9600);
  
  lcd.begin (20, 4);
  lcd.setCursor (0, 1);
  lcd.print ("Hello Emulation!");
  
  delay (1000);
  
  lcd.clear ();
}

void loop() {
}

* Requires LCD_Emulator_Processing-side to run on your computer. Grab it from [here](https://github.com/AbelWondafrash/LCD_Emulator_for_Arduino).
