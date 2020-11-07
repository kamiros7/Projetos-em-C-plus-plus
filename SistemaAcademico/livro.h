#ifndef LIVRO_H_INCLUDED
#define LIVRO_H_INCLUDED
#include "areaConhecimento.h"

class Livro : public areaConhecimento
{
private:
    string nomeLivro;

public:
    Livro(int identificador = -1);
    ~Livro();

    string getNomeLivro();
    void setNomeLivro(char const* nome = " ");
    //função polimorfica
    void getDadoNomes();
};

#endif // LIVRO_H_INCLUDED
