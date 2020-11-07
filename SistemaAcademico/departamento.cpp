#include "listaDisciplina.h"
#include "universidade.h"
#include "departamento.h"
#include "disciplina.h"



using namespace std;

Departamento::Departamento(int id)
{
    idDepartamento = id;
  pObjDisciplinas = new listaDisciplina(-1, " ");
}

Departamento::~Departamento()
{
    if(pObjDisciplinas)
    {
        delete pObjDisciplinas;
    }
}

void Departamento::setIdDepartamento(int id)
{
    idDepartamento = id;
}

void Departamento::setNomeDpto(char const* n)
{
    nome = n;
    pObjDisciplinas->setNomeDepartamento(n);
}

string Departamento::getNome()
{
    return(nome);
}

void Departamento::setUniversidade(Universidade* universidade)
{
    pUniversidade = universidade;
}

int Departamento::getIdDepartamento()
{
    return idDepartamento;
}


/*================================SOLUÇÃO PARA LISTA SIMPLESMENTE ENACDEADA=================================*/
void Departamento::setDisciplinasDepartamento(Disciplina* pd)
{
    pObjDisciplinas->setDisciplinasLista(pd);
}

void Departamento::listaDisciplinasProximo()
{
   pObjDisciplinas->listeDisciplinasProximo();
}

void Departamento::listaDisciplinasAnterior()
{
    pObjDisciplinas->listeDisciplinasAnterior();
}

