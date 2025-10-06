//Classes virtuais permite rodar a função diretamente da classe filha ao invés da classe pai

#include <iostream>

using namespace std;

class Animal {
  public:
    virtual void Som() {
      cout << "Som do animal \n";
    }
};

class Cachorro: public Animal {
  public:
    void Som() override {
      cout << "Cachorro late \n";
    }
};

int main() {
  Animal* a;
  Cachorro d;
  a = &d;
  a->Som(); //Saída: Cachorro late
  return 0;
}