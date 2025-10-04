//Variáveis armazenam um dado na memória do hardware

#include <iostream>

using namespace std;

//declarar variáveis

//exemplo:
//tipo nome = valor;

int peso = 50;
string texto = "Olá";

//detectando tipo automaticamente

//AUTO detecta o tipo automaticamente

auto num2 = 10; //auto com int
auto txt = "Oi"; //auto com string
auto nao = false; //auto com bool

//declarar múltiplas variáveis

int x = 5, y = 8, z = 10;

//todas com o mesmo valor

int x = y = z = 10;

//declarar constantes

const int gravidade = 9.8;

//outra maneira

#define velocidadeDaLuz = 300000000

//mudando valor de variáveis

int peso = 30;
string texto = "Oi";

//dentro de uma função

void main(){
    int num = 15;
    string txt = "teste";

    num = 10;
    txt = "abc";
}


