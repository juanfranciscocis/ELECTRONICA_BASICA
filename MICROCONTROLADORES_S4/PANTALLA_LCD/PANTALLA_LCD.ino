#include <LiquidCrystal.h>
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);
String var = " ";   
void setup() {
  lcd.begin(16, 2);
  lcd.print("JUAN FRANCISCO");
  lcd.setCursor(0, 1);
  lcd.print("CISNEROS");
  delay(5000);
  lcd.clear();
  lcd.print("PAULA CAMPANA");
  delay(5000);
  lcd.clear();
  lcd.print("DISPENSADOR");
  lcd.setCursor(0, 1);
  lcd.print("DE COMIDA");
  
}

void loop() {

}