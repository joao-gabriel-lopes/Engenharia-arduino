#include <Ultrasonic.h>

#define TRIGGER 2
#define ECHO 3
#define LED 5

Ultrasonic ultrasonic(TRIGGER, ECHO);

void setup(){
    Serial.begin(9600);

    pinMode(TRIGGER, OUTPUT);
    pinMode(ECHO, INPUT);

    pinMode(LED, OUTPUT);
}

void loop(){

    int cm = ultrasonic.read();
    Serial.print("cm: ");
    Serial.println(cm);

    int luz = map(cm, 4, 350, 0, 255);
    analogWrite(LED, luz);

    Serial.print("luz: ");
    Serial.println(luz);
    Serial.println("------");

    delay(1000);
}