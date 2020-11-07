#ifndef LISTADEPARTAMENTO_H_INCLUDED
#define LISTADEPARTAMENTO_H_INCLUDED
#include "lista.h"
#include "elemento.h"
#include "departamento.h"

class listaDepartamento
{
private:
    int numeroDepartamentos;
    int contadorDepartamentos;
    char nomeUniversidade[150];
    Lista<Departamento> ListaTemplateDepartamento;

public:
    listaDepartamento(int numDep = 1000, char const* nome = "");
    ~listaDepartamento();

    void setNomeUniversidade(char const* n); // função para receber o nome de universidade, usada na setagem do nome universidade em unviersidade.cpp
    void setDepartamentoLista(Departamento* departamento);
    void listaDepartamentoProx();
    void listaDepartamentoAnt();
    void gravarDepartamentos();
    void recuperarDepartamento();
    void limpaLista();
    Departamento* localizar(char * n);
};

#endif // LISTADEPARTAMENTO_H_INCLUDED
