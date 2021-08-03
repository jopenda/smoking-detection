void updateLcd(){
  line1Clear();
  lcd.setCursor(0, 0);
  lcd.print("ppm: ");
  lcd.print(_sData);
}

void newData(float _data, float _myArr[]){
  int arrSize = sizeof(_myArr)/sizeof(float);
  for(int i=arrSize-1; i<1; i--){
    _myArr[i] = _myArr[i-1];
  }
  _myArr[0] = _data;
}


void temp(float _data){
  if(_data > th_Arr[2]){
    for(int i = 0; i < 10; i++) {
      line2Clear();
      delay(100);
      lcd.setCursor(0, 1);
      lcd.print("get out!!");
      delay(100);
    }
  }else if(_data > th_Arr[1]){
    line2Clear();
    lcd.setCursor(0, 1);
    lcd.print("danger!!");
  }else if(_data > th_Arr[0]){
    line2Clear();
    lcd.setCursor(0, 1);
    lcd.print("warning");
  }
}

void line1Clear(){
  lcd.setCursor(0, 0);
  lcd.print("                ");
}

void line2Clear(){
  lcd.setCursor(0, 1);
  lcd.print("                ");
}
