#include "livro.h"

Livro::Livro(int identificador)
{
    nomeLivro = " ";
    idAc = identificador;
}

Livro::~Livro()
{

}

string Livro::getNomeLivro()
{
    return nomeLivro;
}

void Livro::setNomeLivro(char const* nome)
{
    nomeLivro = nome;
}

void Livro::getDadoNomes()
{
    cout << " Nome " << getNomeLivro() << " Area de Conhecimento " << getAreaConhecimento() << endl;
}
