#include "listaLivro.h"

listaLivro::listaLivro()
{

}

listaLivro::~listaLivro()
{

}

void listaLivro::setLivroLista(Livro* livro)
{
    if(livro != NULL)
    {
        ListaTemplateLivro.criaObjeto(livro);
    }
    else
    {
        cout << " Erro, livro não incluido, informação do objeto é nula " << endl;
    }
}

void listaLivro::listeLivroProximo()
{
    Livro* pAuxLivro = NULL;
    elemento<Livro>* pAuxElemento = NULL;
    pAuxElemento = ListaTemplateLivro.getListaPrimeiro();

    while(pAuxElemento != NULL)
    {
        pAuxLivro = pAuxElemento->getInfo();
        cout << " ID " << pAuxLivro->getIdAreaConhecimento() << " Nome " << pAuxLivro->getNomeLivro() << " Area de Conheicmento " << pAuxLivro->getAreaConhecimento() << endl;
        pAuxElemento = pAuxElemento->getProximoElemento();
    }
}

void listaLivro::listeLivroAnterior()
{
    Livro* pAuxLivro = NULL;
    elemento<Livro>* pAuxElemento = NULL;
    pAuxElemento = ListaTemplateLivro.getListaAtual();

    while(pAuxElemento != NULL)
    {
        pAuxLivro = pAuxElemento->getInfo();
        cout << " ID " << pAuxLivro->getIdAreaConhecimento() << " Nome " << pAuxLivro->getNomeLivro() << " Area de Conheicmento " << pAuxLivro->getAreaConhecimento() << endl;
        pAuxElemento = pAuxElemento->getAnteriorElemento();
    }
}

void listaLivro::gravarLivro()
{
    ofstream GravacaoLivros("livros.txt", ios::out);

    if(!GravacaoLivros)
    {
        cerr << " Arquivo não pode ser aberto " << endl;
        fflush(stdin);
        getchar();
        return; // aqui retorna nada
    }

    Livro* pAuxLivro = NULL;
    elemento<Livro>* pAuxElemento = NULL;
    pAuxElemento = ListaTemplateLivro.getListaPrimeiro();

    while(pAuxElemento != NULL)
    {
        pAuxLivro = pAuxElemento->getInfo();

        GravacaoLivros<< pAuxLivro->getIdAreaConhecimento() << ' ' << pAuxLivro->getNomeLivro() << ' ' << pAuxLivro->getAreaConhecimento() << endl;
        pAuxElemento = pAuxElemento->getProximoElemento();
    }

    cout << " Livro gravado com sucesso " << endl;
    getchar();
    GravacaoLivros.close();
}

void listaLivro::recuperarLivro()
{
    ifstream RecuperarLivros("livros.txt", ios::out);

    if(!RecuperarLivros)
    {
        cerr<< " Arquivo não pode ser aberto " <<endl;
        fflush(stdin);
        getchar();
        return;
    }

    limpaLista();

    Livro* pAuxLivro = NULL;
    int id;
    char nomeLivro[150];
    char nomeAreaConhecimento[150];

    while(RecuperarLivros >> id >> nomeLivro >> nomeAreaConhecimento)
    {
        if(0 != strcmp(nomeLivro, " "))
        {
            pAuxLivro = new Livro(-1);
            pAuxLivro->setIdAreaConhecimento(id);
            pAuxLivro->setNomeLivro(nomeLivro);
            pAuxLivro->setAreaConhecimento(nomeAreaConhecimento);

            setLivroLista(pAuxLivro);
        }
    }
    RecuperarLivros.close();
}

void listaLivro::limpaLista()
{
    ListaTemplateLivro.limpaLista();
}
