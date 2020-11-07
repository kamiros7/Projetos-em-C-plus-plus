#ifndef AREACONHECIMENTO_H_INCLUDED
#define AREACONHECIMENTO_H_INCLUDED
#include <iostream>
#include <string.h>
#include <fstream>

using namespace std;

class areaConhecimento
{
protected: // serão protected as variaveis para que as classes derivadas possam usar as mesmas
    string nomeConhecimento;
    int idAc;
    // futuramente pensar em tratar id para areaConhecimento

public:
    areaConhecimento(int identificador = -1);
    ~areaConhecimento();

    int getIdAreaConhecimento();
    string getAreaConhecimento();
    void setAreaConhecimento(char const* nome = " ");
    void setIdAreaConhecimento(int identificador);
    virtual void getDadoNomes(); // informa nome do objeto das classes derivadas e area de conhecimento
};

#endif // AREACONHECIMENTO_H_INCLUDED
