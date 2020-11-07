#include "listaAreaConhecimento.h"

listaAreaConhecimento::listaAreaConhecimento()
{

}

listaAreaConhecimento::~listaAreaConhecimento()
{
    limpaLista();
}

void listaAreaConhecimento::setAreaConhecimentoLista(areaConhecimento* ac)
{
    if(ac != NULL)
    {
        ListaTemplateAreaConhecimento.criaObjeto(ac);
    }
    else
    {
        cout << " Erro, Area de Conhecimento não incluida, informação do objeto nula " << endl;
    }
}

void listaAreaConhecimento::limpaLista()
{
    ListaTemplateAreaConhecimento.limpaLista();
}

void listaAreaConhecimento::listeAreaConhecimentoProximo()
{
    areaConhecimento* pAuxAc = NULL;
    elemento<areaConhecimento>* pAuxElemento = NULL;
    pAuxElemento = ListaTemplateAreaConhecimento.getListaPrimeiro();

    while(pAuxElemento != NULL)
    {
        pAuxAc = pAuxElemento->getInfo();
        cout << " ID " << pAuxAc->getIdAreaConhecimento() << " Nome " << pAuxAc->getAreaConhecimento() << endl;
        pAuxElemento = pAuxElemento->getProximoElemento();
    }
}

void listaAreaConhecimento::listeAreaConhecimentoAnterior()
{
    areaConhecimento* pAuxAc = NULL;
    elemento<areaConhecimento>* pAuxElemento = NULL;
    pAuxElemento = ListaTemplateAreaConhecimento.getListaAtual();

    while(pAuxElemento != NULL)
    {
        pAuxAc = pAuxElemento->getInfo();
        cout << " ID " << pAuxAc->getIdAreaConhecimento() << " Nome " << pAuxAc->getAreaConhecimento() << endl;
        pAuxElemento = pAuxElemento->getAnteriorElemento();
    }
}

//================= FUNÇÃO QUE CONTEM O POLIMORFISMO ====================//
void listaAreaConhecimento::listeDados()
{
    elemento<areaConhecimento>* pElemento = NULL;
    areaConhecimento* pAc = NULL;
    pElemento = ListaTemplateAreaConhecimento.getListaPrimeiro();

    while(pElemento != NULL)
    {
        pAc = pElemento->getInfo();
        pAc->getDadoNomes();
        pElemento = pElemento->getProximoElemento();
    }
}

