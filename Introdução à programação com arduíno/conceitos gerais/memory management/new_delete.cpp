//NEW e DELETE permitem gerenciar o armazenamento de memória de maneira manual

//exemplo de new

int* pointer = new int;
*pointer = 35;
cout << *pointer;

//exemplo de delete

delete pointer;