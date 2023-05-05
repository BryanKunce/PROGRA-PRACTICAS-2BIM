/**********************************************************BRYAN KUNCE - 2022096 - EB5BM***********************************************************************************/
//                                                                  PRACTICA #6                                                                                                        //

#include <Adafruit_LiquidCrystal.h>
#include <LiquidCrystal_I2C.h>//incluimos libreria para el LCD
LiquidCrystal_I2C lcd(0x27,16,2); 

#include <OneWire.h> //Incluye libreria de protocolo de comunicacion One-Wire
#include <DallasTemperature.h> //Incluye libreria para el uso de sensor de temperatura

#define ONE_WIRE_BUS 7 //asigna al pin 7 del arduino para que nos pase el dato de temperatura
OneWire oneWire(ONE_WIRE_BUS); //En la libreria OneWire se le asigna en que pin se va a estar realizando la comunicacion
DallasTemperature sensors(&oneWire); //Se le asigna al objeto (Sensors) el pin donde se utiliza el protocolo One-Wire

#include <Wire.h>		// incluye libreria para interfaz I2C
#include <RTClib.h>		// incluye libreria para el manejo del modulo RTC
RTC_DS3231 Rtc;			// crea objeto del tipo RTC_DS3231

#define buzzer 5
#define outbuzzerer() pinMode(buzzer,OUTPUT)
#define encenbuzzerer() tone(buzzer,950)
#define apagbuzzerer() noTone(buzzer)

#define bomba 4
#define bombaout() pinMode(bomba,OUTPUT)
#define bombaencen() digitalWrite(bomba,HIGH)
#define bombaapag() digitalWrite(bomba,LOW)




void setup() {
 //BUZZER/BOMBA DE AGUA:
   outbuzzerer();
   bombaout();

 //PANTALLA LCD:  
  lcd.init();
  lcd.backlight();
  lcd.clear();

 //SENSOR DE TEMPERATURA:
 Serial.begin(9600);
 sensors.begin(); //Inicializa la libreria DallasTemperature

//RTC:
 RTC_DS3231 rtc;
 rtc.begin();	//Inicializa el modulo RTC
 rtc.adjust(DateTime(__DATE__, __TIME__)); // funcion que permite establecer fecha y horario
  

}

void loop() {
 //SENSOR DE TEMPERATURA:
     
  sensors.requestTemperatures();  //Envia una solicitud al sensor para ver que temperatura nos devolvera el sensor
  float temperatura = sensors.getTempFByIndex(0);
 lcd.setCursor(0,1);  
  lcd.print("TEMPT: *C ");
 lcd.print(temperatura);
 lcd.setCursor(0,0);
 lcd.print("HOUR:   ");


   DateTime fecha = Rtc.now();
  lcd.print(fecha.hour());
  lcd.print(":");
  
  Serial.print(fecha.minute());
  lcd.print(":");
  
  lcd.println(fecha.second());
  lcd.print(fecha.hour());
  
  lcd.print(":");				
  lcd.print(fecha.minute());

    delay(100);



 if (fecha.hour() == 1 && fecha.minute() == 35 && fecha.second() == 0){    
    encenbuzzerer();
   lcd.setCursor(0,0);
   lcd.print("ROCIO EN CAMINO");
   lcd.setCursor(0,1);
   lcd.print("...");
    delay(5000);
   lcd.clear();
    
  } 
  if (fecha.hour() == 1 && fecha.minute() == 35 && fecha.second() == 5) {
  apagbuzzerer();
 lcd.setCursor(0,0);
 lcd.print("ESTADO:");
 lcd.setCursor(0,1);
 lcd.print("REGANDO");
 bombaapag();
  delay(20000);
 lcd.clear();
  } else{
    bombaencen();
  }
}
 
  
  



 


 
