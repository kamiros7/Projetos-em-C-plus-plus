#include "listaUniversidade.h"

listaUniversidade::listaUniversidade(int nu)
{
    numeroUniversidades = nu;
    contadorUniversidades = 0;
}

listaUniversidade::~listaUniversidade()
{
     limpaLista();
}

Lista<Universidade> listaUniversidade::getListaTemplateUniversidade()
{
    return ListaTemplateUniversidade;
}

void listaUniversidade::setUniversidade(Universidade* universidade)
{
   if(universidade!= NULL)
   {
       ListaTemplateUniversidade.criaObjeto(universidade);
   }
   else
   {
       cout << "Erro, universidade não incluida, informação nula do objeto " << endl;
   }

}

void listaUniversidade::listaUniversidadeProx()
{
    Universidade* pAuxUniversidade;
    elemento<Universidade>* pAuxElemento;
    pAuxElemento = ListaTemplateUniversidade.getListaPrimeiro();

    while(pAuxElemento != NULL)
    {
        pAuxUniversidade = pAuxElemento->getInfo();
        cout <<  "ID "  << pAuxUniversidade->getIdUniversidade() <<" Nome "<< pAuxUniversidade->getNome() << endl;

        pAuxElemento = pAuxElemento->getProximoElemento();
    }
}

void listaUniversidade::listaUniversidadeAnt()
{
    Universidade* pAuxUniversidade;
    elemento<Universidade>* pAuxElemento;
    pAuxElemento = ListaTemplateUniversidade.getListaAtual();

    while(pAuxElemento != NULL)
    {
        pAuxUniversidade = pAuxElemento->getInfo();
        cout << " ID "  << pAuxUniversidade->getIdUniversidade() <<" Nome "<< pAuxUniversidade->getNome() << endl;
        pAuxElemento = pAuxElemento->getAnteriorElemento();
    }
}

void listaUniversidade::gravarUniversidades()
{
    ofstream GravacaoUniversidades("universidades.txt", ios::out);

    if(!GravacaoUniversidades)
    {
        cerr << " Arquivo não pode ser aberto " << endl;
        fflush(stdin);
        getchar();
        return; // aqui retorna nada
    }

    Universidade* pAuxUni;
    elemento<Universidade>* pAuxElementoUni;
    pAuxElementoUni = ListaTemplateUniversidade.getListaPrimeiro();

    while(pAuxElementoUni != NULL)
    {
        pAuxUni = pAuxElementoUni->getInfo();

        GravacaoUniversidades << pAuxUni ->getIdUniversidade() << ' ' << pAuxUni->getNome() << endl;
        pAuxElementoUni = pAuxElementoUni->getProximoElemento();
    }
    cout << " Universidade gravada com sucesso " << endl;
    getchar();
}

void listaUniversidade::recuperarUniversidades()
{
    ifstream recuperarUniversidades("universidades.txt", ios::out);
    if(!recuperarUniversidades)
    {
        cerr<< " Arquivo não pode ser aberto " <<endl;
        fflush(stdin);
        getchar();
        return;
    }
     limpaLista();

       Universidade * pAuxUni = NULL;
        int id;
        char nome[150];

    while(recuperarUniversidades >> id >> nome)
    {
        if( 0 != strcmp(nome, ""))
        {
            pAuxUni = new Universidade( -1);
            pAuxUni->setIdUniversidade(id);
            pAuxUni->setNomeUniv(nome);

            setUniversidade(pAuxUni);
        }
    }
    recuperarUniversidades.close();
}

Universidade* listaUniversidade::localizar(char* n)
{
    Universidade* pAuxUni;
    elemento<Universidade>* pAuxElemento;
    pAuxElemento = ListaTemplateUniversidade.getListaPrimeiro();
    while(pAuxElemento != NULL)
    {
        pAuxUni = pAuxElemento ->getInfo(); // usar func compare
        if  ( (pAuxUni->getNome() ) == n )
        {
            return pAuxUni;
        }
        pAuxElemento= pAuxElemento->getProximoElemento();
    }
    return NULL;
}

void listaUniversidade::limpaLista()
{
    ListaTemplateUniversidade.limpaLista();
}
