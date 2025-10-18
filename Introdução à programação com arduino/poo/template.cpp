//Templates permitem utilizar diferentes tipos em uma mesma classe

#include <iostream>

using namespace std;

template <typename T>
class Caixa {
  public:
    T valor;
    Caixa(T v) {
      valor = v;
    }
    void Mostrar() {
      cout << "Valor: " << valor << "\n";
    }
};

int main() {
  Caixa<int> IntCaixa(50);
  Caixa<string> StrCaixa("Hello");

  IntCaixa.Mostrar();
  StrCaixa.Mostrar();
  return 0;
}