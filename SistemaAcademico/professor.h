#ifndef PROFESSOR_H_INCLUDED
#define PROFESSOR_H_INCLUDED

#include "universidade.h"
#include <iostream>
#include "pessoa.h"
#include "areaConhecimento.h"

class Professor: public Pessoa, public areaConhecimento
{
private:
    // Os ponteiros para assossição ficam na herança pois Univ e Dpto são filiados ao professor e não à pessoa
    // referencia a o objeto universidade
    float salario;
    float bolsaProjeto;
    Universidade* univFiliado; // ponteiro Universidade que permite associar pessoa à universidade
    Departamento* dptoFiliado; // ponteiro Departamento que permite assossiar pessoa à departamento

public:
    Professor(int id = -1);
    Professor(int dia, int mes, int ano, char const* = " ");
    ~Professor();

    int getIdProfessor();
    float getBolsaProjeto();
    float getSalario();
    void setIdProfessor(int id);
    void setBolsaProjeto(float bolsa);
    void setSalario(float s);
    //Função Polimórfica entre Professor, Aluno, Estagiario e Pessoa
    void getDados();
    //Função Polimórfica entre Professor, Livro e AreaConhecimento
    void getDadoNomes();

    string informaUniversidade();
    string informaDepartamento();


        // essas funções permitem associar a universidade e departamento à professor
    void setDepartamento(Departamento* departamento);
    void setUniversidade(Universidade* pu);

};

#endif // PROFESSOR_H_INCLUDED
