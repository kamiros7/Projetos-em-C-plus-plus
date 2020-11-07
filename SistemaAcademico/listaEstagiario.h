#ifndef LISTAESTAGIARIO_H_INCLUDED
#define LISTAESTAGIARIO_H_INCLUDED

#include "lista.h"
#include "elemento.h"
#include "estagiario.h"

class listaEstagiario
{
private:
    Lista<Estagiario> ListaTemplateEstagiario;

public:

    listaEstagiario();
    ~listaEstagiario();

    void setEstagiarioLista(Estagiario* estagiario);
    void listeEstagiarioProximo();
    void listeEstagiarioAnterior();
    void gravarEstagiario();
    void recuperarEstagiario();
    void limpaLista();
};


#endif // LISTAESTAGIARIO_H_INCLUDED
