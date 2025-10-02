//Listas permitem armazenar valores do mesmo tipo e cresce dinamicamente, porém elas não permitem acessar diretamente um elemento e permitem introduzir elementos no início e no fim

#include <list>

//criando uma lista

list<string> carros = {"Volvo", "BMW", "Ford", "Mazda"};

//acessando uma lista 

cout << carros.front();  //acessa o primeiro elemento

cout << carros.back();  //acessa o último elemento

//modificando os elementos de uma lista

carros.front() = "Opel"; //modifica o primeiro elemento

carros.back() = "Toyota"; //modifica o último elemento

//adicionando um elemento em uma lista

carros.push_front("Tesla"); //adiciona um elemento no início da lista

carros.push_back("VW"); //adiciona um elemento no fim da lista

//removendo um elemento de uma lista

carros.pop_front(); //remove um elemento no início da lista

carros.pop_back(); //remove um elemento no fim da lista

//checando o tamanho da lista

cout << carros.size();

//checando se a lista está vazio

cout << carros.empty();

//percorrendo uma lista com foreach

for (string carro : carros) {
  cout << carro << "\n";
}



