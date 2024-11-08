#include <DHT.h>
#include <DHT_U.h>
 int led =2;
 int SENSOR = 3;
 int temperatura;
 int humedad;

 DHT dht(SENSOR, DHT11);

void setup() {
  Serial.begin(9600);
  dht.begin();
  pinMode(led, OUTPUT);

}

void loop() {
 temperatura = dht.readTemperature();
 humedad = dht.readHumidity();
 delay(1);
 Serial.print("Temperatura ");
 Serial.print(temperatura);
 Serial.print(" Humedad ");
 Serial.println(humedad);
 delay(500);

 if (temperatura >=28){
  
  digitalWrite(led,HIGH);
  }
 

}