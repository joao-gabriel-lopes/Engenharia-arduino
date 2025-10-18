//mktime() permite criar timestamps de qualquer horário

#include <ctime>
#include <iostream>

using namespace std;

struct tm datetime;
time_t timestamp;

datetime.tm_year = 2023 - 1900; //número de anos desde 1900
datetime.tm_mon = 12 - 1; //número de anos desde janeiro
datetime.tm_mday = 17;
datetime.tm_hour = 12;
datetime.tm_min = 30;
datetime.tm_sec = 1;
//Daylight Savings deve ser especificado
//-1 usa o fuso-horário do pc
datetime.tm_isdst = -1;

timestamp = mktime(&datetime);

cout << ctime(&timestamp);