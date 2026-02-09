#include <AFMotor.h>

AF_DCMotor motorEsq(1);
AF_DCMotor motorDir(2);

int eixoX;
int eixoY;

int vel;

void setup()
{
    pinMode(A8, INPUT);
    pinMode(A9, INPUT);

    Serial.begin(9600);

    motorEsq.setSpeed(0);
    motorEsq.run(RELEASE);

    motorDir.setSpeed(0);
    motorDir.run(RELEASE);
}

void loop()
{
    eixoX = analogRead(A9);
    eixoY = analogRead(A8);

    if (eixoX < 500)
    {
        vel = map(eixoX, 500, 0, 0, 255);

        motorEsq.setSpeed(vel);
        motorDir.setSpeed(vel);

        motorEsq.run(BACKWARD);
        motorDir.run(FORWARD);
    }
    else if (eixoX > 550)
    {
        vel = map(eixoX, 550, 1023, 0, 255);

        motorEsq.setSpeed(vel);
        motorDir.setSpeed(vel);

        motorEsq.run(FORWARD);
        motorDir.run(BACKWARD);
    }
    else if (eixoY < 500)
    {
        vel = map(eixoY, 500, 0, 0, 255);

        motorEsq.setSpeed(vel);
        motorDir.setSpeed(vel);

        motorEsq.run(FORWARD);
        motorDir.run(FORWARD);
    }
    else if (eixoY > 550)
    {
        vel = map(eixoY, 550, 1023, 0, 255);

        motorEsq.setSpeed(vel);
        motorDir.setSpeed(vel);

        motorEsq.run(BACKWARD);
        motorDir.run(BACKWARD);
    }
    else
    {
        motorEsq.setSpeed(0);
        motorDir.setSpeed(0);
    }

    Serial.println("eixoX: " + eixoX);
    Serial.println("eixoY: " + eixoY);
    Serial.println("vel: " + vel);
    Serial.println("----------------");

    delay(250);
}