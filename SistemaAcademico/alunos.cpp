#include "alunos.h"

Aluno::Aluno(int id)
{
   // univFiliado = NULL;
   bolsa = 0.0;
   RA = 0;
   idPessoa = id;
    Inicializa(0,0,0);

}

Aluno::Aluno(int dia, int mes, int ano, char const*  nome)
{
    bolsa = 0.0;
    RA = 0;
    Inicializa(dia, mes, ano, nome);
     //univFiliado = NULL;

}

Aluno::~Aluno()
{
   // univFiliado = NULL;
}

int Aluno::informaRA()
{
    return(RA);
}

int Aluno::getIdAluno()
{
    return idPessoa;
}

float Aluno::getBolsaAluno()
{
    return bolsa;
}

void Aluno::setBolsaAluno(float b)
{
    bolsa = b;
}

void Aluno::setRA(int ra)
{
    RA = ra;
}

void Aluno::setIdAluno(int id)
{
    idPessoa = id;
}

/*void Aluno::operator=(Aluno& aluno)
{
   operator RA = aluno.informaRA();
    operator idPessoa = aluno.getIdPessoa();
} */

void Aluno::getDados()
{
    cout << " Nome " << nomeP << " RA " << RA << endl;
}

ostream &operator<< (ostream& saida, Aluno& aluno)
{
    saida << " ID " << aluno.getIdPessoa() << " Nome " << aluno.informaNome() << " RA " << aluno.informaRA() << endl;
    return saida;
}

/*
char* Aluno::informaUniversidade()
{
    return(univFiliado->getNome());
}

void Aluno::setUniversidade(Universidade* pu)
{
    univFiliado = pu;
}

*/



