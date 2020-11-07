#ifndef LISTADISCIPLINA_H_INCLUDED
#define LISTADISCIPLINA_H_INCLUDED
#include "disciplina.h"
#include "elemento.h"
#include "lista.h"

class listaDisciplina
{
private:
    int numeroDisciplinas;
    int contadorDisciplinas;
    char nomeDepartamento[150];
    Lista<Disciplina> ListaTemplateDisciplinas;


public:
    listaDisciplina(int numDisciplinas = 1000, char const* nome = " ");
    ~listaDisciplina();

    void setDisciplinasLista(Disciplina* disciplina);
    void setNomeDepartamento(char const* n); // para receber o nome de departamento, função usada na setagem do nome em departamento.cpp
    void listeDisciplinasProximo();
    void listeDisciplinasAnterior();
    void gravarDisciplinas();
    void recuperarDisciplinas();
    void limpaLista();
};

#endif // LISTADISCIPLINA_H_INCLUDED
