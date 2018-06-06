/*
Extraído de https://goo.gl/BxM4zL
*/
​#import <LiquidCrystal.h> //En thinkercard hay que importar y luego incluir.
#include <LiquidCrystal.h> //Hay que revisar si la librería esta en el IDE. Ir a Programa>Incluir libreria>Gestionar librerias y buscar
  //La librería LiquidCrystal

LiquidCrystal lcd(12,11,5,4,3,2);//Los numeros en los que ira conectados al lcd de izquierda a derecha

#define contraste 9 //pin del constrate
#define brillo 10 //pin del brillo

void setup() {
  lcd.begin(16,2);//Incializar la pantalla con su tamaño
  pinMode(contraste,OUTPUT);
  pinMode(brillo,OUTPUT);
  
  analogWrite(brillo,255);
}

void loop() {
  lcd.print("Hola Mundo!");
  lcd.setCursor(0,1);//Pone el cursor en la 2 fila y en la columna 0(Recordar que solo tiene 2 y que estas se cuentan desde el 0 como si fuera una matriz en cualquier lenguaje de programacion)
  lcd.print("Pantalla 16x2");
  delay(1000);
  for(int i = 0;i<16;i++){
    lcd.scrollDisplayRight();
    delay(90);
  }

  for(int i = 0;i<16;i++){
    lcd.scrollDisplayLeft();
  }
  
  for(int i = 51;i>-1;i--){
    analogWrite(brillo,i*5);
    delay(35);
  }

  delay(1000);

 digitalWrite(brillo,HIGH);

  
  for(int i = 0;i<51;i++){
    analogWrite(brillo,i*5);
    delay(100);
  }

  delay(1000);
  digitalWrite(contraste,LOW);
  lcd.setCursor(0,0);
}
