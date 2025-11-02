//Recursão permite repetir uma função até concluir uma parte do código

#include <iostream>

using namespace std;

int Soma(int k) {
  if (k > 0) {
    return k + Soma(k - 1);
  } else {
    return 0;
  }
}

int main() {
  int resultado = Soma(10);
  cout << resultado;
  return 0;
}