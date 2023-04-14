int V2=5;
double R1=1000.00;
int V1=7;
double R2;
void setup(){

  Serial.begin(9600);
}

void loop(){
R2=(((5*1000)/7)-R2);
V2=analogRead(A0);  
V2=((7*5)/1023);
  


Serial.println(R1);
}