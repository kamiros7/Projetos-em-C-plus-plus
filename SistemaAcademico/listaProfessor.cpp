#include "listaProfessor.h"

listaProfessor::listaProfessor(char const* n)
{
    strcpy(nomeDepartamento, n);
}

listaProfessor::~listaProfessor()
{
    limpaLista();
}

void listaProfessor::setNomeDepartamento(char const* n)
{
    strcpy(nomeDepartamento, n);
}

void listaProfessor::setProfessorLista(Professor* professor)
{
    if(professor != NULL)
    {
        ListaTemplateProfessor.criaObjeto(professor);
    }
    else
    {
        cout<< " Erro, professor não incluido, informação nula do objeto " << endl;
    }
}

void listaProfessor::listeProfessorProximo()
{
    Professor* pAuxProfessor;
    elemento<Professor>* pAuxElemento;
    pAuxElemento = ListaTemplateProfessor.getListaPrimeiro();

    while(pAuxElemento != NULL)
    {
        pAuxProfessor = pAuxElemento->getInfo();

        cout << " ID " << pAuxProfessor->getIdProfessor() << " Nome " << pAuxProfessor->informaNome() << " Salario " << pAuxProfessor->getSalario() << " Bolsa de projeto " << pAuxProfessor->getBolsaProjeto() << " Area de Conhecimento " << pAuxProfessor->getAreaConhecimento() << endl;
        pAuxElemento = pAuxElemento->getProximoElemento();
    }

}

void listaProfessor::listeProfessorAnterior()
{
    Professor* pAuxProfessor;
    elemento<Professor>* pAuxElemento;
    pAuxElemento = ListaTemplateProfessor.getListaAtual();

    while(pAuxElemento != NULL)
    {
        pAuxProfessor = pAuxElemento->getInfo();

        cout << " ID " << pAuxProfessor->getIdProfessor() << " Nome " << pAuxProfessor->informaNome() << " Salario " << pAuxProfessor->getSalario() << " Bolsa de projeto " << pAuxProfessor->getBolsaProjeto() << " Area de Conhecimento " << pAuxProfessor->getAreaConhecimento() << endl;
        pAuxElemento = pAuxElemento->getAnteriorElemento();
    }
}

void listaProfessor::gravarProfessor()
{
    ofstream GravacaoProfessores("professores.txt", ios::out);

    if(!GravacaoProfessores)
    {
        cerr << " Arquivo não pode ser aberto " << endl;
        fflush(stdin);
        getchar();
        return;
    }

    Professor* pAuxProfessor;
    elemento<Professor>* pAuxElemento;
    pAuxElemento = ListaTemplateProfessor.getListaPrimeiro();

    while(pAuxElemento != NULL)
    {
        pAuxProfessor = pAuxElemento->getInfo();
        GravacaoProfessores<< pAuxProfessor->getIdProfessor() << ' ' << pAuxProfessor->informaNome() << ' ' << pAuxProfessor->getSalario() << ' ' << pAuxProfessor->getBolsaProjeto() << ' ' << pAuxProfessor->getAreaConhecimento() << endl;
        pAuxElemento = pAuxElemento->getProximoElemento();
    }

    cout << "Professor gravado com sucesso " << endl;
    getchar();
    GravacaoProfessores.close();
}

void listaProfessor::recuperarProfessor()
{
    ifstream recuperarProfessores("professores.txt", ios::out );

    if(!recuperarProfessores)
    {
        cerr << " Arquivo não pode ser aberto " << endl;
        fflush(stdin);
        getchar();
        return;
    }
    limpaLista();

    Professor* pAuxProfessor = NULL;
    int id = -1;
    float salario = 0.0;
    float bolsaProjeto = 0.0;
    char nomeProfessor[150];
    char nomeAreaConhecimento[150];

    while(recuperarProfessores >> id >> nomeProfessor >> salario >> bolsaProjeto >> nomeAreaConhecimento)
    {

        if( 0 != strcmp(nomeProfessor, " "))
        {
            pAuxProfessor = new Professor(-1);
            pAuxProfessor->setIdProfessor(id);
            pAuxProfessor->setNomePessoa(nomeProfessor);
            pAuxProfessor->setSalario(salario);
            pAuxProfessor->setBolsaProjeto(bolsaProjeto);
            pAuxProfessor->setAreaConhecimento(nomeAreaConhecimento);

            setProfessorLista(pAuxProfessor);
        }
    }
    recuperarProfessores.close();
}


void listaProfessor::limpaLista()
{
    ListaTemplateProfessor.limpaLista();
}
