#include <SimpleDHT.h>

int pinDHT11 = 2;

SimpleDHT11 dht11(pinDHT11);
void setup() {
  
  Serial.begin(9600);
  
}

void loop() {
  
  Serial.println("~~~~~~~~~~~~~~~~~~~~~~~~~~");
  Serial.println("DHT11 reading: ");

  byte temperature = 0;
  byte humidity = 0;
  int err = SimpleDHTErrSuccess;

  if(err = dht11.read(&temperature, &humidity, NULL) != SimpleDHTErrSuccess)
  {
    Serial.print("Reading error");
    Serial.print(SimpleDHTErrDuration(err));
    delay(1000);
  }

  Serial.print((int)temperature); Serial.print("*C  ");
  Serial.print((int)humidity); Serial.println("%");
  delay(1500);
  
}
