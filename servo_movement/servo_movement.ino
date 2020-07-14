#include <Servo.h>

Servo servo_1;
int s_angle =10;

void setup() {
  servo_1.attach(8);
  servo_1.write(s_angle);
}

void loop() {

  for(s_angle=10; s_angle<180; s_angle++)
  {
    servo_1.write(s_angle);
    delay(15);
  }

  for(s_angle=180; s_angle>10; s_angle-- )
  {
    servo_1.write(s_angle);
    delay(15);
  }
  
}
