#include "listaAluno.h"
listaAluno::listaAluno(int numDeAlunos, char const* nomeDaDisciplina)
{
    contadorAlunos = 0;
    numeroAlunos =  numDeAlunos;
    strcpy(nomeDisciplina, nomeDaDisciplina);
}


listaAluno::listaAluno()
{
    numeroAlunos = 0;
    contadorAlunos = 0;
}

listaAluno::~listaAluno()
{
    limpaLista();
}

void listaAluno::setNomeDisciplina(char const* n)
{
    strcpy(nomeDisciplina, n);
}

void listaAluno::setAlunoLista(Aluno* aluno)
{
    if(aluno != NULL)
    {
        ListaTemplateAlunos.criaObjeto(aluno);
    }
    else
    {
        cout << " Erro, aluno não incluido, informação invalida " << endl;
    }


}

/*
void listaAluno::listeAlunosProximo()
{
    Aluno* pAuxAluno = NULL;
    elemento<Aluno>* pAuxElemento = NULL;
    pAuxElemento = ListaTemplateAlunos.getListaPrimeiro();

    while(pAuxElemento != NULL)
    {
        pAuxAluno = pAuxElemento->getInfo();
        cout << "ID "<< pAuxAluno->getIdPessoa() << " Nome " << pAuxAluno->informaNome() << " RA " << pAuxAluno->informaRA() << " matriculado na disciplina "<< nomeDisciplina<< endl;
        pAuxElemento = pAuxElemento->getProximoElemento();

    }
} */

void listaAluno::listeAlunosProximo()
{
    Aluno* pAuxAluno = NULL;
    elemento<Aluno>* pAuxElemento = NULL;
    pAuxElemento = ListaTemplateAlunos.getListaPrimeiro();

    while(pAuxElemento != NULL)
    {
        pAuxAluno = pAuxElemento->getInfo();
        cout << *pAuxAluno << endl;
        pAuxElemento = pAuxElemento->getProximoElemento();

    }
}

void listaAluno::listeAlunosAnterior()
{
    Aluno* pAuxAluno= NULL;
     elemento<Aluno>* pAuxElemento = NULL;
    pAuxElemento = ListaTemplateAlunos.getListaAtual();

    while(pAuxElemento != NULL)
    {
        pAuxAluno = pAuxElemento->getInfo();
         cout << "ID "<< pAuxAluno->getIdPessoa() << " Nome " << pAuxAluno->informaNome() << " RA " << pAuxAluno->informaRA() << " matriculado na disciplina "<< nomeDisciplina<< endl;
        pAuxElemento = pAuxElemento->getAnteriorElemento();
    }
}


void listaAluno::gravarAluno()
{
    ofstream GravacaoAlunos("alunos.txt", ios::out);

    if(!GravacaoAlunos)
    {
        cerr << " Arquivo não pode ser aberto " << endl;
        fflush(stdin);
        getchar();
        return; // aqui retorna nada
    }

    Aluno* pAuxAluno = NULL;
    elemento<Aluno>* pAuxElAluno = NULL;
    pAuxElAluno = ListaTemplateAlunos.getListaPrimeiro();

    while(pAuxElAluno != NULL)
    {
        pAuxAluno = pAuxElAluno->getInfo();

        GravacaoAlunos<< pAuxAluno->getIdPessoa() << ' ' << pAuxAluno->informaRA() << ' ' << pAuxAluno->informaNome() <<endl;
        pAuxElAluno = pAuxElAluno->getProximoElemento();
    }

    GravacaoAlunos.close();
    cout << " Aluno gravado com sucesso " << endl;
    getchar();
}

void listaAluno::recuperarAluno()
{
    ifstream RecuperarAlunos("alunos.txt", ios::out);
    if(!RecuperarAlunos)
    {
        cerr<< " Arquivo não pode ser aberto " <<endl;
        fflush(stdin);
        getchar();
        return;
    }
    limpaLista();

        Aluno * pAuxAluno = NULL;
        int id;
        int RA;
        char nome[150];

    while( RecuperarAlunos >> id >> RA >> nome )
    {
        if( 0 != strcmp(nome, ""))
        {
            pAuxAluno = new Aluno(-1);
            pAuxAluno->setIdAluno(id);
            pAuxAluno->setRA(RA);
            pAuxAluno->setNomePessoa(nome);

            setAlunoLista(pAuxAluno);
        }
    }
    RecuperarAlunos.close();
}

void listaAluno::limpaLista()
{
    ListaTemplateAlunos.limpaLista();
}
