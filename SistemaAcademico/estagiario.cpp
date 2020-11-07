#include "estagiario.h"

Estagiario::Estagiario(int id)
{
    idPessoa = id;
    bolsaProjeto = 0.0;
    Inicializa(0,0,0);
}

Estagiario::Estagiario(int dia, int mes, int ano, char const* nome)
{
    bolsaProjeto = 0.0;
    Inicializa(dia, mes, ano, nome);
}

Estagiario::~Estagiario()
{

}

float Estagiario::getBolsaEstagiario()
{
    return bolsaProjeto;
}

void Estagiario::getDados()
{
    cout << " Nome " << informaNome() << " Valor da bolsa " << getBolsaAluno() << endl;
}
