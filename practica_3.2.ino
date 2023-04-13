int pot = A0;
int pot2 =A1;
int pot3 =A2;
int lectura;
int lectura2;
int lectura3;
int ledR =5;
int ledG =4;
int ledB =3;



void setup()
{

  pinMode(pot,INPUT);
  pinMode(ledR,OUTPUT);

  pinMode(pot2,INPUT);
  pinMode(ledG,OUTPUT);

  pinMode(pot3,INPUT);
  pinMode(ledB,OUTPUT);

}


void loop()
{

Serial.begin(9600);
  lectura = analogRead (pot)/4;
  analogWrite(ledR,lectura);

 

  lectura2 = analogRead (pot2)/4;
  analogWrite(ledG,lectura2);

  

  lectura3= analogRead (pot3)/4;
  analogWrite(ledB,lectura3);



Serial.print("B: ");
Serial.print(lectura);

Serial.print(" R: ");
Serial.print(lectura2);


Serial.print(" G: ");
Serial.println(lectura3);
delay(500);

}
