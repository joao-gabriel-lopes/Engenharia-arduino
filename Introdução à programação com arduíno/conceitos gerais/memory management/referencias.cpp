//Referências são armazenadas na memória do dispositivo, variáveis apontam para o local onde essas referências estão armazenadas

#include <iostream>;

using namespace std;

//operador & permite criar apelidos para uma variável

string comida = "pizza";
string &refeicao = comida;

//cout << comida << "\n";
//cout << refeicao << "\n";

//atualizar a referência também mudará o valor da variável

//refeicao = "Pão";

//cout << comida << "\n";
//cout << refeicao << "\n";