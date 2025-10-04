//Arrays multidimensionais permitem armazenar variáveis em duas ou mais dimensões

#include <array>
#include <iostream>
#include <string>

using namespace std;

//criando um array com duas dimensões

string letras[2][4] = {
  { "A", "B", "C", "D" },
  { "E", "F", "G", "H" }
};

//criando um array com três dimensões

string letras2[2][2][2] = {
  {
    { "A", "B" },
    { "C", "D" }
  },
  {
    { "E", "F" },
    { "G", "H" }
  }
};

//acessando um array com duas dimensões

// letras[0][1];

//acessando um array com três dimensões

// letras[0][1][0];

//percorrendo um array de duas dimensões

// for (int i = 0; i < 2; i++) {
//   for (int j = 0; j < 4; j++) {
//     cout << letters[i][j] << "\n";
//   }
// }

//percorrendo um array de três dimensões

// for (int i = 0; i < 2; i++) {
//   for (int j = 0; j < 2; j++) {
//     for (int k = 0; k < 2; k++) {
//       cout << letters[i][j][k] << "\n";
//     }
//   }
// }