#include <LiquidCrystal.h> // includes the LiquidCrystal Library 


LiquidCrystal lcd(2, 3, 4, 5, 6, 7); // Creates an LC object. Parameters: (rs, enable, d4, d5, d6, d7) 

void setup() { 
 lcd.begin(16,2); // Initializes the interface to the LCD screen, and specifies the dimensions (width and height) of the display
 } 

void loop() {
  lcd.print("Hello World");
    delay(2000);
  lcd.clear();



  
}

