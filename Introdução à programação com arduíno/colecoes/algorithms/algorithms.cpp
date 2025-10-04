//Algorithms são funções usadas para resolver problemas com estruturas de dados como organizar, pesquisar ou manipular informações

#include <iostream>;
#include <string>;
#include <algorithm>;
#include <vector>;

using namespace std;

//criando um vetor

vector<string> carros = {"Volvo", "BMW", "Ford", "Mazda"};

//ordenando ascendentemente

// sort(carros.begin(), carros.end());

//ordenando descendentemente

// sort(carros.rbegin(), carros.rend());

//criando um vetor de números

vector<int> numeros = {1, 7, 3, 5, 9, 2};

//procurando pelo número 3
auto it = find(numeros.begin(), numeros.end(), 3);

//organizando o vetor

// sort(numeros.begin(), numeros.end());

//procurando pelo primeiro número maior que 5

auto it = upper_bound(numeros.begin(), numeros.end(), 5);

//pegando o menor número

auto it = min_element(numeros.begin(), numeros.end());

//pegando o maior número

auto it = max_element(numeros.begin(), numeros.end());

//função copy(), copia os elementos de um vetor para outro

//vetor para copiar os números

vector<int> numerosCopia(6);

//copia os elementos do vetor numeros para o vetor numerosCopia

// copy(numeros.begin(), numeros.end(), numerosCopia.begin());

//função fill(), preenche todos os elementos de um vetor com um valor

//vetor para preencher

vector<int> numerosPreenchidos(6);

//preenche todos os valores do vetor com 35

// fill(numbers.begin(), numbers.end(), 35);