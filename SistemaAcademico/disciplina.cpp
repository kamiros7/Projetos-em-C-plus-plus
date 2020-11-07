#include "disciplina.h"

Disciplina::Disciplina( int id, int na, char const* ac):
ObjAlunos( na, ac)
{
    idDisciplina = id;
    pDeptoAssociado = NULL;
    areaConhecimento = ac;
}

Disciplina::~Disciplina()
{
    pDeptoAssociado = NULL;
}

void Disciplina::setNomeDisciplina(char const* n)
{
    areaConhecimento = n;
    ObjAlunos.setNomeDisciplina(n);
}

int Disciplina::getIdDisciplina()
{
    return idDisciplina;
}

string Disciplina::getNomeDisciplina()
{
    return(areaConhecimento);
}

void Disciplina::setDepartamento(Departamento* pd)
{
     pDeptoAssociado = pd;
     pd->setDisciplinasDepartamento ( this );
}

 /*Departamento* Disciplina::getDepartamento()
{
    return( pDeptoAssociado);
} */

void Disciplina::setIdDisciplina(int id)
{
    idDisciplina = id;
}

void Disciplina::setAluno(Aluno* pAluno)
{
      ObjAlunos.setAlunoLista(pAluno);
}

void Disciplina::listeAluno1()
{
   ObjAlunos.listeAlunosProximo();
}

void Disciplina::listeAluno2()
{
    ObjAlunos.listeAlunosAnterior();
}
