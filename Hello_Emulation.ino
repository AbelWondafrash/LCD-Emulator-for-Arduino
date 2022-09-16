#include "LCDemulator.h"
LCDemulator lcd;

void setup() {
  Serial.begin (9600); // Required by LCD Emulator for Serial Communication
                       // Must match that of LCD Emulator Processing Side
  
  lcd.begin (20, 4); // Set the Character LCD size matching the Processing side here
  lcd.setCursor (0, 1);
  lcd.print ("Hello Emulation!");
  
  delay (1000);
  
  lcd.clear ();
}

void loop() {
}
