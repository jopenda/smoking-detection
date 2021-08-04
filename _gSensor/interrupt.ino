ISR(TIMER1_COMPA_vect){ 
    interrupts();     
    if(!--readTimer){
      //read
      readFlag = true;
      readTimer = _2m_SECOND;
    }
    if(!--printTimer){
      //print
      printFlag = true;
      printTimer = _2_SECOND;
    }
    if(!--tempTimer){
      tempFlag = true;
      tempTimer = _5_SECOND;
    }
}
