// Classes permitem englobar atributos e métodos para evitar a repetição de código

#include <iostream>
#include <string>

using namespace std;

// exemplo de classe

class Teste
{
public:
  int num;
  string texto;

  void Metodo()
  {
    cout << "Hello World!";
  }
};