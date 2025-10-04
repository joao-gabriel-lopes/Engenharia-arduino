//Arrays permitem armazenar diversas variáveis de um mesmo tipo

#include <array>;
#include <iostream>;
#include <string>;

using namespace std;

//declarando um array sem valores

string carros[4];

//declarando um array com valores

string carros2[4] = {"Volvo", "BMW", "Ford", "Mazda"};

//declarando um array de números

int numeros[3] = {10, 20, 30};

//omitindo o tamanho de um array

string carros3[] = {"Volvo", "BMW", "Ford"};

//acessando os valores de um array

// cout << carros2[0];

//modificando os valores de um array

// carros2[0] = "Fusca";

//percorrendo um array

//for
// for (int i = 0; i < 5; i++) {
//   cout << carros2[i] << "\n";
// }

//foreach
// for (int num : myNumbers) {
//   cout << num << "\n";
// }