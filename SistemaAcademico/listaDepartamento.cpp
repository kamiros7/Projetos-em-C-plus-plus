#include "listaDepartamento.h"

listaDepartamento::listaDepartamento(int numDep, char const* nome)
{
    contadorDepartamentos = 0;
    numeroDepartamentos = numDep;
    strcpy(nomeUniversidade, nome);
}

listaDepartamento::~listaDepartamento()
{
  limpaLista();
}

void listaDepartamento::setNomeUniversidade(char const* n)
{
    strcpy(nomeUniversidade, n);
}

void listaDepartamento::setDepartamentoLista(Departamento* departamento)
{
   if(departamento != NULL)
   {
       ListaTemplateDepartamento.criaObjeto(departamento);
   }
   else
   {
       cout << "Erro, departamento não incluido, informação nula " << endl;
   }
}

void listaDepartamento::listaDepartamentoProx()
{
    Departamento* pAuxDepartamento;
    elemento<Departamento>* pAuxElemento;
    pAuxElemento = ListaTemplateDepartamento.getListaPrimeiro();

    while(pAuxElemento != NULL)
    {
        pAuxDepartamento = pAuxElemento->getInfo();
        cout << " ID "<<  pAuxDepartamento->getIdDepartamento() << " Nome " << pAuxDepartamento->getNome() << ' ' << nomeUniversidade << endl;
        pAuxElemento = pAuxElemento->getProximoElemento();
    }
}

void listaDepartamento::listaDepartamentoAnt()
{
    Departamento* pAuxDepartamento;
    elemento<Departamento>* pAuxElemento;
    pAuxElemento = ListaTemplateDepartamento.getListaAtual();

    while(pAuxElemento != NULL)
    {
        pAuxDepartamento = pAuxElemento->getInfo();
        cout << " ID "<<  pAuxDepartamento->getIdDepartamento() << " Nome " << pAuxDepartamento->getNome() << ' ' << nomeUniversidade << endl;
        pAuxElemento = pAuxElemento->getAnteriorElemento();

    }
}


void listaDepartamento::gravarDepartamentos(){

    ofstream GravacaoDepartamentos("departamentos.txt", ios::out);

    if(!GravacaoDepartamentos)
    {
         cerr << " Arquivo não pode ser aberto " << endl;
        fflush(stdin);
        getchar();
        return; // aqui retorna nada
    }
    Departamento* pAuxDepartamento;
    elemento<Departamento>* pAuxElementoDepartamento;
    pAuxElementoDepartamento = ListaTemplateDepartamento.getListaPrimeiro();

    while(pAuxElementoDepartamento != NULL)
    {
        pAuxDepartamento = pAuxElementoDepartamento->getInfo();

        GravacaoDepartamentos<< pAuxDepartamento->getIdDepartamento()<< ' ' << pAuxDepartamento->getNome() <<endl;
        pAuxElementoDepartamento = pAuxElementoDepartamento->getProximoElemento();
     }
      cout << " Departamento gravado com sucesso " << endl;
     getchar();
     GravacaoDepartamentos.close();
}


void listaDepartamento::recuperarDepartamento()
{
    ifstream recuperarDepartamentos("departamentos.txt", ios::out);
    if(!recuperarDepartamentos)
    {
        cerr<< " Arquivo não pode ser aberto " <<endl;
        fflush(stdin);
        getchar();
        return;
    }
     limpaLista();

      Departamento * pAuxDepartamento = NULL;
      int id;
      char nome[150];
    while(recuperarDepartamentos >> id >> nome)
    {
        if( 0 != strcmp(nome, ""))
        {
            pAuxDepartamento = new Departamento(-1);
            pAuxDepartamento->setIdDepartamento(id);
            pAuxDepartamento->setNomeDpto(nome);

            setDepartamentoLista(pAuxDepartamento);
        }
    }
    recuperarDepartamentos.close();
}


Departamento* listaDepartamento::localizar(char *n)
{
    Departamento* pAuxDepartamento;
    elemento<Departamento>* pAuxElemento;
    pAuxElemento = ListaTemplateDepartamento.getListaPrimeiro();

    while( pAuxElemento != NULL)
    {
        pAuxDepartamento = pAuxElemento->getInfo();
        if( (pAuxDepartamento->getNome() ) == n )
        {
            return pAuxDepartamento;
        }
        pAuxElemento = pAuxElemento->getProximoElemento();
    }
    return NULL;
}

void listaDepartamento::limpaLista()
{
    ListaTemplateDepartamento.limpaLista();
}
