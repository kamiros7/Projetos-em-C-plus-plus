#ifndef ALUNOS_H_INCLUDED
#define ALUNOS_H_INCLUDED
#include "departamento.h"
#include "pessoa.h"
#include <fstream>

using namespace std;

class Aluno : public Pessoa
{
private:
    int RA;
    float bolsa;
    //Universidade* univFiliado;  //aluno não se relaciona mais com departamento

public:
    Aluno(int id = -1);
    Aluno(int dia, int mes, int ano, char const* nome = " ");
    ~Aluno();

    int informaRA();
    int getIdAluno();
    float getBolsaAluno();
    void setBolsaAluno(float b);
    void setRA(int ra);
    void setIdAluno(int id);
    void operator = (Aluno& aluno); // Função sobrecarga de operador
    virtual void getDados();
    //char* informaUniversidade();



     // essas funções permitem associar a universidade à aluno
      // void setUniversidade(Universidade* pu);

};
ostream& operator <<(ostream& saida, Aluno& aluno); // sobrecarga de operador

#endif // ALUNOS_H_INCLUDED
