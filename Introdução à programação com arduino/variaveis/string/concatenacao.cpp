//Concatenação tem a função de unir o conteúdo de duas ou mais strings

#include <iostream>
#include <string>

using namespace std;

//concatenando strings para formar um nome completo

string nome = "Pedro";
string sobrenome = "Carvalho";
string nomeCompleto = nome + " " + sobrenome;

//usando append

string nome2 = "John ";
string sobrenome2 = "Doe";
string nomeCompleto2 = nome2.append(sobrenome2);

//concatenando números e strings

int idade = 25;
string saida = "Olá " + nomeCompleto + ", " + "você tem " + to_string(idade) + " anos.";
