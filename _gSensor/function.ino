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
        if(tempFlag){
          line2Clear();
          delay(100);
          lcd.setCursor(0, 1);
          lcd.print("don't smoke!");
          delay(100);
          tempFlag = false;
        }
      }
    }else if(_data > th_Arr[1]){
      if(tempFlag){
        line2Clear();
        lcd.setCursor(0, 1);
        lcd.print("don't smoke");
        tempFlag = false;
      }
    }else if(_data > th_Arr[0]){
      if(tempFlag){
        line2Clear();
        lcd.setCursor(0, 1);
        lcd.print("warning");
        tempFlag = false;
      }
    }else if(_data){
      line2Clear();
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
