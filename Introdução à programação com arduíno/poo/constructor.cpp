//Constructor permite passar parâmetros para um objeto e atribuí-los ao objeto

#include <iostream>
#include <string>

using namespace std;

class Carro {  
  public:  
    string marca;
    string modelo;  
    int ano;

    //exemplo de construtor
    Carro(string x, string y, int z) {
      marca = x;
      modelo = y;
      ano = z;
    }
};

//overloading

// class Carro2 {
//   public:
//     string marca;
//     string modelo;

//     Carro2() {
//       marca = "Desconhecido";
//       modelo = "Desconhecido";
//     }

//     Carro2(string b, string m) {
//       marca = b;
//       modelo = m;
//     }
// };

// int main() {
//   Carro2 carro1;
//   Carro2 carro2("BMW", "X5");
//   Carro2 carro3("Ford", "Mustang");

//   cout << "carro1: " << carro1.marca << " " << carro1.modelo << "\n";
//   cout << "carro2: " << carro2.marca << " " << carro2.modelo << "\n";
//   cout << "carro3: " << carro3.marca << " " << carro3.modelo;
//   return 0;
// }