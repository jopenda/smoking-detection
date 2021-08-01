
void loop() {
  float ppm = gasSensor.getPPM();
  delay(1000);
  Serial.print("CO2 ppm value : ");
  Serial.println(ppm);
  lcd.setCursor(0, 0);
  lcd.print("CO2: ");
  lcd.print(co2(ppm));

  if(co2 >= co2 + 2) {
    lcd.setCursor(0, 1);
    lcd.print("don't smoke");
    
  }
}
