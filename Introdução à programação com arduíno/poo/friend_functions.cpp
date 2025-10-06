//Friend functions permitem acessar um atributo private, sem o uso de gets e sets

#include <iostream>

using namespace std;

class Empregado {
  private:
    int salario;

  public:
    Empregado(int s) {
      salario = s;
    }

    //exemplo de função friend
    friend void ExibirSalario(Empregado emp);
};

void ExibirSalario(Empregado emp) {
  cout << "Salário: " << emp.salario;
}

int main() {
  Empregado emp(50000);
  ExibirSalario(emp);
  return 0;
}