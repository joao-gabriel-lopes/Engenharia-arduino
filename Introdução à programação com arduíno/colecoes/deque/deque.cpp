//Deques são filas de duas pontas, permitindo retirar elementos do início e do fim da fila

#include <deque>;
#include <iostream>;
#include <string>;

using namespace std;

//criando uma deque

deque<string> carros = {"Volvo", "BMW", "Ford", "Mazda"};

//acessando uma deque

// cout << carros[0];

//modificando um elemento de uma deque

// carros[0] = "Fusca";

//acessando o primeiro elemento da deque

// cout << carros.front();

//acessando o último elemento da deque
// cout << carros.back();

//acessando com at()

// cout << carros.at(0);

//adicionar elementos de uma deque

//carros.push_front("Tesla"); //Adicionando um elemento no início da deque

//carros.push_back("VW"); //Adicionando um elemento no fim da deque

//removendo elementos de uma deque

//carros.pop_front(); //remove o primeiro elemento

//carros.pop_back(); //remove o último elemento

//checando o tamanho da deque

// cout << carros.size();

//checando se a deque está vazio

// cout << carros.empty();

//percorrendo uma deque com foreach

// for (string carro : carros) {
//   cout << carro << "\n";
// }

