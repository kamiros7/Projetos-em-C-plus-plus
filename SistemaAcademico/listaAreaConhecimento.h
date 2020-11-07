#ifndef LISTAAREACONHECIMENTO_H_INCLUDED
#define LISTAAREACONHECIMENTO_H_INCLUDED
#include "lista.h"
#include "elemento.h"
#include "areaConhecimento.h"

//Não irei gravar e nem recuperar Area de Conhecimento

class listaAreaConhecimento
{
private:
    Lista<areaConhecimento> ListaTemplateAreaConhecimento;

public:
    listaAreaConhecimento();
    ~listaAreaConhecimento();

    void setAreaConhecimentoLista(areaConhecimento* ac);
    void listeAreaConhecimentoProximo();
    void listeAreaConhecimentoAnterior();
    void gravarAreaconheicmento();
    void recuperarAreaconhecimento();
    void limpaLista();
    void listeDados();
};


#endif // LISTAAREACONHECIMENTO_H_INCLUDED
