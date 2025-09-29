//Pointers indicam o local da memória que uma variável está armazenada

//criando um pointer

string comida = "Pizza";
string* pointer = &comida;

cout << &comida; // retorna 0x6dfed4

cout << pointer; // retorna 0x6dfed4

cout << *pointer; // retorna Pizza