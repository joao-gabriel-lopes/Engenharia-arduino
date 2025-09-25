//STRUCTURES ou STRUCTS permitem armazenar variáveis de vários tipos diferentes

//criando uma struct

struct {             // declaração da structure
  int numero1;         // Membro (variável int)
  string string1;   // Membro (variável string)
} structure1;       // variável Structure

//criando várias structures iguais

struct {    
  int numero1;    
  string string1; 
} structure2, structure3; 

//acessando um membro de uma structure

structure2.numero1;

//atribuindo um valor para um membro de um structure

structure2.numero1 = 1;

//structures nomeadas

struct carro {  //esse struct agora é chamada de "carro"
  string marca;
  string modelo;
  int ano;
};

//utilizando structures nomeadas

carro carro1;
