/*BRYAN KUNCE 2022096 EB5BM*/
#include <Keypad.h>//PONEMOS LA LIBRERIA DEL TECLADO

const int FILAS = 4;
const int COLUMNAS= 4;
char keys[FILAS][COLUMNAS]={// SE PONE EL ARREGLO
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
int pradar = 50;
int buzzere = 2;
#define buzzeron();tone(buzzere,959)
#define buzzeroff();noTone(buzzere)
#define retraso()delay(10)


void setup()
{
	Serial.begin(9600);
  pinMode(pradar,INPUT)
  buzzeron();
  buzzeroff();
}


void loop()
{
  teclaPrecionada=teclado.getKey(); //detecta que en el teclado se pulso un boton
  if(teclaPrecionada){
    ingresaPass[indice]=teclaPrecionada; // le asigna lo que ingresamos a el arreglo que va a ser comparado
    indice++; //cambiara la posicion del arreglo para poder asignar los caracteres
    Serial.print(teclaPrecionada);
  }
int Smo = digitalRead(pradar);

if (Smo == HIGH)
{
buzzeron();
}


  if(indice==4){ //cuando se llegue al limite del arreglo verificara si esta correcta o no la contraseña
    if(strcmp(pass,ingresaPass)==0){ //Verifica que la contraseña esta correcta
      Serial.println(" Todo en orden ");
      buzzeroff();
    }
    else{
      Serial.println(" Movimiento sospechoso");
      buzzeron();
    }
    indice=0;//FINALIZA EL PROGRAMA
  }
}