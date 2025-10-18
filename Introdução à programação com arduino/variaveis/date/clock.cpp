//clock() pode ser usada para medir a diferença entre duas datas curtas, devido ao alto nível de precisão

#include <ctime>
#include <iostream>

//chamar a função clock() retorna um valor do tipo clock_t

clock_t antes = clock();
int k = 0;
for(int i = 0; i < 100000; i++) {
  k += i;
}
clock_t duração = clock() - antes;

//para medir a diferença é necessário dividir pela constante CLOCKS_PER_SEC

cout << "Duração: " << (float)duração / CLOCKS_PER_SEC << " segundos";