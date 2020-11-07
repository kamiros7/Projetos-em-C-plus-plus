#ifndef LISTAALUNO_H_INCLUDED
#define LISTAALUNO_H_INCLUDED
#include "lista.h"
#include "elemento.h"
#include "alunos.h"

// funções de listagem não podem ser generalizadas
class listaAluno
{
private:
    char nomeDisciplina[150];
    int numeroAlunos;
    int contadorAlunos;
    Lista<Aluno> ListaTemplateAlunos;


public:

     //ponteiro para lista de elementos de aluno

    listaAluno();
    listaAluno(int numDeAlunos, char const* nomeDaDisciplina = " ");
    ~listaAluno();


    void setNomeDisciplina(char const* n); // função para receber o nome da disciplina, usada na setagem do nome em disciplina.cpp
    void setAlunoLista(Aluno* aluno);
    void listeAlunosProximo();
    void listeAlunosAnterior();
    void gravarAluno();
    void recuperarAluno();
    void limpaLista();

};

#endif // LISTAALUNO_H_INCLUDED
