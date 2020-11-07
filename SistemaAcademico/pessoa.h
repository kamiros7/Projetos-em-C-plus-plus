#ifndef PESSOA_H_INCLUDED
#define PESSOA_H_INCLUDED
#include <iostream>

#include "universidade.h"

class Pessoa
{
protected:
        int diaP;
        int mesP;
        int anoP;
        int idadeP;
        int idPessoa;
        string nomeP;

public:

    Pessoa(); // toda classe precisa de uma construtora sem parametros
    Pessoa( int dia, int mes, int ano, char const* nome = " "); // construtora da pessoa
    string informaNome();
    int informaIdade();
    int getIdPessoa();
    void setIdPessoa(int id);
    void setNomePessoa(char const*nome);
    void Inicializa(int dia =0, int mes =0, int ano= 0, char const* nome =" ");
    // void calcIdade( int diaAT, int mesAT, int anoAT);
    virtual void getDados();
};

#endif // PESSOA_H_INCLUDED
