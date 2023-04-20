int botton1 = A0;
int botton2 = A1;
int botton3 = 2;
int botton4 = 3;
int led1 = 4;
int led2 = 5;
int led3 = 6;
int led4 = 7;
int led5 = 8;
int led6 = 9;
int led7 = 10;
int led8 = 11;
int led9 = 12;
int led10 = 13;
int status1;
int status2;
int status3;
int status4;

void setup(){
Serial.begin(9600);
pinMode (botton1,INPUT);
pinMode (botton2,INPUT);
pinMode (botton3,INPUT);
pinMode (botton4,INPUT);
pinMode(led1,OUTPUT);
pinMode(led2,OUTPUT);
pinMode(led3,OUTPUT);
pinMode(led4,OUTPUT);
pinMode(led5,OUTPUT);
pinMode(led6,OUTPUT);
pinMode(led7,OUTPUT);
pinMode(led8,OUTPUT);
pinMode(led9,OUTPUT);
pinMode(led10,OUTPUT);

}

void loop(){
 status1 = digitalRead (botton1);
 status2 = digitalRead (botton2);
 status3 = digitalRead (botton3);
 status4 = digitalRead (botton4);
  Serial.println(status1);
    Serial.println(status2);
  Serial.println(status3);
  Serial.println(status4);
delay(500);

  if(status1 == 0){
      digitalWrite(led5, HIGH);                   
      digitalWrite(led6, HIGH);
      delay(500);
      
      digitalWrite(led4, HIGH);
      digitalWrite(led7, HIGH);
      delay(500);
      
      digitalWrite(led3, HIGH);
      digitalWrite(led8, HIGH);
      delay(500);

      digitalWrite(led2, HIGH);
      digitalWrite(led9, HIGH);
      delay(500);

      digitalWrite(led1, HIGH);
      digitalWrite(led10, HIGH);
      delay(500); 
    
    digitalWrite(led1,LOW);
    digitalWrite(led2,LOW);
    digitalWrite(led3,LOW);
    digitalWrite(led4,LOW);
    digitalWrite(led5,LOW);
    digitalWrite(led6,LOW);
    digitalWrite(led7,LOW);
    digitalWrite(led8,LOW);
    digitalWrite(led9,LOW);
    digitalWrite(led10,LOW);
     delay(2000);
    
          digitalWrite(led5, HIGH);                   
      digitalWrite(led6, HIGH);
      delay(500);
      
      digitalWrite(led4, HIGH);
      digitalWrite(led7, HIGH);
      delay(500);
      
      digitalWrite(led3, HIGH);
      digitalWrite(led8, HIGH);
      delay(500);

      digitalWrite(led2, HIGH);
      digitalWrite(led9, HIGH);
      delay(500);

      digitalWrite(led1, HIGH);
      digitalWrite(led10, HIGH);
      delay(2000);
    
    digitalWrite(led1,LOW);
    digitalWrite(led2,LOW);
    digitalWrite(led3,LOW);
    digitalWrite(led4,LOW);
    digitalWrite(led5,LOW);
    digitalWrite(led6,LOW);
    digitalWrite(led7,LOW);
    digitalWrite(led8,LOW);
    digitalWrite(led9,LOW);
    digitalWrite(led10,LOW);
     delay(500);
    
      digitalWrite(led5, HIGH);                   
      digitalWrite(led6, HIGH);
      delay(500);
      
      digitalWrite(led4, HIGH);
      digitalWrite(led7, HIGH);
      delay(500);
      
      digitalWrite(led3, HIGH);
      digitalWrite(led8, HIGH);
      delay(500);

      digitalWrite(led2, HIGH);
      digitalWrite(led9, HIGH);
      delay(500);

      digitalWrite(led1, HIGH);
      digitalWrite(led10, HIGH);
      delay(500);
        digitalWrite(led1,LOW);
    digitalWrite(led2,LOW);
    digitalWrite(led3,LOW);
    digitalWrite(led4,LOW);
    digitalWrite(led5,LOW);
    digitalWrite(led6,LOW);
    digitalWrite(led7,LOW);
    digitalWrite(led8,LOW);
    digitalWrite(led9,LOW);
    digitalWrite(led10,LOW);
     delay(2000);
    
          digitalWrite(led5, HIGH);                   
      digitalWrite(led6, HIGH);
      delay(500);
      
      digitalWrite(led4, HIGH);
      digitalWrite(led7, HIGH);
      delay(500);
      
      digitalWrite(led3, HIGH);
      digitalWrite(led8, HIGH);
      delay(500);

      digitalWrite(led2, HIGH);
      digitalWrite(led9, HIGH);
      delay(500);

      digitalWrite(led1, HIGH);
      digitalWrite(led10, HIGH);
      delay(500);
        digitalWrite(led1,LOW);
    digitalWrite(led2,LOW);
    digitalWrite(led3,LOW);
    digitalWrite(led4,LOW);
    digitalWrite(led5,LOW);
    digitalWrite(led6,LOW);
    digitalWrite(led7,LOW);
    digitalWrite(led8,LOW);
    digitalWrite(led9,LOW);
    digitalWrite(led10,LOW);
     delay(2000);
    
        
  }
  
  if(status2 == 0){
   digitalWrite(led1, HIGH);               
      digitalWrite(led10, HIGH);
      delay(400);
      
      digitalWrite(led2, HIGH);
      digitalWrite(led9, HIGH);
      delay(400);
      
      digitalWrite(led3, HIGH);
      digitalWrite(led8, HIGH);
      delay(400);
      
      digitalWrite(led4, HIGH);
      digitalWrite(led7, HIGH);
      delay(400);

      digitalWrite(led5, HIGH);
      digitalWrite(led6, HIGH);
      delay(400);


      digitalWrite(led1, LOW);
      digitalWrite(led2, LOW);
      digitalWrite(led3, LOW);
      digitalWrite(led4, LOW);
      digitalWrite(led5, LOW);
      digitalWrite(led6, LOW);
      digitalWrite(led7, LOW);
      digitalWrite(led8, LOW);
      digitalWrite(led9, LOW);
      digitalWrite(led10, LOW);
      delay(200);
   digitalWrite(led1, HIGH);               
      digitalWrite(led10, HIGH);
      delay(400);
      
      digitalWrite(led2, HIGH);
      digitalWrite(led9, HIGH);
      delay(400);
      
      digitalWrite(led3, HIGH);
      digitalWrite(led8, HIGH);
      delay(400);
      
      digitalWrite(led4, HIGH);
      digitalWrite(led7, HIGH);
      delay(400);

      digitalWrite(led5, HIGH);
      digitalWrite(led6, HIGH);
      delay(400);


      digitalWrite(led1, LOW);
      digitalWrite(led2, LOW);
      digitalWrite(led3, LOW);
      digitalWrite(led4, LOW);
      digitalWrite(led5, LOW);
      digitalWrite(led6, LOW);
      digitalWrite(led7, LOW);
      digitalWrite(led8, LOW);
      digitalWrite(led9, LOW);
      digitalWrite(led10, LOW);
      delay(200);
   digitalWrite(led1, HIGH);               
      digitalWrite(led10, HIGH);
      delay(400);
      
      digitalWrite(led2, HIGH);
      digitalWrite(led9, HIGH);
      delay(400);
      
      digitalWrite(led3, HIGH);
      digitalWrite(led8, HIGH);
      delay(400);
      
      digitalWrite(led4, HIGH);
      digitalWrite(led7, HIGH);
      delay(400);

      digitalWrite(led5, HIGH);
      digitalWrite(led6, HIGH);
      delay(400);


      digitalWrite(led1, LOW);
      digitalWrite(led2, LOW);
      digitalWrite(led3, LOW);
      digitalWrite(led4, LOW);
      digitalWrite(led5, LOW);
      digitalWrite(led6, LOW);
      digitalWrite(led7, LOW);
      digitalWrite(led8, LOW);
      digitalWrite(led9, LOW);
      digitalWrite(led10, LOW);
      delay(200);
   digitalWrite(led1, HIGH);               
      digitalWrite(led10, HIGH);
      delay(400);
      
      digitalWrite(led2, HIGH);
      digitalWrite(led9, HIGH);
      delay(400);
      
      digitalWrite(led3, HIGH);
      digitalWrite(led8, HIGH);
      delay(400);
      
      digitalWrite(led4, HIGH);
      digitalWrite(led7, HIGH);
      delay(400);

      digitalWrite(led5, HIGH);
      digitalWrite(led6, HIGH);
      delay(400);


      digitalWrite(led1, LOW);
      digitalWrite(led2, LOW);
      digitalWrite(led3, LOW);
      digitalWrite(led4, LOW);
      digitalWrite(led5, LOW);
      digitalWrite(led6, LOW);
      digitalWrite(led7, LOW);
      digitalWrite(led8, LOW);
      digitalWrite(led9, LOW);
      digitalWrite(led10, LOW);
      delay(200);
  }
  if(status3 == 0){
   digitalWrite(led1, HIGH);      
      digitalWrite(led10, HIGH);
      delay(100);
      digitalWrite(led2, HIGH);
      digitalWrite(led9, HIGH);
      delay(100);
      digitalWrite(led3, HIGH);
      digitalWrite(led8, HIGH);
      delay(100);     
      digitalWrite(led4, HIGH);
      digitalWrite(led7, HIGH);
      delay(100);
      digitalWrite(led5, HIGH);
      digitalWrite(led6, HIGH);
      delay(100);
      digitalWrite(led6, HIGH);
      digitalWrite(led7, HIGH);
      delay(100);


      digitalWrite(led5, LOW);
      digitalWrite(led6, LOW);
      delay(100);
      digitalWrite(led4, LOW);
      digitalWrite(led7, LOW);
      delay(100);     
      digitalWrite(led3, LOW);
      digitalWrite(led8, LOW);
      delay(100);
      digitalWrite(led2, LOW);
      digitalWrite(led9, LOW);
      delay(100);
      digitalWrite(led1, LOW);
      digitalWrite(led10, LOW);
      delay(100);

      digitalWrite(led1, HIGH);       
      digitalWrite(led10, HIGH);
      digitalWrite(led2, HIGH);
      digitalWrite(led9, HIGH);
      digitalWrite(led3, HIGH);
      digitalWrite(led8, HIGH);
      digitalWrite(led4, HIGH);
      digitalWrite(led7, HIGH);
      digitalWrite(led5, HIGH);
      digitalWrite(led6, HIGH);
      digitalWrite(led6, HIGH);
      digitalWrite(led5, HIGH);
delay(100);
    
      digitalWrite(led5, LOW);
      digitalWrite(led6, LOW);
      digitalWrite(led4, LOW);
      digitalWrite(led7, LOW);
      digitalWrite(led3, LOW);
      digitalWrite(led8, LOW);
      digitalWrite(led2, LOW);
      digitalWrite(led9, LOW);
      digitalWrite(led1, LOW);
      digitalWrite(led10, LOW);
      delay(100);
  digitalWrite(led1, HIGH);      
      digitalWrite(led10, HIGH);
      delay(100);
      digitalWrite(led2, HIGH);
      digitalWrite(led9, HIGH);
      delay(100);
      digitalWrite(led3, HIGH);
      digitalWrite(led8, HIGH);
      delay(100);     
      digitalWrite(led4, HIGH);
      digitalWrite(led7, HIGH);
      delay(100);
      digitalWrite(led5, HIGH);
      digitalWrite(led6, HIGH);
      delay(100);
      digitalWrite(led6, HIGH);
      digitalWrite(led7, HIGH);
      delay(100);


      digitalWrite(led5, LOW);
      digitalWrite(led6, LOW);
      delay(100);
      digitalWrite(led4, LOW);
      digitalWrite(led7, LOW);
      delay(100);     
      digitalWrite(led3, LOW);
      digitalWrite(led8, LOW);
      delay(100);
      digitalWrite(led2, LOW);
      digitalWrite(led9, LOW);
      delay(100);
      digitalWrite(led1, LOW);
      digitalWrite(led10, LOW);
      delay(100);

      digitalWrite(led1, HIGH);       
      digitalWrite(led10, HIGH);
      digitalWrite(led2, HIGH);
      digitalWrite(led9, HIGH);
      digitalWrite(led3, HIGH);
      digitalWrite(led8, HIGH);
      digitalWrite(led4, HIGH);
      digitalWrite(led7, HIGH);
      digitalWrite(led5, HIGH);
      digitalWrite(led6, HIGH);
      digitalWrite(led6, HIGH);
      digitalWrite(led5, HIGH);
delay(100);
    
      digitalWrite(led5, LOW);
      digitalWrite(led6, LOW);
      digitalWrite(led4, LOW);
      digitalWrite(led7, LOW);
      digitalWrite(led3, LOW);
      digitalWrite(led8, LOW);
      digitalWrite(led2, LOW);
      digitalWrite(led9, LOW);
      digitalWrite(led1, LOW);
      digitalWrite(led10, LOW);
      delay(100);
      
      digitalWrite(led1, HIGH);      
      digitalWrite(led10, HIGH);
      delay(100);
     
      digitalWrite(led2, HIGH);
      digitalWrite(led9, HIGH);
      delay(100);
     
      digitalWrite(led3, HIGH);
      digitalWrite(led8, HIGH);
      delay(100);     
      
      digitalWrite(led4, HIGH);
      digitalWrite(led7, HIGH);
      delay(100);
      
      digitalWrite(led5, HIGH);
      digitalWrite(led6, HIGH);
      delay(100);
      
      digitalWrite(led6, HIGH);
      digitalWrite(led7, HIGH);
      delay(100);

      digitalWrite(led5, LOW);
      digitalWrite(led6, LOW);
      delay(100);
      
      digitalWrite(led4, LOW);
      digitalWrite(led7, LOW);
      delay(100);     
     
      digitalWrite(led3, LOW);
      digitalWrite(led8, LOW);
      delay(100);
      
      digitalWrite(led2, LOW);
      digitalWrite(led9, LOW);
      delay(100);
     
      digitalWrite(led1, LOW);
      digitalWrite(led10, LOW);
      delay(100);

      digitalWrite(led1, HIGH);       
      digitalWrite(led10, HIGH);
      digitalWrite(led2, HIGH);
      digitalWrite(led9, HIGH);
      digitalWrite(led3, HIGH);
      digitalWrite(led8, HIGH);
      digitalWrite(led4, HIGH);
      digitalWrite(led7, HIGH);
      digitalWrite(led5, HIGH);
      digitalWrite(led6, HIGH);
      digitalWrite(led6, HIGH);
      digitalWrite(led5, HIGH);
      delay(100);
    
      digitalWrite(led5, LOW);
      digitalWrite(led6, LOW);
      digitalWrite(led4, LOW);
      digitalWrite(led7, LOW);
      digitalWrite(led3, LOW);
      digitalWrite(led8, LOW);
      digitalWrite(led2, LOW);
      digitalWrite(led9, LOW);
      digitalWrite(led1, LOW);
      digitalWrite(led10, LOW);
      delay(100);
      
      digitalWrite(led1, HIGH);      
      digitalWrite(led10, HIGH);
      delay(100);
      
      digitalWrite(led2, HIGH);
      digitalWrite(led9, HIGH);
      delay(100);
      
      digitalWrite(led3, HIGH);
      digitalWrite(led8, HIGH);
      delay(100);     
      
      digitalWrite(led4, HIGH);
      digitalWrite(led7, HIGH);
      delay(100);
      
      digitalWrite(led5, HIGH);
      digitalWrite(led6, HIGH);
      delay(100);
      
      digitalWrite(led6, HIGH);
      digitalWrite(led7, HIGH);
      delay(100);


      digitalWrite(led5, LOW);
      digitalWrite(led6, LOW);
      delay(100);
      digitalWrite(led4, LOW);
      digitalWrite(led7, LOW);
      delay(100);     
      digitalWrite(led3, LOW);
      digitalWrite(led8, LOW);
      delay(100);
      digitalWrite(led2, LOW);
      digitalWrite(led9, LOW);
      delay(100);
      digitalWrite(led1, LOW);
      digitalWrite(led10, LOW);
      delay(100);

      digitalWrite(led1, HIGH);       
      digitalWrite(led10, HIGH);
      digitalWrite(led2, HIGH);
      digitalWrite(led9, HIGH);
      digitalWrite(led3, HIGH);
      digitalWrite(led8, HIGH);
      digitalWrite(led4, HIGH);
      digitalWrite(led7, HIGH);
      digitalWrite(led5, HIGH);
      digitalWrite(led6, HIGH);
      digitalWrite(led6, HIGH);
      digitalWrite(led5, HIGH);
      delay(100);
    
      digitalWrite(led5, LOW);
      digitalWrite(led6, LOW);
      digitalWrite(led4, LOW);
      digitalWrite(led7, LOW);
      digitalWrite(led3, LOW);
      digitalWrite(led8, LOW);
      digitalWrite(led2, LOW);
      digitalWrite(led9, LOW);
      digitalWrite(led1, LOW);
      digitalWrite(led10, LOW);
      delay(100);
  }
  
  if(status4 == 0){
   digitalWrite(led1, HIGH);                       
      digitalWrite(led2, LOW);
      digitalWrite(led3, LOW);
      digitalWrite(led4, LOW);
      digitalWrite(led5, LOW);
      digitalWrite(led6, LOW);
      digitalWrite(led7, LOW);
      digitalWrite(led8, LOW);
      digitalWrite(led9, LOW);
      digitalWrite(led10, HIGH);

      delay(300);
      digitalWrite(led1, LOW);
      digitalWrite(led2, LOW);
      digitalWrite(led3, LOW);
      digitalWrite(led4, LOW);
      digitalWrite(led5, LOW);
      digitalWrite(led6, LOW);
      digitalWrite(led7, LOW);
      digitalWrite(led8, LOW);
      digitalWrite(led9, LOW);
      digitalWrite(led10, LOW);

      delay(300);
      digitalWrite(led1, HIGH);
      digitalWrite(led2, LOW);
      digitalWrite(led3, LOW);
      digitalWrite(led4, LOW);
      digitalWrite(led5, LOW);
      digitalWrite(led6, LOW);
      digitalWrite(led7, LOW);
      digitalWrite(led8, LOW);
      digitalWrite(led9, LOW);
      digitalWrite(led10, HIGH);

      delay(300);
      digitalWrite(led1, LOW);
      digitalWrite(led2, LOW);
      digitalWrite(led3, LOW);
      digitalWrite(led4, LOW);
      digitalWrite(led5, LOW);
      digitalWrite(led6, LOW);
      digitalWrite(led7, LOW);
      digitalWrite(led8, LOW);
      digitalWrite(led9, LOW);
      digitalWrite(led10, LOW);

      delay(500);

      digitalWrite(led1, HIGH);
      digitalWrite(led2, HIGH);
      digitalWrite(led3, HIGH);
      digitalWrite(led4, HIGH);
      digitalWrite(led5, HIGH);
      digitalWrite(led6, HIGH);
      digitalWrite(led7, HIGH);
      digitalWrite(led8, HIGH);
      digitalWrite(led9, HIGH);
      digitalWrite(led10, HIGH);
      delay(500);
       digitalWrite(led1, LOW);
      digitalWrite(led2, LOW);
      digitalWrite(led3, LOW);
      digitalWrite(led4, LOW);
      digitalWrite(led5, LOW);
      digitalWrite(led6, LOW);
      digitalWrite(led7, LOW);
      digitalWrite(led8, LOW);
      digitalWrite(led9, LOW);
      digitalWrite(led10, LOW);

   digitalWrite(led1, HIGH);                       
      digitalWrite(led2, HIGH);
      digitalWrite(led3, LOW);
      digitalWrite(led4, LOW);
      digitalWrite(led5, LOW);
      digitalWrite(led6, LOW);
      digitalWrite(led7, LOW);
      digitalWrite(led8, LOW);
      digitalWrite(led9, HIGH);
      digitalWrite(led10, HIGH);

      delay(300);
      digitalWrite(led1, LOW);
      digitalWrite(led2, LOW);
      digitalWrite(led3, LOW);
      digitalWrite(led4, LOW);
      digitalWrite(led5, LOW);
      digitalWrite(led6, LOW);
      digitalWrite(led7, LOW);
      digitalWrite(led8, LOW);
      digitalWrite(led9, LOW);
      digitalWrite(led10, LOW);

      delay(300);
      digitalWrite(led1, HIGH);
      digitalWrite(led2, HIGH);
      digitalWrite(led3, LOW);
      digitalWrite(led4, LOW);
      digitalWrite(led5, LOW);
      digitalWrite(led6, LOW);
      digitalWrite(led7, LOW);
      digitalWrite(led8, LOW);
      digitalWrite(led9, HIGH);
      digitalWrite(led10, HIGH);

      delay(300);
      digitalWrite(led1, LOW);
      digitalWrite(led2, LOW);
      digitalWrite(led3, LOW);
      digitalWrite(led4, LOW);
      digitalWrite(led5, LOW);
      digitalWrite(led6, LOW);
      digitalWrite(led7, LOW);
      digitalWrite(led8, LOW);
      digitalWrite(led9, LOW);
      digitalWrite(led10, LOW);

      delay(500);

      digitalWrite(led1, HIGH);
      digitalWrite(led2, HIGH);
      digitalWrite(led3, HIGH);
      digitalWrite(led4, HIGH);
      digitalWrite(led5, HIGH);
      digitalWrite(led6, HIGH);
      digitalWrite(led7, HIGH);
      digitalWrite(led8, HIGH);
      digitalWrite(led9, HIGH);
      digitalWrite(led10, HIGH);
      delay(500);
       digitalWrite(led1, LOW);
      digitalWrite(led2, LOW);
      digitalWrite(led3, LOW);
      digitalWrite(led4, LOW);
      digitalWrite(led5, LOW);
      digitalWrite(led6, LOW);
      digitalWrite(led7, LOW);
      digitalWrite(led8, LOW);
      digitalWrite(led9, LOW);
      digitalWrite(led10, LOW);

    
       digitalWrite(led1, HIGH);                       
      digitalWrite(led2, HIGH);
      digitalWrite(led3, HIGH);
      digitalWrite(led4, LOW);
      digitalWrite(led5, LOW);
      digitalWrite(led6, LOW);
      digitalWrite(led7, LOW);
      digitalWrite(led8, HIGH);
      digitalWrite(led9, HIGH);
      digitalWrite(led10, HIGH);

      delay(300);
      digitalWrite(led1, LOW);
      digitalWrite(led2, LOW);
      digitalWrite(led3, LOW);
      digitalWrite(led4, LOW);
      digitalWrite(led5, LOW);
      digitalWrite(led6, LOW);
      digitalWrite(led7, LOW);
      digitalWrite(led8, LOW);
      digitalWrite(led9, LOW);
      digitalWrite(led10, LOW);

      delay(300);
      digitalWrite(led1, HIGH);
      digitalWrite(led2, HIGH);
      digitalWrite(led3, HIGH);
      digitalWrite(led4, LOW);
      digitalWrite(led5, LOW);
      digitalWrite(led6, LOW);
      digitalWrite(led7, LOW);
      digitalWrite(led8, HIGH);
      digitalWrite(led9, HIGH);
      digitalWrite(led10, HIGH);

      delay(300);
      digitalWrite(led1, LOW);
      digitalWrite(led2, LOW);
      digitalWrite(led3, LOW);
      digitalWrite(led4, LOW);
      digitalWrite(led5, LOW);
      digitalWrite(led6, LOW);
      digitalWrite(led7, LOW);
      digitalWrite(led8, LOW);
      digitalWrite(led9, LOW);
      digitalWrite(led10, LOW);

      delay(500);

      digitalWrite(led1, HIGH);
      digitalWrite(led2, HIGH);
      digitalWrite(led3, HIGH);
      digitalWrite(led4, HIGH);
      digitalWrite(led5, HIGH);
      digitalWrite(led6, HIGH);
      digitalWrite(led7, HIGH);
      digitalWrite(led8, HIGH);
      digitalWrite(led9, HIGH);
      digitalWrite(led10, HIGH);
      delay(500);
       digitalWrite(led1, LOW);
      digitalWrite(led2, LOW);
      digitalWrite(led3, LOW);
      digitalWrite(led4, LOW);
      digitalWrite(led5, LOW);
      digitalWrite(led6, LOW);
      digitalWrite(led7, LOW);
      digitalWrite(led8, LOW);
      digitalWrite(led9, LOW);
      digitalWrite(led10, LOW);
    
    
           digitalWrite(led1, HIGH);                       
      digitalWrite(led2, HIGH);
      digitalWrite(led3, HIGH);
      digitalWrite(led4, LOW);
      digitalWrite(led5, LOW);
      digitalWrite(led6, LOW);
      digitalWrite(led7, LOW);
      digitalWrite(led8, HIGH);
      digitalWrite(led9, HIGH);
      digitalWrite(led10, HIGH);

      delay(300);
      digitalWrite(led1, LOW);
      digitalWrite(led2, LOW);
      digitalWrite(led3, LOW);
      digitalWrite(led4, LOW);
      digitalWrite(led5, LOW);
      digitalWrite(led6, LOW);
      digitalWrite(led7, LOW);
      digitalWrite(led8, LOW);
      digitalWrite(led9, LOW);
      digitalWrite(led10, LOW);

      delay(300);
      digitalWrite(led1, HIGH);
      digitalWrite(led2, HIGH);
      digitalWrite(led3, HIGH);
      digitalWrite(led4, LOW);
      digitalWrite(led5, LOW);
      digitalWrite(led6, LOW);
      digitalWrite(led7, LOW);
      digitalWrite(led8, HIGH);
      digitalWrite(led9, HIGH);
      digitalWrite(led10, HIGH);

      delay(300);
      digitalWrite(led1, LOW);
      digitalWrite(led2, LOW);
      digitalWrite(led3, LOW);
      digitalWrite(led4, LOW);
      digitalWrite(led5, LOW);
      digitalWrite(led6, LOW);
      digitalWrite(led7, LOW);
      digitalWrite(led8, LOW);
      digitalWrite(led9, LOW);
      digitalWrite(led10, LOW);

      delay(500);

      digitalWrite(led1, HIGH);
      digitalWrite(led2, HIGH);
      digitalWrite(led3, HIGH);
      digitalWrite(led4, HIGH);
      digitalWrite(led5, HIGH);
      digitalWrite(led6, HIGH);
      digitalWrite(led7, HIGH);
      digitalWrite(led8, HIGH);
      digitalWrite(led9, HIGH);
      digitalWrite(led10, HIGH);
      delay(500);
       digitalWrite(led1, LOW);
      digitalWrite(led2, LOW);
      digitalWrite(led3, LOW);
      digitalWrite(led4, LOW);
      digitalWrite(led5, LOW);
      digitalWrite(led6, LOW);
      digitalWrite(led7, LOW);
      digitalWrite(led8, LOW);
      digitalWrite(led9, LOW);
      digitalWrite(led10, LOW);
    
           digitalWrite(led1, HIGH);                       
      digitalWrite(led2, HIGH);
      digitalWrite(led3, HIGH);
      digitalWrite(led4, LOW);
      digitalWrite(led5, LOW);
      digitalWrite(led6, LOW);
      digitalWrite(led7, LOW);
      digitalWrite(led8, HIGH);
      digitalWrite(led9, HIGH);
      digitalWrite(led10, HIGH);

      delay(300);
      digitalWrite(led1, LOW);
      digitalWrite(led2, LOW);
      digitalWrite(led3, LOW);
      digitalWrite(led4, LOW);
      digitalWrite(led5, LOW);
      digitalWrite(led6, LOW);
      digitalWrite(led7, LOW);
      digitalWrite(led8, LOW);
      digitalWrite(led9, LOW);
      digitalWrite(led10, LOW);

      delay(300);
      digitalWrite(led1, HIGH);
      digitalWrite(led2, HIGH);
      digitalWrite(led3, HIGH);
      digitalWrite(led4, LOW);
      digitalWrite(led5, LOW);
      digitalWrite(led6, LOW);
      digitalWrite(led7, LOW);
      digitalWrite(led8, HIGH);
      digitalWrite(led9, HIGH);
      digitalWrite(led10, HIGH);

      delay(300);
      digitalWrite(led1, LOW);
      digitalWrite(led2, LOW);
      digitalWrite(led3, LOW);
      digitalWrite(led4, LOW);
      digitalWrite(led5, LOW);
      digitalWrite(led6, LOW);
      digitalWrite(led7, LOW);
      digitalWrite(led8, LOW);
      digitalWrite(led9, LOW);
      digitalWrite(led10, LOW);

      delay(500);

      digitalWrite(led1, HIGH);
      digitalWrite(led2, HIGH);
      digitalWrite(led3, HIGH);
      digitalWrite(led4, HIGH);
      digitalWrite(led5, HIGH);
      digitalWrite(led6, HIGH);
      digitalWrite(led7, HIGH);
      digitalWrite(led8, HIGH);
      digitalWrite(led9, HIGH);
      digitalWrite(led10, HIGH);
      delay(500);
       digitalWrite(led1, LOW);
      digitalWrite(led2, LOW);
      digitalWrite(led3, LOW);
      digitalWrite(led4, LOW);
      digitalWrite(led5, LOW);
      digitalWrite(led6, LOW);
      digitalWrite(led7, LOW);
      digitalWrite(led8, LOW);
      digitalWrite(led9, LOW);
      digitalWrite(led10, LOW);
    
           digitalWrite(led1, HIGH);                       
      digitalWrite(led2, HIGH);
      digitalWrite(led3, HIGH);
      digitalWrite(led4, HIGH);
      digitalWrite(led5, LOW);
      digitalWrite(led6, LOW);
      digitalWrite(led7, HIGH);
      digitalWrite(led8, HIGH);
      digitalWrite(led9, HIGH);
      digitalWrite(led10, HIGH);

      delay(300);
      digitalWrite(led1, LOW);
      digitalWrite(led2, LOW);
      digitalWrite(led3, LOW);
      digitalWrite(led4, LOW);
      digitalWrite(led5, LOW);
      digitalWrite(led6, LOW);
      digitalWrite(led7, LOW);
      digitalWrite(led8, LOW);
      digitalWrite(led9, LOW);
      digitalWrite(led10, LOW);

      delay(300);
      digitalWrite(led1, HIGH);
      digitalWrite(led2, HIGH);
      digitalWrite(led3, HIGH);
      digitalWrite(led4, HIGH);
      digitalWrite(led5, LOW);
      digitalWrite(led6, LOW);
      digitalWrite(led7, HIGH);
      digitalWrite(led8, HIGH);
      digitalWrite(led9, HIGH);
      digitalWrite(led10, HIGH);

      delay(300);
      digitalWrite(led1, LOW);
      digitalWrite(led2, LOW);
      digitalWrite(led3, LOW);
      digitalWrite(led4, LOW);
      digitalWrite(led5, LOW);
      digitalWrite(led6, LOW);
      digitalWrite(led7, LOW);
      digitalWrite(led8, LOW);
      digitalWrite(led9, LOW);
      digitalWrite(led10, LOW);

      delay(500);

      digitalWrite(led1, HIGH);
      digitalWrite(led2, HIGH);
      digitalWrite(led3, HIGH);
      digitalWrite(led4, HIGH);
      digitalWrite(led5, HIGH);
      digitalWrite(led6, HIGH);
      digitalWrite(led7, HIGH);
      digitalWrite(led8, HIGH);
      digitalWrite(led9, HIGH);
      digitalWrite(led10, HIGH);
      delay(500);
       digitalWrite(led1, LOW);
      digitalWrite(led2, LOW);
      digitalWrite(led3, LOW);
      digitalWrite(led4, LOW);
      digitalWrite(led5, LOW);
      digitalWrite(led6, LOW);
      digitalWrite(led7, LOW);
      digitalWrite(led8, LOW);
      digitalWrite(led9, LOW);
      digitalWrite(led10, LOW);
    
           digitalWrite(led1, HIGH);                       
      digitalWrite(led2, HIGH);
      digitalWrite(led3, HIGH);
      digitalWrite(led4, HIGH);
      digitalWrite(led5, HIGH);
      digitalWrite(led6, HIGH);
      digitalWrite(led7, HIGH);
      digitalWrite(led8, HIGH);
      digitalWrite(led9, HIGH);
      digitalWrite(led10, HIGH);

      delay(300);
      digitalWrite(led1, LOW);
      digitalWrite(led2, LOW);
      digitalWrite(led3, LOW);
      digitalWrite(led4, LOW);
      digitalWrite(led5, LOW);
      digitalWrite(led6, LOW);
      digitalWrite(led7, LOW);
      digitalWrite(led8, LOW);
      digitalWrite(led9, LOW);
      digitalWrite(led10, LOW);

      delay(300);
      digitalWrite(led1, HIGH);
      digitalWrite(led2, HIGH);
      digitalWrite(led3, HIGH);
      digitalWrite(led4, HIGH);
      digitalWrite(led5, HIGH);
      digitalWrite(led6, HIGH);
      digitalWrite(led7, HIGH);
      digitalWrite(led8, HIGH);
      digitalWrite(led9, HIGH);
      digitalWrite(led10, HIGH);

      delay(300);
      digitalWrite(led1, LOW);
      digitalWrite(led2, LOW);
      digitalWrite(led3, LOW);
      digitalWrite(led4, LOW);
      digitalWrite(led5, LOW);
      digitalWrite(led6, LOW);
      digitalWrite(led7, LOW);
      digitalWrite(led8, LOW);
      digitalWrite(led9, LOW);
      digitalWrite(led10, LOW);

      delay(500);

      digitalWrite(led1, HIGH);
      digitalWrite(led2, HIGH);
      digitalWrite(led3, HIGH);
      digitalWrite(led4, HIGH);
      digitalWrite(led5, HIGH);
      digitalWrite(led6, HIGH);
      digitalWrite(led7, HIGH);
      digitalWrite(led8, HIGH);
      digitalWrite(led9, HIGH);
      digitalWrite(led10, HIGH);
      delay(500);
       digitalWrite(led1, LOW);
      digitalWrite(led2, LOW);
      digitalWrite(led3, LOW);
      digitalWrite(led4, LOW);
      digitalWrite(led5, LOW);
      digitalWrite(led6, LOW);
      digitalWrite(led7, LOW);
      digitalWrite(led8, LOW);
      digitalWrite(led9, LOW);
      digitalWrite(led10,LOW);

}
}
