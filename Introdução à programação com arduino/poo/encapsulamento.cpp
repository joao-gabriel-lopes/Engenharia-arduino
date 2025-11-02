//Encapsulamento tem o objetivo de proteger o código do próprio programador e do cliente, através de modificadores de acesso e métodos gets e sets

#include <iostream>

using namespace std;

//Exemplo de aplicação do encapsulamento

class Empregado {
  private:
    //atributo privado
    int salario;

  public:
    // Setter
    void SetSalario(int s) {
      salario = s;
    }
    // Getter
    int GetSalario() {
      return salario;
    }
};

int main() {
  Empregado obj;
  obj.SetSalario(50000);
  cout << obj.getSalario();
  return 0;
}