//Namespaces permitem isolar código em diferentes blocos que podem ser utilizados em conjunto

//exemplo de namespace

namespace Inteiros {
  int x = 42;
}

//usando namespaces

using namespace Inteiros;

int main() {
  cout << x; //Inteiros::x
  return 0;
}