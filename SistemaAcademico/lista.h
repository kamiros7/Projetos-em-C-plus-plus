#ifndef LISTA_H_INCLUDED
#define LISTA_H_INCLUDED
#include <iostream>
#include <string>
using namespace std;
//#include "elemento.h"

template<class TIPO>
class Lista
{

public:
    template<class U>
    class elemento
    {
    private:
        elemento<TIPO>* pProximoElemento;
        elemento<TIPO>* pAnteriorElemento;
        TIPO* pInfo; // ponteiro para para se referenciar a cada objeto
        //string nomeElemento;

    public:
        elemento(){pProximoElemento = NULL; pAnteriorElemento= NULL; pInfo = NULL;}
        ~elemento(){pProximoElemento = NULL; pAnteriorElemento= NULL; pInfo = NULL; }

        void setProximoElemento(elemento<TIPO>* pProximo){pProximoElemento = pProximo;}
        elemento<TIPO>* getProximoElemento(){return pProximoElemento;}

        void setAnteriorElemento(elemento<TIPO>* pAnterior){pAnteriorElemento = pAnterior;}
        elemento<TIPO>* getAnteriorElemento(){return pAnteriorElemento;}

        void setInfo( TIPO* pInfoObjeto){pInfo = pInfoObjeto;}
        TIPO* getInfo(){return pInfo;}

        //void setNomeElemento(char* n){nomeElemento = n;}
        //string getNomeElemento(){return nomeElemento;}
    };


    private:
    elemento<TIPO>* pObjetoPrimario;
    elemento<TIPO>* pObjetoAtual;

    public:
    Lista(){pObjetoAtual = NULL; pObjetoPrimario = NULL;}
    ~Lista();

    void limpaLista();
    bool setElementoLista(elemento<TIPO>* pElemento);
    bool criaObjeto(TIPO* pInfo);
    elemento<TIPO>* getListaPrimeiro(){return pObjetoPrimario;}
    elemento<TIPO>* getListaAtual(){return pObjetoAtual;}
};

template<class TIPO>
Lista<TIPO>::~Lista()
{
    limpaLista();
}

template<class TIPO>
void Lista<TIPO>::limpaLista()
{
    elemento<TIPO> *paux1, *paux2;

   paux1 = pObjetoPrimario;
   paux2 = paux1;

   while (paux1 != NULL)
   {
		paux2 = paux1->getProximoElemento();
	    delete (paux1);
        paux1 = paux2;
   }

   pObjetoPrimario  = NULL;
   pObjetoAtual = NULL;
}

template<class TIPO>
bool Lista<TIPO>::criaObjeto(TIPO* pInfo)
{
    if(pInfo != NULL)
    {
        elemento<TIPO>* pElemento = NULL;
        pElemento = new elemento<TIPO>();
        pElemento->setInfo(pInfo);
        setElementoLista(pElemento);
        return true;
    }
    else
    {
        cout << " Erro no elemento, informação do elemento é nula " << endl;
        return false;
    }
}

template<class TIPO>
bool Lista<TIPO>::setElementoLista(elemento<TIPO>* pElemento)
{
    if(pElemento != NULL)
    {
        if(pObjetoPrimario == NULL)
        {
            pObjetoPrimario = pElemento;
            pObjetoPrimario->setAnteriorElemento(NULL);
            pObjetoPrimario->setProximoElemento(NULL);
            pObjetoAtual = pObjetoPrimario;
        }
        else
        {
            pElemento->setAnteriorElemento(pObjetoAtual);
            pElemento->setProximoElemento(NULL);
            pObjetoAtual->setProximoElemento(pElemento);
            pObjetoAtual = pObjetoAtual->getProximoElemento();
        }
        return true;
    }
    else
    {
        cout << " Erro, elemento com informação nula " << endl;
        return false;
    }
}
#endif // LISTA_H_INCLUDED
