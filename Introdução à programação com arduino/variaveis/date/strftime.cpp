//strftime() permite alterar a maneira que uma data é mostrada

//1° parâmetro
//um array char onde será armazenado o resultado da strftime()

//2° parâmetro
//o tamanho do array char

//3° parâmetro
//uma string com o formato da data que será exibida

//4° parâmetro
//um pointer para a variável que contém a data

//opções para formatar uma data
// %a | representação curta do dia da semana | Fri
// %b | represenatação curta do mês | Dec
// %B | representação completa do mês | December
// %d | dia do mês com zero na frente | 09
// %e | dia do mês com espaço na frente | 9
// %H | hora em formato de 24 horas | 14
// %I | hora em formato de 12 horas | 02
// %M | minutos de uma hora | 30
// %p | AM ou PM | PM
// %S | segundos de um minuto | 01
// %y | represetação de ano em dois dígitos | 23
// %Y | represetação de ano em dois dígitos | 2023

#include <ctime>
#include <iostream>

using namespace std;

time_t timestamp = time(NULL);
struct tm datetime = *localtime(&timestamp);

char output[50];

strftime(output, 50, "%B %e, %Y", &datetime);
cout << output << "\n";

strftime(output, 50, "%I:%M:%S %p", &datetime);
cout << output << "\n";

strftime(output, 50, "%m/%d/%y", &datetime);
cout << output << "\n";

strftime(output, 50, "%a %b %e %H:%M:%S %Y", &datetime);
cout << output << "\n";