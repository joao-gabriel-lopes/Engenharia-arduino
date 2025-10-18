//Iterators são usados para percorrer estruturas de dados, através do apontamento

#include <iostream>
#include <string>
#include <vector>

using namespace std;

//criando um vetor
vector<string> carros = {"Volvo", "BMW", "Ford", "Mazda"};

//criando um iterador de vetor chamado it
vector<string>::iterator it;

//criando um iterador com auto

//auto it = carros.begin();

//função begin() acessa o início da estrutura de dados

//it = carros.begin();

//apontando para o terceiro elemento

//it = carros.begin() + 2;

//função end() aponta para uma posição após o último elemento da estrutura de dados

//it = carros.end();

//apontando para o último elemento

//it = carros.end() - 1;

//percorrendo os elementos do vetor com um iterador
// for (it = carros.begin(); it != carros.end(); ++it) {
//   cout << *it << "\n";
// }

//percorrendo os elementos do vetor com um iterador de maneira inversa
// for (auto it = carros.rbegin(); it != carros.rend(); ++it) {
//   cout << *it << "\n";
// }