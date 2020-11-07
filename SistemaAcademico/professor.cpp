#include "professor.h"

Professor::Professor(int id)
{
   salario = 0;
   bolsaProjeto = 0;
   idPessoa = id;
    univFiliado = NULL;
    dptoFiliado = NULL;
}

Professor::Professor(int dia, int mes, int ano, char const* nome)
{
    salario = 0;
    bolsaProjeto = 0;
    Inicializa(dia, mes, ano, nome);
    univFiliado = NULL;
    dptoFiliado = NULL;
}

Professor::~Professor()
{

}

int Professor::getIdProfessor()
{
    return idPessoa;
}

void Professor::setIdProfessor(int id)
{
    idPessoa = id;
}

float Professor::getSalario()
{
    return salario;
}

void Professor::setSalario(float s)
{
    salario = s;
}

float Professor::getBolsaProjeto()
{
    return bolsaProjeto;
}

void Professor::setBolsaProjeto(float bolsa)
{
    bolsaProjeto = bolsa;
}

void Professor::getDados()
{
    cout << " Nome " << informaNome() << " Salario " << getSalario() << " Valor da Bolsa " << getBolsaProjeto() << endl;
}

void Professor::getDadoNomes()
{
    cout << " Nome " << informaNome() << " Area de Conhecimento " << getAreaConhecimento() << endl;
}

void Professor::setDepartamento(Departamento* departamento)
{
    dptoFiliado = departamento;
}

void Professor::setUniversidade(Universidade* pu)

{
    univFiliado = pu;
}

string Professor::informaUniversidade()
{
    return(univFiliado->getNome());
}

string Professor::informaDepartamento()
{
    return(dptoFiliado->getNome());
}




