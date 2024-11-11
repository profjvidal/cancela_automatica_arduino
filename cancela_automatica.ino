#include <Servo.h>

Servo gateServo;
int irSensor = 2;
int servoPin = 9;
int irValue; 

void setup() {
  gateServo.attach(servoPin);
  pinMode(irSensor, INPUT); 
  
  gateServo.write(0); 
  Serial.begin(9600);
}

void loop() {
  irValue = digitalRead(irSensor);
  
  if (irValue == HIGH) { 
    gateServo.write(90); 
  } else {
    gateServo.write(0); 
  }
  
  delay(500); 
}
