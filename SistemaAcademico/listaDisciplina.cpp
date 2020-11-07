#include "listaDisciplina.h"

listaDisciplina::listaDisciplina(int numDisciplinas , char const* nome )
{
    numeroDisciplinas = numDisciplinas;
    contadorDisciplinas = 0;
    strcpy(nomeDepartamento, nome);

}

listaDisciplina::~listaDisciplina()
{
    limpaLista();
}

void listaDisciplina::setNomeDepartamento(char const* nome)
{
    strcpy(nomeDepartamento, nome);
}

void listaDisciplina::setDisciplinasLista(Disciplina* disciplina)
{
    if(disciplina != NULL)
    {
        ListaTemplateDisciplinas.criaObjeto(disciplina);
    }
    else
    {
        cout<< "Erro, disciplina não incluida. Informação nula " <<endl;
    }
}

void listaDisciplina::listeDisciplinasProximo()
{
    Disciplina* pDisciplina;
    elemento<Disciplina>* pAux;
    pAux = ListaTemplateDisciplinas.getListaPrimeiro();

    while(pAux != NULL)
    {
        pDisciplina = pAux->getInfo();
       cout<<  " ID  " << pDisciplina->getIdDisciplina() <<   " Nome " << pDisciplina->getNomeDisciplina() << " do Departamento " << nomeDepartamento << endl;
        pAux = pAux->getProximoElemento();
    }
    getchar();

}

void listaDisciplina::listeDisciplinasAnterior()
{
    Disciplina* pDisciplina;
    elemento<Disciplina>* pAux;
    pAux = ListaTemplateDisciplinas.getListaAtual();

    while(pAux != NULL)
    {
        pDisciplina = pAux->getInfo();
        cout<<  "ID  " << pDisciplina->getIdDisciplina() <<   "Nome " << pDisciplina->getNomeDisciplina() << " do Departamento " << nomeDepartamento << endl;
        pAux = pAux->getAnteriorElemento();
    }

}



void listaDisciplina::gravarDisciplinas()
{
    ofstream GravacaoDisciplina("disciplinas.txt", ios::out);

    if(!GravacaoDisciplina)
    {
        cerr << " Arquivo não pode ser aberto " << endl;
        fflush(stdin);
        getchar();
        return; // aqui retorna nada
    }

    elemento<Disciplina>* pAuxElDisciplina;
    pAuxElDisciplina = ListaTemplateDisciplinas.getListaPrimeiro();
    Disciplina* pAuxDisciplina;

    while(pAuxElDisciplina != NULL)
    {
        pAuxDisciplina = pAuxElDisciplina->getInfo();
        GravacaoDisciplina  << pAuxDisciplina->getIdDisciplina()  << pAuxDisciplina->getNomeDisciplina() << endl;
        pAuxElDisciplina = pAuxElDisciplina->getProximoElemento();
    }
     cout << " Disciplina gravada com sucesso " << endl;
    getchar();
    GravacaoDisciplina.close();
 }

void listaDisciplina::recuperarDisciplinas()
{
    ifstream recuperarDisciplinas("disciplinas.txt", ios::out);
    if(!recuperarDisciplinas)
    {
        cerr<< " Arquivo não pode ser aberto " <<endl;
        fflush(stdin);
        getchar();
        return;
    }
     limpaLista();

     Disciplina * pAuxDisciplina = NULL;
     int id;
     char nome[150];

    while(recuperarDisciplinas >> id >> nome)
    {
        if( 0 != strcmp(nome, ""))
        {
            pAuxDisciplina = new Disciplina( -1, 45, " ");
            pAuxDisciplina->setIdDisciplina(id);
            pAuxDisciplina->setNomeDisciplina(nome);

            setDisciplinasLista(pAuxDisciplina);
        }
    }
    recuperarDisciplinas.close();
}

void listaDisciplina::limpaLista()
{
    ListaTemplateDisciplinas.limpaLista();
}
