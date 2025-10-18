//localtime() retorna um pointer para o tempo da máquina, gmtime() retorna um pointer para o horário do fuso-horário GMT

#include <ctime>
#include <iostream>

using namespace std;

//mostra a hora atual do pc

time_t timestamp = time(&timestamp);
struct tm datetime = *localtime(&timestamp);

cout << datetime.tm_hour;

//mostra a hora do fuso-horário GMT

time_t timestamp = time(&timestamp);
struct tm datetime = *gmtime(&timestamp);

cout << datetime.tm_hour;