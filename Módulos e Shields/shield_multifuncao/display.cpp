#include <TimerOne.h>
#include <MultFuncShield.h>

#define AUMENTA A1
#define DIMINUI A2
#define INICIA A3

int tempo = 0;

void setup()
{
    Timer1.initialize();
    MFS.initialize(&Timer1);

    pinMode(AUMENTA, INPUT);
    pinMode(DIMINUI, INPUT);
    pinMode(INICIA, INPUT);

    MFS.beep();
}

void loop()
{
    if (digitalRead(INICIA) == 0){
        while(tempo > 0){
            tempo -= 1;
            MFS.write(tempo);
            delay(1000);
        }
        MFS.beep(100);
    }

    while (digitalRead(AUMENTA) == 0){
        if (tempo < 9990){
            tempo += 10;
            MFS.write(tempo);
            delay(100);
        }
    }

    while (digitalRead(DIMINUI) == 0){
        if (tempo >= 10){
            tempo -= 10;
            MFS.write(tempo);
            delay(100);
        }
    }
}