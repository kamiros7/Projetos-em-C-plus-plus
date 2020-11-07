#ifndef ESTAGIARIO_H_INCLUDED
#define ESTAGIARIO_H_INCLUDED

#include "alunos.h"

class Estagiario : public Aluno
{
private:
    float bolsaProjeto;
    int idEstagiario;

public:
    //LEMBRAR QUE UMA CLASSE DERIVADA DE HERANÇA, SER IDENTICA NA CONSTRUÇÃO DOS PARAMETROS
    //PARA FUNÇÕES CONSTRUTORAS E DESTRUTORAS
    Estagiario(int id = -1);
    Estagiario(int dia, int mes, int ano, char const* nome = " ");
    ~Estagiario();

    float getBolsaEstagiario();
    void getDados();
};


#endif // ESTAGIARIO_H_INCLUDED
