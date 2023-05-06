#include <Wire.h>
#include <LiquidCrystal_I2C.h>
#include <DallasTemperature.h>
#include <RTClib.h>

#define lcdAddress 0x27  
#define filas 2
#define columnas 16
LiquidCrystal_I2C lcd(lcdAddress, columnas, filas);

OneWire ourWire(4);
DallasTemperature sensors(&ourWire);

RTC_DS3231 rtc;

#define buz 5
#define salidabuz() pinMode(buz,OUTPUT)
#define encenbuzzerer() tone(buz,1000)
#define apagbuzzerer() noTone(buz)

#define bomba 4
#define salidabomba() pinMode(bomba,OUTPUT)
#define bombaencen() digitalWrite(bomba,HIGH)
#define bombaapag() digitalWrite(bomba,LOW)

void setup() {
 lcd.init();
 lcd.backlight();
  sensors.begin();
  rtc.begin();
  rtc.adjust(DateTime(__DATE__, __TIME__));
  salidabuz();
  salidabomba();

}

void loop() {
  sensors.requestTemperatures();
  float temperatura = sensors.getTempFByIndex(0);
 lcd.setCursor(0,1);  
  lcd.print("TEMPT: *C ");
 lcd.print(temperatura);
 lcd.setCursor(0,0);
 lcd.print("HOUR:   ");
 
  
  DateTime fecha = rtc.now();
 lcd.print(  fecha.hour());
 lcd.print(":");				
 lcd.print(fecha.minute());
 lcd.print(":");
 lcd.print(fecha.second());
  
  delay(100);
  lcd.clear();

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
