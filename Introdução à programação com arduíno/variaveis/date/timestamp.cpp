//Timestamp permite criar uma variável que representa datas e horários

#include <iostream>
#include <ctime>

using namespace std;

//criando um timestamp da hora e data atual

time_t timestamp;
time(&timestamp);

//Mostra o tempo atual com base no timestamp criado

cout << ctime(&timestamp);

//outra maneira de criar um timestamp

time_t timestamp = time(NULL);

