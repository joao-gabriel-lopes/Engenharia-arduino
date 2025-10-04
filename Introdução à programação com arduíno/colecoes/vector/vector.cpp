//Vectors são similares aos array, porém possuem um tamanho dinâmico

#include <iostream>;
#include <string>;
#include <vector>;

using namespace std;

//criando um vector

vector<string> carros {"Volvo", "BMW", "Ford", "Mazda"};

//acessando um vector

// cout << carros[0];

//acessando o início de um vector

// cout << carros.front();

//acessando o fim de um vector

// cout << carros.back();

//acessando um vector com at()

// cout << carros.at(1);

//mudando o valor de um vector

// carros[0] = "Opel";

//adicionando um valor no final do vector

// carros.push_back("Tesla");

//removendo um valor no final do vector

// cars.pop_back();

//checando o tamanho do vector

// cout << cars.size();

//checando se o vector está vazio

// cout << cars.empty();

//percorrendo um vector com for

// for (int i = 0; i < carros.size(); i++) {
  // cout << carros[i] << "\n";
// }

//percorrendo um vector com foreach

// for (string carro : carros) {
  // cout << carro << "\n";
// }