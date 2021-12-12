int latchPin = 11;
int clockPin = 9;
int dataPin = 12;

#define rozmiar 9
byte dane[rozmiar] = {B00000000, B10000000, B11000000, B11100000, B11110000, 
                      B11111000 ,B11111100 ,B11111110 ,B11111111};


void setup() {
  pinMode(latchPin, OUTPUT);
  pinMode(clockPin, OUTPUT);
  pinMode(dataPin, OUTPUT);
}

void loop() {

  for(int i = 0; i < rozmiar; i++) {
    digitalWrite(latchPin, LOW);
    shiftOut(dataPin, clockPin, MSBFIRST, dane[i]);
    digitalWrite(latchPin, HIGH);
    delay(500);   
}

 for(int i = 0; i < rozmiar; i++) {
    digitalWrite(latchPin, LOW);
    shiftOut(dataPin, clockPin, MSBFIRST, dane[8-i]);
    digitalWrite(latchPin, HIGH);
    delay(500);   
}

}
