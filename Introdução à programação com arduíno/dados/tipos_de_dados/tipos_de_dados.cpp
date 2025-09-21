//Dados possuem diferentes tipos que podem representar valores numéricos, textos e até verdadeiro ou falso

#include <iostream>;

using namespace std;

//tipos de dados

int num = 5; //armazena números inteiro, sem decimais
float dinheiro = 10.50; //armazena números com casas decimais, podendo conter até 6 ou 7 casas decimais
double area = 17.20; //armazena números com casas decimais, podendo conter até 15 casas decimais
char caracter = 'a'; //armazena um caracter/número/letra ou valor ASCII
bool sim = true; //armazena uma valor verdadeiro ou falso
string texto = "olá"; //armazena uma sequência de caracteres

//detectando tipo automaticamente

//AUTO detecta o tipo automaticamente

auto num2 = 10; //auto com int
auto txt = "Oi"; //auto com string
auto nao = false; //auto com bool
