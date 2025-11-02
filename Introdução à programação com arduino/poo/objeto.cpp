//Objetos são instâncias de uma classe, contendo seus atributos e métodos

#include <iostream>
#include <string>

using namespace std;

//exemplo de classe

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

int main() {

  //criando objeto
  Teste obj;

  //modificando os valores
  obj.num = 15; 
  obj.texto = "teste";

  //exibindo os valores
  cout << obj.num << "\n";
  cout << obj.texto;
  obj.metodo();
  return 0;
}

