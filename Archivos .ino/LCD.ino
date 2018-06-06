​#import <LiquidCrystal.h>
#include <LiquidCrystal.h>

LiquidCrystal lcd(12,11,5,4,3,2);

#define contraste 9
#define brillo 10

void setup() {
  lcd.begin(16,2);
  pinMode(contraste,OUTPUT);
  pinMode(brillo,OUTPUT);
  
  analogWrite(brillo,255);
}

void loop() {
  lcd.print("Hola Mundo!");
  lcd.setCursor(0,1);
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
