int pot=A0;
int lectura;
int led1=1;
int led2=2;
int led3=3;
int led4=4;
int led5=5;


void setup()
{Serial.begin(9600);
pinMode(pot,INPUT);
pinMode(led1,OUTPUT); 
pinMode(led2,OUTPUT);
pinMode(led3,OUTPUT);
pinMode(led4,OUTPUT);
pinMode(led5,OUTPUT); 
}

void loop()
{
lectura=analogRead(pot);
Serial.print(lectura);

if(lectura>=300 &&lectura<=200){

  digitalWrite(led1, HIGH);
  digitalWrite(led2,LOW);
  Serial.print(lectura);
}

  if(lectura >= 400 && lectura <= 600){
  digitalWrite(led2,HIGH);
  digitalWrite(led3,LOW);
  Serial.print(lectura);
  }
 
  if(lectura >= 600 && lectura <= 800){
   digitalWrite(led3,HIGH);
   digitalWrite(led4,LOW);
  Serial.print(lectura);
  }
  if(lectura >= 800 && lectura <= 1000){
   digitalWrite(led4,HIGH);
   digitalWrite(led5,LOW);
  Serial.print(lectura);
  }
  if(lectura >= 1000 && lectura <= 1020){
   digitalWrite(led4,HIGH);
   digitalWrite(led5,HIGH);
  Serial.print(lectura);
  }

  }