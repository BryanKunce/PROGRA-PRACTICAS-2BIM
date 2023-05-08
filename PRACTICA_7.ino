#include <Wire.h>//LIBRERIA QUE PERSIMTE ESCRIBIR CON EL I2C
#include <Keypad.h>//LIBRERIA PARA EL TECLADO MATRICIAL
#include <LiquidCrystal_I2C.h>//LIBRERIA PARA LCD
#include <RTClib.h>//LIBRERIA PARA EL RTC
#include <Servo.h>// LIBRERIA PARA EL SERVO MOTOR




/*DEFINIR FILAS Y COLUMNAS DEL LCD CON EL I2C*/
#define lcdAddress 0x27  
#define filas 2
#define columnas 16
LiquidCrystal_I2C lcd(lcdAddress, columnas, filas);





/*DEFINIMOS EL SERVOMOTOR CON SU NOMBRE DE VARIABLE*/
Servo Servom;





/*DEFINIMOS EL RETC CON SU NOMBRE DE VARIABLE*/
RTC_DS3231 rtc;





/*NOS VA A SERVIR PARA EL TECLADO MATRICIAL*/
const int FILAS = 4;
const int COLUMNAS= 4;
char keys[FILAS][COLUMNAS]={/*COLOCAMOS EL ARREGLO*/
  {'1','2','3','A'},
  {'4','5','6','B'},
  {'7','8','9','C'},
  {'*','0','#','D'}
};
byte pinesFila[FILAS]={11,10,9,8};//DESIGNAMOS LOS PINES PARA EL TECLADO TANTO DE LAS FILAS COMO DE LAS COLUMNAS
byte pinesColumna[COLUMNAS]={7,6,5,4};

Keypad teclado=Keypad(makeKeymap(keys), pinesFila, pinesColumna,FILAS,COLUMNAS);

char teclaPrecionada;

char pass[5]="1988"; //Poner en el arreglo 1 posicion mas a la que tendra la contraseña correcta
char ingresaPass[5]; // tiene que tener el mismo tamaño del arreglo de la contraseña correcta
int indice=0;






void setup() {
/*SERVOMOTOR*/
   Servom.attach(3); 
   Servom.write(0);
  


/*RTC*/
  rtc.begin();
  rtc.adjust(DateTime(__DATE__, __TIME__));

  /*LCD*/
  lcd.init();
  lcd.backlight();

}

void loop() {
   teclaPrecionada=teclado.getKey(); //detecta que en el teclado se pulso un boton
  if(teclaPrecionada){
    ingresaPass[indice]=teclaPrecionada; // le asigna lo que ingresamos a el arreglo que va a ser comparado
    indice++; //cambiara la posicion del arreglo para poder asignar los caracteres
    

  if(indice==4){ //cuando se llegue al limite del arreglo verificara si esta correcta o no la contraseña
    if(strcmp(pass,ingresaPass)==0){
    
    lcd.setCursor(0,0);
    lcd.print("BIENVENIDO A LA");
    lcd.setCursor(0,1);
    lcd.print("BATICUEVA");
    delay(1000);
     lcd.clear();
     Servom.write(90);

     
     
  }
  else{
     Servom.write(0);
      lcd.setCursor(0,0);
    lcd.print("ACCESO");
    lcd.setCursor(0,1);
    lcd.print("DENEGADO");
    delay(2000);
     lcd.clear();
    
    
  }
}
}
}
