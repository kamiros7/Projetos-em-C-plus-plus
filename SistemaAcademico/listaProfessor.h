#ifndef LISTAPROFESSOR_H_INCLUDED
#define LISTAPROFESSOR_H_INCLUDED

#include "lista.h"
#include "elemento.h"
#include "professor.h"

class listaProfessor
{
private:
    char nomeDepartamento[150];
    Lista<Professor> ListaTemplateProfessor;

public:
    listaProfessor(char const* n= " ");
    ~listaProfessor();

    void setNomeDepartamento(char const* n);
    void setProfessorLista( Professor* professor);
    void listeProfessorProximo();
    void listeProfessorAnterior();
    void gravarProfessor();
    void recuperarProfessor();
    void getProventos();
    void limpaLista();
};


#endif // LISTAPROFESSOR_H_INCLUDED
