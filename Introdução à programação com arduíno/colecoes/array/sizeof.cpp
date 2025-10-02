//SIZE OF retorna o tamanho do array em bytes

#include <array>;
#include <iostream>;
#include <string>;

using namespace std;

//pegando o tamanho do array em bytes
int numeros[5] = {10, 20, 30, 40, 50};
cout << sizeof(numeros);

//pegando o tamanho do array
cout << sizeof(numeros) / sizeof(numeros[0]);