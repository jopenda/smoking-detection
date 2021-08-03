#define _2m_SECOND           200/40    
#define _2_SECOND            2000/40                       // Constant for timer setting in times of 40ms 
#define _10_SECOND           10000/40


#define ANALOGPIN A0    
#define RZERO 206.85 

unsigned int readTimer = _2m_SECOND;
unsigned int printTimer = _2_SECOND;

boolean readFlag = false;
boolean printFlag = false;


int _rzero; 
float _sData;
