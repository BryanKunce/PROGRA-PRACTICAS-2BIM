#include <Servo.h>
Servo Servo_1;


const bool Botton1=1;
const bool Botton2=2;
const bool Botton3=3;
const bool Botton4=4;
const bool Botton5=5;
#define buzzer


void setup() {
 Servo_1.attach(6); 
pinMode(Botton1,INPUT);
pinMode(Botton2,INPUT);
pinMode(Botton3,INPUT);
pinMode(Botton4,INPUT);
pinMode(Botton5,INPUT);

}
void loop() {
  if (digitalRead(Botton1) == LOW) {
    Servo_1.write(45);
  } else if (digitalRead(Botton2) == LOW) {
    Servo_1.write(90);
  } else if (digitalRead(Botton3) == LOW) {
    Servo_1.write(135);
  } else if (digitalRead(Botton4) == LOW) {
    Servo_1.write(180);
  } else if (digitalRead(Botton5) == LOW) {
    Servo_1.write(0);
    digitalRead(buzzer)==HIGH;
}
}