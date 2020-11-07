#include "areaConhecimento.h"

areaConhecimento::areaConhecimento(int identificador)
{
    nomeConhecimento = " ";
    idAc = identificador;
}

areaConhecimento::~areaConhecimento()
{

}

int areaConhecimento::getIdAreaConhecimento()
{
    return idAc;
}

string areaConhecimento::getAreaConhecimento()
{
    return nomeConhecimento;
}

void areaConhecimento::setAreaConhecimento(char const* nome)
{
    nomeConhecimento = nome;
}

void areaConhecimento::setIdAreaConhecimento(int identificador)
{
    idAc = identificador;
}

void areaConhecimento::getDadoNomes()
{
    cout << " Nenhuma informação sobre tal " << endl;
}
