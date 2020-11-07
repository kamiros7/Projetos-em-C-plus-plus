#include "pessoa.h"
#include <string.h>
#include <iostream>

using namespace std;

/* “ :: “ significa pertencimento da função a devida classe  */

Pessoa::Pessoa( int dia, int mes, int ano, char const* nome)
{
    Inicializa(dia, mes, ano, nome);
}

Pessoa::Pessoa()
{
    Inicializa(0 ,0 ,0);
}

int Pessoa::getIdPessoa()
{
    return idPessoa;
}
int Pessoa::informaIdade()
{
     return(idadeP);
}

string Pessoa:: informaNome()
{
  return(nomeP);
}

void Pessoa::Inicializa(int dia, int mes, int ano, char const* nome)
{
   diaP = dia;
   mesP = mes;
   anoP = ano;
   nomeP = nome;
   idadeP = -1; // inicializando variavel para não ficar com valor aleatório
}

void Pessoa::setIdPessoa(int id)
{
    idPessoa = id;
}

void Pessoa::setNomePessoa(char const* nome)
{
    nomeP = nome;
}

/*
void Pessoa::calcIdade(int diaAT, int mesAT, int anoAT)
{
    if(mesP <= mesAT)
    {
        if(diaP <= diaAT)
        {
            idadeP = anoAT - anoP;
        }
        else
        {
            idadeP = anoAT - anoP - 1;
        }
    }
    else
    {
        idadeP = anoAT - anoP - 1;
    }
} */

void Pessoa::getDados()
{
    cout << "Nome " <<  nomeP << endl;
}
