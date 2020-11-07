#ifndef DEPARTAMENTO_H_INCLUDED
#define DEPARTAMENTO_H_INCLUDED
#include <stdio.h>
#include <string.h>
#include <iostream>
#include <fstream>
#include <string>

using namespace std;


class Universidade;
class Disciplina;
class listaDisciplina;

class Departamento
{
private:
    string nome;
    int idDepartamento;
    Universidade* pUniversidade; // ponteira Universidade usado para assossiação ao departamento
    listaDisciplina* pObjDisciplinas; // ponteiro pois sendo obj normal, o compilador não executaria

 public:
    Departamento(int id );
    ~Departamento();
    void setNomeDpto(char const* n);
    void setIdDepartamento( int id);
    int getIdDepartamento();
    string getNome();

     //função que permite associar a univerisidade ao departamento
    void setUniversidade(Universidade* universidade);

    //funções que permitem associar a disciplina ao departamento
    void listaDisciplinasProximo();
    void listaDisciplinasAnterior();
    void setDisciplinasDepartamento(Disciplina* pd);
};


#endif // DEPARTAMENTO_H_INCLUDED
