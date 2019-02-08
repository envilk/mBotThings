#include <MeMCore.h>

MeUltrasonicSensor ultrasonic(PORT_3);

MeDCMotor motor1(M1); //Motor1 is Left Motor
MeDCMotor motor2(M2); //Motor2 is Right Motor

void setup() 
{
  Serial.begin(9600);
}

void loop() 
{
  delay(1000);

  //movimiento recto
  while(ultrasonic.distanceCm() > 10)
  {
    motor1.run(-100);
    motor2.run(100);
  }
  motor1.stop();
  motor2.stop();
  delay(1000);
  //girar a la izquierda
  motor1.run(50);
  motor2.run(80);
  delay(1000);
  motor1.stop();
  motor2.stop();
}
