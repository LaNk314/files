int latchPin = 11;
int clockPin = 9;
int dataPin = 12;
int switchButton = 2;
int countButton = 4;
int pressCounter = 0;

byte states[11] = {B01111110, B00010010, B10111100, B10110110, B11010010, B11100110, 
                      B11101110 ,B00110010 ,B11111110 ,B11110110, B11111111};

void setup() {
  pinMode(latchPin, OUTPUT);
  pinMode(clockPin, OUTPUT);
  pinMode(dataPin, OUTPUT);
  pinMode(2, INPUT);
  pinMode(4, INPUT);
}

void loop(){

  digitalWrite(latchPin, LOW);
  shiftOut(dataPin, clockPin, LSBFIRST, states[pressCounter%10]);
  digitalWrite(latchPin, HIGH);
  if(digitalRead(switchButton) == HIGH){
    pressCounter = 0;                                       
    delay(500);
  
    while(1){                                                   
      digitalWrite(latchPin, LOW);
      shiftOut(dataPin, clockPin, LSBFIRST, states[10]);
      digitalWrite(latchPin, HIGH);
      if(digitalRead(countButton) == HIGH){
        delay(500);
        pressCounter ++;
      }
      if(digitalRead(switchButton) == HIGH){                    
      delay(500);
      break;
      }
    }
  }



  
}
