//Queues seguem o esquema FIFO, onde o primeiro a entrar é o primeiro a sair, assim ao remover um elemento ele terá sido o primeiro da fila

#include <queue>;
#include <iostream>;
#include <string>;

using namespace std;

//criando uma fila

queue<string> carros;

//adicionando elementos na fila

// carros.push("Volvo");
// carros.push("BMW");
// carros.push("Ford");
// carros.push("Mazda");

//acessando elementos da fila

// cout << carros.front();  //acessa o primeiro elemento

// cout << carros.back();  //acessa o último elemento

//modificando valores da fila

// carros.front() = "Tesla"; //modifica o primeiro elemento

// carros.back() = "VW"; //modifica o último elemento

//removendo o valor da frente

// carros.pop();

//checando o tamanho da fila

// cout << carros.size();

//checando se a fila está vazio

// cout << carros.empty();