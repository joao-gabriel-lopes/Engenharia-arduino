//mktime() permite criar timestamps de qualquer horário

#include <ctime>
#include <iostream>

using namespace std;

struct tm datetime;
time_t timestamp;

datetime.tm_year = 2023 - 1900; // Number of years since 1900
datetime.tm_mon = 12 - 1; // Number of months since January
datetime.tm_mday = 17;
datetime.tm_hour = 12;
datetime.tm_min = 30;
datetime.tm_sec = 1;
// Daylight Savings must be specified
// -1 uses the computer's timezone setting
datetime.tm_isdst = -1;

timestamp = mktime(&datetime);

cout << ctime(&timestamp);