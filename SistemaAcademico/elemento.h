#ifndef ELEMENTO_H_INCLUDED
#define ELEMENTO_H_INCLUDED

#include <iostream>
#include <string.h>
using namespace std;

// um gabarito tem sua total definição no .h ( não há .cpp)

template<class TIPO>
class elemento
{
private:
    elemento<TIPO>* pProximoElemento;
    elemento<TIPO>* pAnteriorElemento;
    TIPO* pInfo; // ponteiro para para se referenciar a cada objeto
    string nomeElemento;

public:
    elemento();
    ~elemento();

    void setProximoElemento(elemento<TIPO>* pProximo);
    elemento<TIPO>* getProximoElemento();

    void setAnteriorElemento(elemento<TIPO>* pAnterior);
    elemento<TIPO>* getAnteriorElemento();

    void setInfo( TIPO* pInfoObjeto);
    TIPO* getInfo();

    void setNomeElemento(char* n);
    string getNomeElemento();
};

template<class TIPO>
elemento<TIPO>::elemento()
{
    nomeElemento = " ";
    pProximoElemento = NULL;
    pAnteriorElemento = NULL;
    pInfo = NULL;
}

template<class TIPO>
elemento<TIPO>::~elemento()
{
    pProximoElemento = NULL;
    pAnteriorElemento = NULL;
    pInfo = NULL;
}

template<class TIPO>
void elemento<TIPO>::setProximoElemento(elemento<TIPO>* pProximo)
{
    pProximoElemento = pProximo;
}

template<class TIPO>
elemento<TIPO>* elemento<TIPO>::getProximoElemento()
{
    return pProximoElemento;
}

template<class TIPO>
void elemento<TIPO>::setAnteriorElemento(elemento<TIPO>* pAnterior)
{
    pAnteriorElemento = pAnterior;
}

template<class TIPO>
elemento<TIPO>* elemento<TIPO>::getAnteriorElemento()
{
    return pAnteriorElemento;
}

template<class TIPO>
void elemento<TIPO>::setInfo(TIPO* pInfoObjeto)
{
    pInfo = pInfoObjeto;
}

template<class TIPO>
TIPO* elemento<TIPO>::getInfo()
{
    return pInfo;
}

template<class TIPO>
void elemento<TIPO>::setNomeElemento(char* n)
{
    nomeElemento = n;
}

template<class TIPO>
string elemento<TIPO>::getNomeElemento()
{
    return nomeElemento;
}

#endif // ELEMENTO_H_INCLUDED
