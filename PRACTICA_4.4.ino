/*BRYAN ODIR KUNCE SUBUYU-2022096-TALLER PRACTICA 4.4 :))*/

int pinBuzzer = 6;
int Do = 261;
int Re = 293;
int Mi = 329;
int Fa = 349;
int Sol = 392;
int La = 440;
int Si = 493;

int negra = 250; 
int blanca = 500; 
int retardo = 3000;  

int negra2 = 100; 
int blanca2 = 200; 
int retardo2 = 3000; 

#define botton1 2
#define botton2 3
#define ledA 5
#define ledB 4
#define nota

int tempo = 500;
int retraso = 1000;

void setup()
{
  pinMode(botton1, INPUT);
  pinMode(botton2, INPUT);
  pinMode(ledA, OUTPUT);
  pinMode(ledB, OUTPUT);
}


void loop() {
if(digitalRead(botton1)==0){//estrellita ontas vercion corta ;))

digitalWrite(ledA, HIGH);

nota(Do, negra);
nota(Do, negra);
nota(Sol, negra);
nota(Sol, negra);
nota(La, negra);
nota(La, negra);
nota(Sol, blanca);

nota(Fa, negra);
nota(Fa, negra);
nota(Mi, negra);
nota(Mi, negra);
nota(Re, negra);
nota(Re, negra);
nota(Do, blanca);

nota(Sol, negra);
nota(Sol, negra);
nota(Fa, negra);
nota(Fa, negra);
nota(Mi, negra);
nota(Mi, negra);
nota(Re, blanca);

nota(Sol, negra);
nota(Sol, negra);
nota(Fa, negra);
nota(Fa, negra);
nota(Mi, negra);
nota(Mi, negra);
nota(Re, blanca);

nota(Do, negra);
nota(Do, negra);
nota(Sol, negra);
nota(Sol, negra);
nota(La, negra);
nota(La, negra);
nota(Sol, blanca);

nota(Fa, negra);
nota(Fa, negra);
nota(Mi, negra);
nota(Mi, negra);
nota(Re, negra);
nota(Re, negra);
nota(Do, blanca);
delay(retardo);
}
 
  if(digitalRead(botton2)==0){//estrellita donde estas original
    digitalWrite(ledA, HIGH);
tone(pinBuzzer,Do, negra);
delay(negra);
noTone(pinBuzzer);
delay(negra);
tone(pinBuzzer,Do, negra);
delay(negra);
noTone(pinBuzzer);
delay(negra);
tone(pinBuzzer,Sol, negra);
delay(negra);
noTone(pinBuzzer);
delay(negra);
tone(pinBuzzer,Sol, negra);
delay(negra);
noTone(pinBuzzer);
delay(negra);
tone(pinBuzzer,La, negra);
delay(negra);
noTone(pinBuzzer);
delay(negra);
tone(pinBuzzer,La, negra);
delay(negra);
noTone(pinBuzzer);
delay(negra);
tone(pinBuzzer,Sol, blanca);
delay(blanca);
noTone(pinBuzzer);
delay(negra);

tone(pinBuzzer,Fa, negra);
delay(negra);
noTone(pinBuzzer);
delay(negra);
tone(pinBuzzer,Fa, negra);
delay(negra);

noTone(pinBuzzer);
delay(negra);
tone(pinBuzzer,Mi, negra);
delay(negra);
noTone(pinBuzzer);
delay(negra);
tone(pinBuzzer,Mi, negra);
delay(negra);
noTone(pinBuzzer);
delay(negra);
tone(pinBuzzer,Re, negra);
delay(negra);
noTone(pinBuzzer);
delay(negra);
tone(pinBuzzer,Re, negra);
delay(negra);
noTone(pinBuzzer);
delay(negra);
tone(pinBuzzer,Do, blanca);
delay(blanca);
noTone(pinBuzzer);
delay(negra);

tone(pinBuzzer,Sol, negra);
delay(negra);
noTone(pinBuzzer);
delay(negra);
tone(pinBuzzer,Sol, negra);

delay(negra);
noTone(pinBuzzer);
delay(negra);
tone(pinBuzzer,Fa, negra);
delay(negra);
noTone(pinBuzzer);
delay(negra);
tone(pinBuzzer,Fa, negra);
delay(negra);
noTone(pinBuzzer);
delay(negra);
tone(pinBuzzer,Mi, negra);
delay(negra);
noTone(pinBuzzer);
delay(negra);
tone(pinBuzzer,Mi, negra);
delay(negra);
noTone(pinBuzzer);
delay(negra);
tone(pinBuzzer,Re, blanca);
delay(blanca);
noTone(pinBuzzer);
delay(negra);

tone(pinBuzzer,Sol, negra);
delay(negra);
noTone(pinBuzzer);
delay(negra);

tone(pinBuzzer,Sol, negra);
delay(negra);
noTone(pinBuzzer);
delay(negra);
tone(pinBuzzer,Fa, negra);
delay(negra);
noTone(pinBuzzer);
delay(negra);
tone(pinBuzzer,Fa, negra);
delay(negra);
noTone(pinBuzzer);
delay(negra);
tone(pinBuzzer,Mi, negra);
delay(negra);
noTone(pinBuzzer);
delay(negra);
tone(pinBuzzer,Mi, negra);
delay(negra);
noTone(pinBuzzer);
delay(negra);
tone(pinBuzzer,Re, blanca);
delay(blanca);
noTone(pinBuzzer);
delay(negra);

tone(pinBuzzer,Do, negra);
delay(negra);
noTone(pinBuzzer);

delay(negra);
tone(pinBuzzer,Do, negra);
delay(negra);
noTone(pinBuzzer);
delay(negra);
tone(pinBuzzer,Sol, negra);
delay(negra);
noTone(pinBuzzer);
delay(negra);
tone(pinBuzzer,Sol, negra);
delay(negra);
noTone(pinBuzzer);
delay(negra);
tone(pinBuzzer,La, negra);
delay(negra);
noTone(pinBuzzer);
delay(negra);
tone(pinBuzzer,La, negra);
delay(negra);
noTone(pinBuzzer);
delay(negra);
tone(pinBuzzer,Sol, blanca);
delay(blanca);
noTone(pinBuzzer);
delay(negra);
tone(pinBuzzer,Fa, negra);
delay(negra);
noTone(pinBuzzer);
delay(negra);
tone(pinBuzzer,Fa, negra);
delay(negra);
noTone(pinBuzzer);
delay(negra);
tone(pinBuzzer,Mi, negra);
delay(negra);
noTone(pinBuzzer);
delay(negra);
tone(pinBuzzer,Mi, negra);
delay(negra);
noTone(pinBuzzer);
delay(negra);
tone(pinBuzzer,Re, negra);
delay(negra);
noTone(pinBuzzer);
delay(negra);
tone(pinBuzzer,Re, negra);
delay(negra);
noTone(pinBuzzer);
delay(negra);
tone(pinBuzzer,Do, blanca);
delay(blanca);
noTone(pinBuzzer);
delay(negra);
delay(retardo);
}
}