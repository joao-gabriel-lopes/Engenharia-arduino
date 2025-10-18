//difftime() mede a diferença de tempo entre duas datas, retornando em segundos

#include <ctime>
#include <iostream>

time_t agora;
time_t proximoAno;
struct tm datetime;

agora = time(NULL);
datetime = *localtime(&agora);
datetime.tm_year = datetime.tm_year + 1;
datetime.tm_mon = 0;
datetime.tm_mday = 1;
datetime.tm_hour = 0; datetime.tm_min = 0; datetime.tm_sec = 0;
datetime.tm_isdst = -1;
proximoAno = mktime(&datetime);

int diff = difftime(proximoAno, agora);

cout << diff << " segundos até o próximo ano";