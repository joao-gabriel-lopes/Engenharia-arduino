#include <AFMotor.h>

AF_DCMotor motor(1);

void setup()
{
    motor.setSpeed(200);
    motor.run(RELEASE);
}

void loop()
{
    motor.run(FORWARD);
    delay(2000);
    motor.run(BACKWARD);
    delay(2000);
}