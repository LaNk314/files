int latchPin = 11;
int clockPin = 9;
int dataPin = 12;
int switchButton = 2;
int countButton = 4;

#define rozmiar 11
byte dane[rozmiar] = {B01111110, B00010010, B10111100, B10110110, B11010010, B11100110, 
                      B11101110 ,B00110010 ,B11111110 ,B11110110, B11111111};




void setup() {
  pinMode(latchPin, OUTPUT);
  pinMode(clockPin, OUTPUT);
  pinMode(dataPin, OUTPUT);
  pinMode(2, INPUT);
  pinMode(4, INPUT);
}

void loop() {
/*
  for(int i = 0; i < rozmiar; i++) {
    digitalWrite(latchPin, LOW);
    shiftOut(dataPin, clockPin, LSBFIRST, dane[i]);
    digitalWrite(latchPin, HIGH);
    delay(500);   
}

 for(int i = 0; i < rozmiar; i++) {
    digitalWrite(latchPin, LOW);
    shiftOut(dataPin, clockPin, LSBFIRST, dane[10-i]);
    digitalWrite(latchPin, HIGH);
    delay(500);   
}
*/
int pressCounter = 0;                                       // Zerujemy licznik przycisków
delay(500);

while(1){                                                   // Pętla do wyklikania liczby przyciskiem countButton
  digitalWrite(latchPin, LOW);
  shiftOut(dataPin, clockPin, LSBFIRST, dane[10]);
  digitalWrite(latchPin, HIGH);
  if(digitalRead(countButton) == HIGH){
    pressCounter ++;
    delay(500);
  }
  if(digitalRead(switchButton) == HIGH){                    // Po wyklikaniu, przechodzimy do wyświetlania przyciskiem switchButton
  break;
  }
  }
  
delay(500);

while(1){                                                     // Wyświetla się wyklikana liczba
  digitalWrite(latchPin, LOW);
  shiftOut(dataPin, clockPin, LSBFIRST, dane[pressCounter%10]);
  digitalWrite(latchPin, HIGH);
  if(digitalRead(switchButton) == HIGH){                      // Powracamy do wyklikiwania przyciskiem switchButton
  break;
  }
  }
  
}
