#include "listaPessoa.h"

listaPessoa::listaPessoa()
{

}

listaPessoa::~listaPessoa()
{
    limpaLista();
}

void listaPessoa::setPessoaLista(Pessoa* pessoa)
{
    if(pessoa != NULL)
    {
        ListaTemplatePessoa.criaObjeto(pessoa);
    }
    else
    {
        cout << " Erro, pessoa não incluida, informação nula do objeto " << endl;
    }
}



void listaPessoa::listePessoaProximo()
{
    Pessoa* pAuxPessoa = NULL;
    elemento<Pessoa>* pAuxElemento = NULL;
    pAuxElemento = ListaTemplatePessoa.getListaPrimeiro();

    while(pAuxElemento != NULL)
    {
        pAuxPessoa = pAuxElemento->getInfo();
        cout << "ID "<< pAuxPessoa->getIdPessoa() << " Nome " << pAuxPessoa->informaNome()  << endl;
        pAuxElemento = pAuxElemento->getProximoElemento();

    }
}

void listaPessoa::listePessoaAnterior()
{
    Pessoa* pAuxPessoa = NULL;
    elemento<Pessoa>* pAuxElemento = NULL;
    pAuxElemento = ListaTemplatePessoa.getListaAtual();

    while(pAuxElemento != NULL)
    {
        pAuxPessoa = pAuxElemento->getInfo();
        cout << "ID "<< pAuxPessoa->getIdPessoa() << " Nome " << pAuxPessoa->informaNome()  << endl;
        pAuxElemento = pAuxElemento->getAnteriorElemento();
    }
}

void listaPessoa::gravarPessoa()
{
    ofstream GravacaoPessoas("pessoas.txt", ios::out);

    if(!GravacaoPessoas)
    {
        cerr<< " Arquivo não pode ser aberto " << endl;
        fflush(stdin);
        getchar();
        return;
    }

    Pessoa* pAuxPessoa;
    elemento<Pessoa>* pAuxElemento;
    pAuxElemento = ListaTemplatePessoa.getListaPrimeiro();

    while(pAuxElemento != NULL)
    {
        pAuxPessoa = pAuxElemento ->getInfo();
        GravacaoPessoas<< pAuxPessoa->getIdPessoa() << ' '  << pAuxPessoa->informaNome() <<endl;
        pAuxElemento = pAuxElemento->getProximoElemento();
    }

    cout << " Pessoas gravadas com sucesso " << endl;
    getchar();
    GravacaoPessoas.close();
}

void listaPessoa::recuperarPessoa()
{
        ifstream RecuperarPessoas("pessoas.txt", ios::out);

        if(!RecuperarPessoas)
        {
            cerr << " Arquivo não pode ser aberto " << endl;
            fflush(stdin);
            getchar();
            return;
        }

        limpaLista();

        Pessoa* pAuxPessoa = NULL;
        int id;
        char nome[150];

        while(RecuperarPessoas >> id >> nome )
        {
            if( 0 != strcmp(nome, " "))
            {
                pAuxPessoa = new Pessoa();
                pAuxPessoa->setIdPessoa(id);
                pAuxPessoa->setNomePessoa(nome);

                setPessoaLista(pAuxPessoa);
            }
        }
        cout << " Pessoas recuperadas com sucesso " << endl;
        getchar();
        RecuperarPessoas.close();
}

void listaPessoa::limpaLista()
{
    ListaTemplatePessoa.limpaLista();
}

//============================ FUNÇÃO QUE CONTÉM POLIMORFISMO ======================//
void listaPessoa::listeDados()
{
    elemento<Pessoa>* pElemento = NULL;
    Pessoa* pPessoa = NULL;
    pElemento = ListaTemplatePessoa.getListaPrimeiro();

    while(pElemento != NULL)
    {
        pPessoa = pElemento->getInfo();
        pPessoa->getDados();
        pElemento = pElemento->getProximoElemento();
    }
}


