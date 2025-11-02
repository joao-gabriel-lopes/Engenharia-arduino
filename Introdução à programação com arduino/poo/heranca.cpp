//Herança permite a reutilização de código entre classes semelhantes

#include <iostream>

using namespace std;

//classe pai
class Veiculo {
  public:
    string narca = "Ford";
    void Buzina() {
      cout << "Buzinando \n" ;
    }
};

//classe filho
class Carro: public Veiculo {
  public:
    string modelo = "Mustang";
};

int main() {
  Carro Carro1;
  Carro1.Buzina();
  cout << Carro1.marca + " " + Carro1.modelo;
  return 0;
}