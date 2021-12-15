int blue = 11;
int red = 10;
int green = 9;
int val = 0;
int fq = 100;

 

void setup() {
  pinMode(blue, OUTPUT);
  pinMode(red, OUTPUT);
  pinMode(green, OUTPUT);
}


void loop() {                                                  
 
  

{
  for(int i=0; i<255; i++)
  {
    val=0.6*i;
    analogWrite(red, val);
    analogWrite(blue, 255-i); 
    delay(fq);   
  }

  
  for(int i=0; i<255; i++)
  {
    val=0.6*i;
    analogWrite(green, val);
    analogWrite(red, 255-i);
    delay(fq);
  }
  for(int i=0; i<255; i++)
  {
    val=0.6*i;
    analogWrite(blue, val);
    analogWrite(green, 255-i);
    delay(fq);
}

}

}
