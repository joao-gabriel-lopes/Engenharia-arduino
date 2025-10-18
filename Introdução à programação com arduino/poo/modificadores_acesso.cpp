// Modificadores de acesso permitem controlar quem tem acesso ao atributos e métodos de uma classe

class Classe
{
public:    // modificador public (permite o acesso dentro e fora da classe)
    int x; // atributo public

private:   // modificador private (permite o acesso dentro da classe)
    int y; // atributo private

protected: // modificador protected (permite o acesso dentro da classe e seus filhos)
    int y; // atributo protected
};