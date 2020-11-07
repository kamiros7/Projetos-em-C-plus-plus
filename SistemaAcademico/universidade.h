#ifndef UNIVERSIDADE_H_INCLUDED
#define UNIVERSIDADE_H_INCLUDED

//#include <vector>
#include <list>
#include "listaDepartamento.h"
#include <fstream>


using namespace std;

class Universidade
{
private:
    string nomeUniversidade;
    listaDepartamento listaObjDepartamentos;
    int idUniversidade;

    //vector<Departamento*> VpDepto;
    //Departamento* depto[50];
    //list<Departamento*>LpDepto;

public:

    Universidade(int id = -1);
    ~Universidade();

    //void imprimeDepartamentos();
    bool operator == (Universidade& universidade); // sobrecarga do operador
    bool operator != (Universidade &universidade);
    int getIdUniversidade();
    string getNome();
    void setIdUniversidade( int id);
    void setNomeUniv(char const* n); // inicializa nome da Universidade
    void setDepartamentoUniversidade(Departamento* departamento);
    void listaDepUniProx();
    void listaDepUniAnt();

    //função que permite associar departamento com universidade
    //void setDepartamento(Departamento * departamento,int ctd);
   // void setDepartamento(Departamento * departamento); // Função Fica identica para vector, uso da posição do "vetor" é implicita

};


#endif // UNIVERSIDADE_H_INCLUDED
