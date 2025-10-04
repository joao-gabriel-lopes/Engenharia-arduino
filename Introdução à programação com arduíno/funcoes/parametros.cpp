//parâmetros permitem passar conteúdos de variáveis para a função

#include <iostream>

using namespace std;

int nome(string nome){
    cout << nome;
    return 0;
}

//parâmetro default

int nome2(string nome = "Pedro"){
    cout << nome;
    return 0;
}

//parâmetro de array

void func2(int numeros[5]) {
  for (int i = 0; i < 5; i++) {
    cout << numeros[i] << "\n";
  }
}

//parâmetro de struct

struct Carro {
  string marca;
  int ano;
};

void func3(Carro c) {
  cout << "Marca: " << c.marca << ", Ano: " << c.ano << "\n";
}