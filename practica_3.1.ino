int pot =A0;
int lectura;
int led =5;


void setup()
{

  pinMode(pot,INPUT);
  pinMode(led,OUTPUT);

}


void loop()
{


  lectura = analogRead (pot)/4;
  analogWrite(led,lectura);
  Serial.println(lectura);
  delay(100);


}
