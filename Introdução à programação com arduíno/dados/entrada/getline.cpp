//GETLINE tem como função coletar dados que o usuário digitar

#include <iostream>;
#include <string>;

using namespace std;

//coletar um texto que o usuário digitar e exibí-lo

int main(){
    string texto;
    cout << "Digite um texto: ";
    getline(cin, texto);
    cout << "Seu texto é: " << texto;
    return 0;
}