//Polimorfismo permite a modificação de métodos de classes pais

#include <iostream>

using namespace std;

//classe pai
class Animal {
  public:
    void EmitirSom() {
      cout << "O animal emite um som \n";
    }
};

//classe filho
class Porco : public Animal {
  public:
    void EmitirSom() {
      cout << "O porco emite: hoink hoink \n";
    }
};

//classe filho
class Cachorro : public Animal {
  public:
    void EmitirSom() {
      cout << "O cachorro emite: au au \n";
    }
};