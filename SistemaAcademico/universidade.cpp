#include "universidade.h"


using namespace std;

Universidade::Universidade(int id):
    listaObjDepartamentos(-1, " ")
{
    idUniversidade = id;
    nomeUniversidade = " ";
   //VpDepto = NULL; // inicia o ponteiro de vector ?? se sim, como ??

}

Universidade::~Universidade()
{


}

int Universidade::getIdUniversidade()
{
    return idUniversidade;
}

bool Universidade::operator == (Universidade& universidade)
{
    if(nomeUniversidade == universidade.getNome())
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool Universidade::operator != (Universidade& universidade)
{
    if(nomeUniversidade > universidade.getNome() || nomeUniversidade < universidade.getNome()  )
    {
        return true;
    }
    else
    {
        return false;
    }
}

void Universidade::setIdUniversidade(int id)
{
    idUniversidade = id;
}

void Universidade::setNomeUniv(char const* n)
{
    nomeUniversidade = n;
    listaObjDepartamentos.setNomeUniversidade(n);
}

string Universidade::getNome()
{
    return(nomeUniversidade);
}

void Universidade::setDepartamentoUniversidade(Departamento* departamento)
{
    listaObjDepartamentos.setDepartamentoLista(departamento);
}

void Universidade::listaDepUniProx()
{
    listaObjDepartamentos.listaDepartamentoProx();
}

void Universidade::listaDepUniAnt()
{
        listaObjDepartamentos.listaDepartamentoAnt();
}
/*==========================SOLUÇÃO USANDO VETOR ESTATICO=========================================

void Universidade::setDepartamento(Departamento * departamento, int ctd) //ctd permite identificar qual departamento se trata
{
    depto[ctd] = departamento;
}*/

/*==========================SOLUÇÃO USANDO VECTOR==============================================
void Universidade::setDepartamento(Departamento* departamento)
{
    VpDepto.push_back(departamento);     // neste caso depto é um vector
}

void Universidade::imprimeDepartamentos()
{
    int i, tam;
    tam = (int) VpDepto.size();
    for(i=0;i<tam;i++)
    {
            cout << (VpDepto[i])->getNome() <<endl;
    }

}*/

/*==========================SOLUÇÃO USANDO LIST======================================================*/
/*
void Universidade::setDepartamento(Departamento* departamento)  // função de inserção de list é igual a função de inserção do vector
{
    LpDepto.push_back(departamento);
}

void Universidade::imprimeDepartamentos()
{
    Departamento* pDep = NULL;
    list<Departamento*>::iterator  iterador;

    for(iterador = LpDepto.begin() ; iterador != LpDepto.end() ; iterador++)
    {
        pDep = *iterador; // usa-se *iterador para acessar o conteúdo do ponteiro
        cout<< pDep->getNome() << endl;
    }
}
*/
