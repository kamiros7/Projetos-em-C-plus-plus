#ifndef LISTAUNIVERSIDADE_H_INCLUDED
#define LISTAUNIVERSIDADE_H_INCLUDED

#include "lista.h"
#include "universidade.h"
#include "elemento.h"

class listaUniversidade
{
private:
    int numeroUniversidades;
    int contadorUniversidades;
    Lista<Universidade> ListaTemplateUniversidade;

public:

    listaUniversidade(int nu = 1000);
    ~listaUniversidade();

    void setUniversidade(Universidade* universidade);
    void listaUniversidadeProx();
    void listaUniversidadeAnt();
    void gravarUniversidades();
    void recuperarUniversidades();
    void limpaLista();
    Lista<Universidade> getListaTemplateUniversidade();
    Universidade* localizar( char* n);
};

#endif // LISTAUNIVERSIDADE_H_INCLUDED
