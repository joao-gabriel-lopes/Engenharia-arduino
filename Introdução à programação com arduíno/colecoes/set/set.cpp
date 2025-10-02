//Sets armazenam valores únicos, onde valores iguais ou duplicados são ignorados, os valores são ordenados de maneira ascendente, é possível adicionar ou remover valores, mas não é possível modificá-los

#include <queue>;
#include <iostream>;
#include <string>;

using namespace std;

//criando um set

set<string> carros = {"Volvo", "BMW", "Ford", "Mazda"};

//organizando um set em ordem descendente

set<int, greater<int>> numeros = {1, 7, 3, 2, 5, 9};

//adicionando elementos em um set

carros.insert("Tesla");

//removendo um elemento em um set

carros.erase("Volvo");

//removendo todos os elementos de um set

//carros.clear();

//checando o tamanho do set

cout << carros.size();

//checando se o set está vazio

cout << carros.empty()

//percorrendo por um set

for (string carro : carros) {
  cout << carro << "\n";
}