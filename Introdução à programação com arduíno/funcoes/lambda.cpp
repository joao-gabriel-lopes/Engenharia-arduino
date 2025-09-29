//lambdas são funções curtas, anônimas e que podem ser escritas no código a ser executado

#include <iostream>;
#include <functional>;
using namespace std;

//exemplo de lambda

int main() {
  auto message = []() {
    cout << "Hello World!\n";
  };

  message();
  return 0;
}

//lambda com parâmetros

// int main() {
//   auto add = [](int a, int b) {
//     return a + b;
//   };

//   cout << add(3, 4);
//   return 0;
// }

//lambda como parâmetro dentro de outras funções

// void myFunction(function<void()> func) {
//   func();
//   func();
// }

// int main() {
//   auto message = []() {
//     cout << "Hello World!\n";
//   };

//   myFunction(message);
//   return 0;
// }