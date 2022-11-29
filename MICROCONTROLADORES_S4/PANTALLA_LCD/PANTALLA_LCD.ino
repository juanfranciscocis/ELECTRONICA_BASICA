#include <LiquidCrystal.h>
const int rs = A0, en = A1, d4 = A2, d5 = A3, d6 = A4, d7 = A5;
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