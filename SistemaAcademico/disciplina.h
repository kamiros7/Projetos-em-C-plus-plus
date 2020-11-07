#ifndef DISCIPLINA_H_INCLUDED
#define DISCIPLINA_H_INCLUDED

#include "listaAluno.h"
#include "departamento.h"
#include <fstream>

using namespace std;

class Disciplina
{
private:
    string areaConhecimento;
    int idDisciplina;
    Departamento* pDeptoAssociado;
    listaAluno ObjAlunos; // uma disciplina terá uma lista ( lista de chamada ) de alunos
                                    // cada campo dessa lista é um elemento do aluno mas não o próprio aluno
public:
    Disciplina(int id, int na = 45, char const* ac = " " ); // na sendo numero de alunos
    ~Disciplina();

    Departamento* getDepartamento();
    string getNomeDisciplina();
    int getIdDisciplina();
    void setIdDisciplina(int id);
    void setNomeDisciplina(char const* n);
    void setDepartamento(Departamento *departamento);


    void setAluno(Aluno *pAluno);
    void listeAluno1();
    void listeAluno2();
};

#endif // DISCIPLINA_H_INCLUDED
