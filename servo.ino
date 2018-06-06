#include <Servo.h> //Se incluye la librería del Servo.

Servo servoMain; // Se define el Servo.

void setup() 
{ 
  servoMain.attach(10); //Conectamos el Servo al pin 10.
} 

void loop() { 
  
  servoMain.write(45); // Se gira el servo a los 45 grados.
  delay(1000); // Espera 1 segundo 
  servoMain.write(0); // Se gira el servo hacia el extremo, 0 grados.
  delay(1000); // Espera 1 segundo 
  servoMain.write(90); // Se gira el Servo hacia la posición central del mismo.
  delay(1000); // Espera 1 segundo 
  servoMain.write(135); // Se gira el servo hacia los 135 grados.
  delay(1000); // Espera 1 segundo 
  servoMain.write(180); // Se gira el Servo hacia el extremo, 180 grados.
  delay(1000); // Espera 1 segundo 
  servoMain.write(90); // Se gira nuevamente el Servo hacia la posición central.    
  delay(1000); // Espera 1 segundo 
            
}
