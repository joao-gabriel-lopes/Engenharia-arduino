//asctime() mostra a data de um datetime

#include <ctime>
#include <iostream>

using namespace std;

//mostrando a data de um datetime

time_t timestamp = time(NULL);
struct tm datetime = *localtime(&timestamp);

cout << asctime(&datetime);