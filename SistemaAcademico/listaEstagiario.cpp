#include "listaEstagiario.h"

listaEstagiario::listaEstagiario()
{

}

listaEstagiario::~listaEstagiario()
{
    limpaLista();
}

void listaEstagiario::setEstagiarioLista(Estagiario* estagiario)
{
    if(estagiario != NULL)
    {
        ListaTemplateEstagiario.criaObjeto(estagiario);
    }
    else
    {
        cout << " Erro, Estagiario não incluido, informação nula do objeto " << endl;
    }
}

void listaEstagiario::listeEstagiarioProximo()
{
    Estagiario* pAuxEstagiario;
    elemento<Estagiario>* pAuxElemento;
    pAuxElemento = ListaTemplateEstagiario.getListaPrimeiro();

    while(pAuxElemento != NULL)
    {
        pAuxEstagiario = pAuxElemento->getInfo();
        cout << " ID " << pAuxEstagiario->getIdPessoa() << " Nome " << pAuxEstagiario->informaNome() << " Valor da Bolsa " << pAuxEstagiario->getBolsaAluno() << endl;
        pAuxElemento = pAuxElemento->getProximoElemento();
    }
}

void listaEstagiario::listeEstagiarioAnterior()
{
    Estagiario* pAuxEstagiario;
    elemento<Estagiario>* pAuxElemento;
    pAuxElemento = ListaTemplateEstagiario.getListaAtual();

    while(pAuxElemento != NULL)
    {
        pAuxEstagiario = pAuxElemento->getInfo();
        cout << " ID " << pAuxEstagiario->getIdPessoa() << " Nome " << pAuxEstagiario->informaNome() << " Valor da Bolsa " << pAuxEstagiario->getBolsaAluno() << endl;
        pAuxElemento = pAuxElemento->getAnteriorElemento();
    }
}

void listaEstagiario::gravarEstagiario()
{
    ofstream GravacaoEstagiarios("estagiarios.txt", ios::out);

    if(!GravacaoEstagiarios)
    {
        cerr << " Arquivo não pode ser aberto " << endl;
        fflush(stdin);
        getchar();
        return; // aqui retorna nada
    }

    Estagiario* pAuxEstagiario;
    elemento<Estagiario>* pAuxElemento;
    pAuxElemento = ListaTemplateEstagiario.getListaPrimeiro();

   while(pAuxElemento != NULL)
   {
       pAuxEstagiario = pAuxElemento->getInfo();
       GravacaoEstagiarios << pAuxEstagiario->getIdPessoa() << ' ' << pAuxEstagiario->informaNome() << ' ' << pAuxEstagiario->getBolsaAluno() << endl;
       pAuxElemento = pAuxElemento->getProximoElemento();
   }
   cout<< " Estagiario gravado com sucesso " << endl;
   getchar();
   GravacaoEstagiarios.close();

}

void listaEstagiario::recuperarEstagiario()
{
    ifstream RecuperarEstagiarios("estagiarios.txt", ios::out);

    if(!RecuperarEstagiarios)
    {
        cerr<< " Arquivo não pode ser aberto " <<endl;
        fflush(stdin);
        getchar();
        return;
    }
    limpaLista();

    Estagiario* pAuxEstagiario = NULL;
    int id = -1;
    float bolsa = 0.0;
    char nome[150];

    while( RecuperarEstagiarios >> id >> nome >> bolsa)
    {
        if( 0 != strcmp(nome, " "))
        {
            pAuxEstagiario = new Estagiario(-1);
            pAuxEstagiario->setIdPessoa(id);
            pAuxEstagiario->setNomePessoa(nome);
            pAuxEstagiario->setBolsaAluno(bolsa);

            setEstagiarioLista(pAuxEstagiario);
        }
    }

    RecuperarEstagiarios.close();
}

void listaEstagiario::limpaLista()
{
    ListaTemplateEstagiario.limpaLista();
}
