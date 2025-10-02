//Maps armazenam valores de par chave e valor, as chaves são únicas e servem como identificação dos valores, os valores são organizados de maneira ascendente de acordo com a chave

#include <map>;

//criando um map

map<string, int> pessoas = { {"John", 32}, {"Adele", 45}, {"Bo", 29} };

//operador greater permite inverter a oredem de declaração da chave e valor

//map<string, int, greater<string>> pessoas = { {"John", 32}, {"Adele", 45}, {"Bo", 29} };

//acessando um elemento do map

cout << "John tem " << pessoas["John"] << " anos";

//acessando com o at

cout << "John tem " << pessoas.at("John") << " anos";

//mudando valores de um map

pessoas["John"] = 50;

//adicionando elementos em um map

pessoas["Jenny"] = 22;
pessoas["Liam"] = 24;
pessoas["Kasper"] = 20;
pessoas["Anja"] = 30;

//adicionando elementos com insert

//pessoas.insert({"Jenny", 22});
//pessoas.insert({"Liam", 24});
//pessoas.insert({"Kasper", 20});
//pessoas.insert({"Anja", 30});

//removendo elementos de um map

pessoas.erase("John");

//removendo todos os elementos de um map

//pessoas.clear();

//checando o tamanho de um map

cout << pessoas.size();

//verificando se um map está vazio

cout << pessoas.empty();

//verificando se uma chave existe

cout << pessoas.count("John");

//percorrendo os elementos de um map

for (auto pessoa : pessoas) {
  cout << pessoa.first << " is: " << pessoa.second << "\n";
}