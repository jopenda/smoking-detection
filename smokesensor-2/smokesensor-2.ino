
#include<LiquidCrystal_I2C.h>
#define ANALOGPIN A0


LiquidCrystal_I2C lcd(0x27, 16, 2);

float co2(float a) {
  return a/1000;
}


void setup() {
  Serial.begin(9600);
  delay(3000);
  lcd.begin();

}

void loop() {
  float vOut = analogRead(ANALOGPIN);

  Serial.println(vOut);
  delay(3000);
  lcd.setCursor(0, 0);
  lcd.print("CO2: ");
  lcd.print(co2(vOut));

}
