#include <Servo.h>

Servo servo;
int angle = 0;

void setup()
{
  servo.attach(13);
  servo.write(angle);
}

void loop()
{
  for(angle = 10;angle<180;angle++){
  	servo.write(angle);
    delay(15);
  }
   for(angle = 179;angle>0;angle--){
  	servo.write(angle);
    delay(15);
  }
}