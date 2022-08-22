#include <Arduino.h>


void PrintValue(float vin){
    
  lcd.clear();

  lcd.setCursor(0,0);
  lcd.print("Tension Salida:");

  lcd.setCursor(5,2);
  lcd.print("Vx:");
  lcd.print(vin,2);

  delay(50);

}
