#include <LiquidCrystal.h>

LiquidCrystal lcd(8, 7, 6, 5, 4, 3);

void setup() {
  lcd.begin(16, 2);
}

void loop() {
  lcd.setCursor(0, 0);
  lcd.print("SENI SEVIYORUM");
  lcd.setCursor(2, 1);
  lcd.print("   <3 ");
}
