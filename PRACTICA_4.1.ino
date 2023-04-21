#define K1 5
#define FOTOR A2

int vFR;

void setup() {
pinMode (K1,OUTPUT);
Serial.begin(9600);
}

void loop() {
vFR = analogRead(FOTOR);
Serial.println(vFR);
if(vFR < 700){
  digitalWrite(K1, LOW);
}
else{
  digitalWrite(K1,HIGH);
}
delay(200);
}
