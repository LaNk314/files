#define SEG_A 2
#define SEG_B 3
#define SEG_C 4
#define SEG_D 5
#define SEG_E 6
#define SEG_F 7
#define SEG_G 8 
#define SEG_K 9
void show(int number) {
switch(number) {
  case 0:
    digitalWrite(SEG_A, HIGH);
    digitalWrite(SEG_B, HIGH);
    digitalWrite(SEG_C, HIGH);
    digitalWrite(SEG_D, HIGH);
    digitalWrite(SEG_E, HIGH);
    digitalWrite(SEG_F, HIGH);
    
    digitalWrite(SEG_G, LOW);
    digitalWrite(SEG_K, LOW);
  break;  
  case 1:
    digitalWrite(SEG_B, HIGH);
    digitalWrite(SEG_C, HIGH);
    
    digitalWrite(SEG_A, LOW);
    digitalWrite(SEG_D, LOW);
    digitalWrite(SEG_E, LOW);
    digitalWrite(SEG_F, LOW);
    digitalWrite(SEG_G, LOW);
    digitalWrite(SEG_K, LOW);
  break;
  case 2:
    digitalWrite(SEG_A, HIGH);
    digitalWrite(SEG_B, HIGH);
    digitalWrite(SEG_G, HIGH);
    digitalWrite(SEG_E, HIGH);
    digitalWrite(SEG_D, HIGH);

    digitalWrite(SEG_C, LOW);
    digitalWrite(SEG_F, LOW);
    digitalWrite(SEG_K, LOW);

  break;
  case 3:
    digitalWrite(SEG_A, HIGH);
    digitalWrite(SEG_B, HIGH);
    digitalWrite(SEG_G, HIGH);
    digitalWrite(SEG_C, HIGH);
    digitalWrite(SEG_D, HIGH);

    digitalWrite(SEG_E, LOW);
    digitalWrite(SEG_F, LOW);
    digitalWrite(SEG_K, LOW);
    
  break;
  case 4:
    digitalWrite(SEG_F, HIGH);
    digitalWrite(SEG_B, HIGH);
    digitalWrite(SEG_G, HIGH);
    digitalWrite(SEG_C, HIGH);

    digitalWrite(SEG_A, LOW);
    digitalWrite(SEG_D, LOW);
    digitalWrite(SEG_E, LOW);
    digitalWrite(SEG_K, LOW);

  break;
  case 5:
    digitalWrite(SEG_A, HIGH);
    digitalWrite(SEG_F, HIGH);
    digitalWrite(SEG_G, HIGH);
    digitalWrite(SEG_C, HIGH);
    digitalWrite(SEG_D, HIGH);

    digitalWrite(SEG_B, LOW);
    digitalWrite(SEG_E, LOW);
    digitalWrite(SEG_K, LOW);

  break;
  case 6:
    digitalWrite(SEG_A, HIGH);
    digitalWrite(SEG_F, HIGH);
    digitalWrite(SEG_G, HIGH);
    digitalWrite(SEG_C, HIGH);
    digitalWrite(SEG_D, HIGH);
    digitalWrite(SEG_E, HIGH);

    digitalWrite(SEG_B, LOW);
    digitalWrite(SEG_K, LOW);
  
  break;
  case 7:
    digitalWrite(SEG_A, HIGH);
    digitalWrite(SEG_B, HIGH);
    digitalWrite(SEG_C, HIGH);

    digitalWrite(SEG_D, LOW);
    digitalWrite(SEG_E, LOW);
    digitalWrite(SEG_F, LOW);
    digitalWrite(SEG_G, LOW);
    digitalWrite(SEG_K, LOW);
   
  break;
  case 8:
    digitalWrite(SEG_A, HIGH);
    digitalWrite(SEG_B, HIGH);
    digitalWrite(SEG_G, HIGH);
    digitalWrite(SEG_F, HIGH);
    digitalWrite(SEG_C, HIGH);
    digitalWrite(SEG_D, HIGH);
    digitalWrite(SEG_E, HIGH);
    digitalWrite(SEG_K, LOW);

  break;
  case 9:
    digitalWrite(SEG_F, HIGH);
    digitalWrite(SEG_A, HIGH);
    digitalWrite(SEG_B, HIGH);
    digitalWrite(SEG_G, HIGH);
    digitalWrite(SEG_C, HIGH);
    digitalWrite(SEG_D, HIGH);

    digitalWrite(SEG_E, LOW);
    digitalWrite(SEG_K, LOW);
    
  break;
  case 10:
  digitalWrite(SEG_K, HIGH);

  digitalWrite(SEG_A, LOW);
  digitalWrite(SEG_B, LOW);
  digitalWrite(SEG_C, LOW);
  digitalWrite(SEG_D, LOW);
  digitalWrite(SEG_E, LOW);
  digitalWrite(SEG_F, LOW);
  digitalWrite(SEG_G, LOW);
}
}
void setup() {
pinMode(SEG_A, OUTPUT);
pinMode(SEG_B, OUTPUT);
pinMode(SEG_C, OUTPUT);
pinMode(SEG_D, OUTPUT);
pinMode(SEG_E, OUTPUT);
pinMode(SEG_F, OUTPUT);
pinMode(SEG_G, OUTPUT);
pinMode(SEG_K, OUTPUT);  



}

void loop() {
for(int i=0; i<=10; i++)
{
  show(i);
  delay(400);  
}  
delay(600);
for(int i=0; i<=10; i++)
{
  show(10-i);
  delay(400);  
}
delay(600);


}
