int latchPin = 11;
int clockPin = 9;
int dataPin = 12;
int countButton = 3;
int switchButton = 2;
int pressCounter = 0;

byte states[11] = { B01111110, // 0
                    B00010010, // 1
                    B10111100, // 2
                    B10110110, // 3
                    B11010010, // 4
                    B11100110, // 5
                    B11101110, // 6
                    B00110010, // 7
                    B11111110, // 8
                    B11110110, // 9
                    B11111111, // 10(full)
                  };

void setup() {
  pinMode(latchPin, OUTPUT);
  pinMode(clockPin, OUTPUT);
  pinMode(dataPin, OUTPUT);
  pinMode(switchButton, INPUT_PULLUP);
  pinMode(countButton, INPUT_PULLUP);
}

void show(int number){
  digitalWrite(latchPin, LOW);
  shiftOut(dataPin, clockPin, LSBFIRST, states[number]);  
  digitalWrite(latchPin, HIGH);
}

void loop(){
  
  if(digitalRead(switchButton) == LOW){                                // oczekiwanie na wejście do pętli
    pressCounter = 0;                                       
    delay(500);  
    while(1){                                                   
      show(10);
      if(digitalRead(countButton) == LOW){                             // wciśnięcie countButton inkrementuje wartość licznika
        delay(500);
        pressCounter ++;
      }
      if(digitalRead(switchButton) == LOW){                            // oczekiwanie na spełnienie warunku (wciśnięcie switchButton) do wyjścia z pętli
      delay(500);
      break;
      }
    }
    show(pressCounter%10);
  }  
}
