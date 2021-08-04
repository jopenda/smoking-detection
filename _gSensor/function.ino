void updateLcd(){
  line1Clear();
  lcd.setCursor(0, 0);
  lcd.print("ppm: ");
  lcd.print(_sData);
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
