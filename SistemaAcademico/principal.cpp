#include "principal.h"


using namespace std;

Principal::Principal():
    contadorIdAlunos(0),
    contadorIdProfessor(0),
    contadorIdEstagiario(0),
    contadorIdLivros(0),
    contadorIdDisciplinas(0),
    contadorIdDepartamentos(0),
    contadorIdUniversidades(0),


    Camilo(0),
    Lucas(1),
    Victor(2),
    Gabrielle(3),

    Einstein(0),
    Newton(1),
    Mineto(2),

    Joao(0),
    Luciano(1),
    Gustavo(2),

    Halliday(0),
    Sakidu(1),
    Moyses(2),

    tecProg(0),
    calculo3(1),
    ED1(2),
    fisica2(3),
    eletricidade(4),

    UTFPR(0),
    UFPR(1),
    Princeton(2),
    Cambridge(3),

    DAINF(0),
    DAELN(1),
    Fisica(2),
    Matematica(3)

{
    contadorIdUniversidades = 4;
    contadorIdDepartamentos = 4;
    contadorIdDisciplinas = 5;
    contadorIdAlunos = 4;
    contadorIdProfessor = 3;
    contadorIdEstagiario = 3;
    contadorIdLivros = 3;

    Inicializa();

}

Principal::~Principal()
{
}

void Principal::Executar()
{
     Menu();

    /*
    printf("\n\n");
    listeDisciplinasDosDepartamentos();
    listeAlunosDasDisciplinas();
    listeDepartamentosDaUniversidade();
    */
}

void Principal::Inicializa()
{
    InicializaUniversidade();
    InicializaDepartamento();
    InicializaDisciplina();
    InicializaProfessor();
    InicializaAluno();
    InicializaEstagiario();
    InicializaLivro();
    Executar();
}

void Principal::InicializaAluno()
{
    Pessoa* pPessoa = NULL;
    Aluno* pAluno = NULL;

     //Inicializa Aunos
    Camilo.setNomePessoa("Camilo");
    Camilo.setRA(2063166);
    LAluno.setAlunoLista(&Camilo);
    pAluno = &Camilo;
    pPessoa = static_cast <Pessoa*> (pAluno);
    LPessoa.setPessoaLista(pPessoa);

    Lucas.setNomePessoa("Lucas ");
    Lucas.setRA(1996762);
    LAluno.setAlunoLista(&Lucas);
    pAluno = &Lucas;
    pPessoa = static_cast <Pessoa*> (pAluno);
    LPessoa.setPessoaLista(pPessoa);

    Victor.setNomePessoa("Victor");
    Victor.setRA(2190907);
    LAluno.setAlunoLista(&Victor);
    pAluno = &Victor;
    pPessoa = static_cast <Pessoa*> (pAluno);
    LPessoa.setPessoaLista(pPessoa);

    Gabrielle.setNomePessoa("Gabrielle");
    Gabrielle.setRA(2178654);
    LAluno.setAlunoLista(&Gabrielle);
    pAluno = &Gabrielle;
    pPessoa = static_cast <Pessoa*> (pAluno);
    LPessoa.setPessoaLista(pPessoa);

    //associação do objeto aluno com o objeto universidade
  /*  Camilo.setUniversidade(&UTFPR);
    Lucas.setUniversidade(&UTFPR);
    Victor.setUniversidade(&UTFPR);
    Gabrielle.setUniversidade(&UFPR); */


}

void Principal::InicializaProfessor()
{
    Pessoa* pPessoa = NULL;
    Professor* pProfessor = NULL;
    areaConhecimento* pAc = NULL;

    //Inicializa professores
    Einstein.setNomePessoa("Einsten");
    Einstein.setSalario(15000);
    Einstein.setAreaConhecimento("Fisica_Moderna");
    LProfessor.setProfessorLista(&Einstein);
    pProfessor = &Einstein;
    pPessoa = static_cast <Pessoa*> (pProfessor);
    LPessoa.setPessoaLista(pPessoa);
    pAc = static_cast<areaConhecimento*> ( pProfessor);
    LAreaConhecimento.setAreaConhecimentoLista(pAc);


    Newton.setNomePessoa("Newton");
    Newton.setSalario(20500);
    Newton.setAreaConhecimento("Fisica_Classica");
    LProfessor.setProfessorLista(&Newton);
    pProfessor = &Newton;
    pPessoa = static_cast <Pessoa*> (pProfessor);
    LPessoa.setPessoaLista(pPessoa);
    pAc = static_cast<areaConhecimento*> ( pProfessor);
    LAreaConhecimento.setAreaConhecimentoLista(pAc);


    Mineto.setNomePessoa("Mineto");
    Mineto.setSalario(8750);
    Mineto.setBolsaProjeto(2500);
    Mineto.setAreaConhecimento("Criptografia");
    LProfessor.setProfessorLista(&Mineto);
    pProfessor = &Mineto;
    pPessoa = static_cast <Pessoa*> (pProfessor);
    LPessoa.setPessoaLista(pPessoa);
    pAc = static_cast<areaConhecimento*> ( pProfessor);
    LAreaConhecimento.setAreaConhecimentoLista(pAc);


    //assosiação do objeto professor com o objeto  universidade
    Einstein.setUniversidade(&Princeton);
    Newton.setUniversidade(&Cambridge);
    Mineto.setUniversidade(&UTFPR);

    //associação ao departamento
    Einstein.setDepartamento(&Fisica);
    Newton.setDepartamento(&Matematica);
    Mineto.setDepartamento(&DAINF);

}

void Principal::InicializaEstagiario()
{
    Pessoa* pPessoa = NULL;
    Aluno* pAluno = NULL;
    Estagiario * pEstagiario = NULL;
    //=======================
    Joao.setNomePessoa("Joao");
    Joao.setBolsaAluno(450);
    LEstagiario.setEstagiarioLista(&Joao);
    pEstagiario = &Joao;

    pAluno = static_cast <Aluno*> (pEstagiario);
    LAluno.setAlunoLista(pAluno);

    pPessoa = static_cast<Pessoa*> (pEstagiario);
    LPessoa.setPessoaLista(pPessoa);

    //======================
    Luciano.setNomePessoa("Luciano");
    Luciano.setBolsaAluno(450);
    LEstagiario.setEstagiarioLista(&Luciano);
    pEstagiario = &Luciano;

    pAluno = static_cast <Aluno*> (pEstagiario);
    LAluno.setAlunoLista(pAluno);

    pPessoa = static_cast<Pessoa*> (pEstagiario);
    LPessoa.setPessoaLista(pPessoa);

    //===============================
    Gustavo.setNomePessoa("Gustavo");
    Gustavo.setBolsaAluno(450);
    LEstagiario.setEstagiarioLista(&Gustavo);
    pEstagiario = &Gustavo;

    pAluno = static_cast <Aluno*> (pEstagiario);
    LAluno.setAlunoLista(pAluno);

    pPessoa = static_cast<Pessoa*> (pEstagiario);
    LPessoa.setPessoaLista(pPessoa);

    // talvez relacionar estagiario à empresa ou departamento que trabalha ( como IC )
}

void Principal::InicializaLivro()
{
    Livro* pLivro = NULL;
    areaConhecimento* pAc = NULL;

    Halliday.setNomeLivro("Halliday");
    Halliday.setAreaConhecimento("Fisica_Teorica");
    LLivrro.setLivroLista(&Halliday);
    pLivro = &Halliday;
    pAc = static_cast<areaConhecimento*> ( pLivro);
    LAreaConhecimento.setAreaConhecimentoLista(pAc);

    Sakidu.setNomeLivro("Sakidu");
    Sakidu.setAreaConhecimento("Circuitos_Eletricos");
     LLivrro.setLivroLista(&Sakidu);
    pLivro = &Sakidu;
    pAc = static_cast<areaConhecimento*> ( pLivro);
    LAreaConhecimento.setAreaConhecimentoLista(pAc);


    Moyses.setNomeLivro("Moyses");
    Moyses.setAreaConhecimento("Fisica_Teorica");
    LLivrro.setLivroLista(&Moyses);
    pLivro = &Moyses;
    pAc = static_cast<areaConhecimento*> ( pLivro);
    LAreaConhecimento.setAreaConhecimentoLista(pAc);
}

void Principal::InicializaDepartamento()
{
    //registro dos nomes dos departamentos
    DAINF.setNomeDpto("DAINF");
    DAELN.setNomeDpto("DAELN");
    Fisica.setNomeDpto("Fisica");
    Matematica.setNomeDpto("Matematica");

    LDepartamento.setDepartamentoLista(&DAINF);
    LDepartamento.setDepartamentoLista(&DAELN);
    LDepartamento.setDepartamentoLista(&Fisica);
    LDepartamento.setDepartamentoLista(&Matematica);

    // Agregação do departamento à Universidade
    UTFPR.setDepartamentoUniversidade(&DAELN);
    UTFPR.setDepartamentoUniversidade(&DAINF);

    UFPR.setDepartamentoUniversidade(&Fisica);
    UFPR.setDepartamentoUniversidade(&Matematica);

    Cambridge.setDepartamentoUniversidade(&Fisica);
    Cambridge.setDepartamentoUniversidade(&Matematica);

    Princeton.setDepartamentoUniversidade(&Fisica);
    Princeton.setDepartamentoUniversidade(&Matematica);

        //assossiação à universidade
    //DAELN.setUniversidade(&UTFPR);
    //DAINF.setUniversidade(&UTFPR);
    //Fisica.setUniversidade(&Princeton);
    //Matematica.setUniversidade(&Cambridge);
}

void Principal::InicializaUniversidade()
{
      //registro dos nomes da faculdade
    UTFPR.setNomeUniv("UTFPR");
    LUniversidade.setUniversidade(&UTFPR);

    UFPR.setNomeUniv("UFPR");
    LUniversidade.setUniversidade(&UFPR);

    Princeton.setNomeUniv("Princeton");
    LUniversidade.setUniversidade(&Princeton);

    Cambridge.setNomeUniv("Cambridge");
    LUniversidade.setUniversidade(&Cambridge);


     // assosiação/agregação do dpto à universidade
 /*   UTFPR.setDepartamentoUniversidade(&DAELN);  // não indicar mais a posição do vetor nos parametros pois está usando vector// lista
    UTFPR.setDepartamentoUniversidade(&DAINF);
    UFPR.setDepartamentoUniversidade(&Matematica);
    UFPR.setDepartamentoUniversidade(&Fisica);
    Princeton.setDepartamentoUniversidade(&Fisica);
    Cambridge.setDepartamentoUniversidade(&Matematica); */
}

void Principal::InicializaDisciplina()
{
    tecProg.setNomeDisciplina(" TecProg");
    calculo3.setNomeDisciplina(" Calculo_3");
    ED1.setNomeDisciplina(" ED_1 ");
    fisica2.setNomeDisciplina(" Fisica_2");
    eletricidade.setNomeDisciplina(" Eletricidade");

    LDisciplina.setDisciplinasLista(&tecProg);
    LDisciplina.setDisciplinasLista(&calculo3);
    LDisciplina.setDisciplinasLista(&ED1);
    LDisciplina.setDisciplinasLista(&fisica2);
    LDisciplina.setDisciplinasLista(&eletricidade);

   // VERSÃO COM LISTA SIMPLESMENTE ENCADEADA
   //esse algoritimo ele associa departamento à disciplina juntamente associando disciplia à departamento

   DAINF.setDisciplinasDepartamento(&tecProg);
   DAINF.setDisciplinasDepartamento(&ED1);
   Fisica.setDisciplinasDepartamento(&fisica2);
   Matematica.setDisciplinasDepartamento(&calculo3);
   DAELN.setDisciplinasDepartamento(&eletricidade);

    /* calculo3.setDepartamento(&Matematica);
    tecProg.setDepartamento(&DAINF);
    ED1.setDepartamento(&DAINF);
    fisica2.setDepartamento(&Fisica);
    eletricidade.setDepartamento(&DAELN); */


    //funções serão usadas para lista de alunos
    tecProg.setAluno(&Camilo);
    tecProg.setAluno(&Victor);
    tecProg.setAluno(&Gabrielle);

    calculo3.setAluno(&Lucas);
    calculo3.setAluno(&Victor);
    calculo3.setAluno(&Camilo);

}
/*
void Principal::listeDisciplinasDosDepartamentos()
{
    DAINF.listaDisciplinasProximo();
    printf("\n\n");
    Matematica.listaDisciplinasProximo();
    printf("\n\n");
    Fisica.listaDisciplinasProximo();
    printf("\n\n");
    DAELN.listaDisciplinasProximo();
    printf("\n\n");
}

void Principal::listeAlunosDasDisciplinas()
{
    calculo3.listeAluno1();
    printf("\n\n");
    tecProg.listeAluno1();
    printf("\n\n");
}

void Principal::listeDepartamentosDaUniversidade()
{
    UTFPR.listaDepUniAnt();
    printf("\n\n");
    UFPR.listaDepUniProx();
    printf("\n\n");
    Princeton.listaDepUniProx();
    printf("\n\n");
    Cambridge.listaDepUniProx();
    printf("\n\n");
}
*/
//======================================= FUNÇÔES MENU ===========================================//

void Principal::Menu()
{
    int operacao = -1;

    while(operacao!= 5)
    {
        system("cls");
        cout<< " Informe sua opção : " <<endl;
        cout << " 1 - Cadastrar.        " <<endl;
        cout << " 2 - Executar.        " <<endl;
        cout << " 3 - Gravar             "<<endl;
        cout << " 4 - Recuperar ." <<endl;
        cout << " 5 - Sair.                   " <<endl;
        cin >> operacao;

        switch(operacao)
        {
            case 1:{MenuCadastro();   }
                break;

            case 2:{MenuExecutar();   }
                break;

            case 3:{MenuGravar(); }
                break;

             case 4:{MenuRecuperar();  }
                break;

            case 5:{ cout << "FIM " << endl; }
                break;

            default: {  cout << "Opcao invalida, digite novamente. " << endl;
                        getchar();
                        }

        }
    }
}

void Principal::MenuRecuperar()
{
    int operacao = -1;

    while(operacao != 10)
    {
        system("cls");
        cout << " Informe sua opcao : " <<endl;
        cout << " 1 - Recuperar Aluno. " <<endl;
        cout << " 2 - Recuperar Professor. " <<endl;
        cout << " 3 - Recuperar Estagiarios " << endl;
        cout << " 4 - Recuperar Pessoas. " << endl;
        cout << " 5 - Recuperar Livros. " << endl;
        cout << " 6 - Recuperar Disciplina. " <<endl;
        cout << " 7 - Recuperar Departamento " <<endl;
        cout << " 8 - Recuperar Universidade " <<endl;
        cout << " 9 - Recuperar Tudo " << endl;
        cout << " 10 - Sair, " << endl;
        cin>> operacao;

        switch(operacao)
        {
            case 1: {recuperarAluno(); }
                break;

            case 2:{recuperarProfessor();  }
                break;

            case 3:{recuperarEstagiario(); }
                break;

            case 4:{recuperarPessoa(); }
                break;

            case 5:{recuperarLivro(); }
                break;

            case 6: {recuperarDisciplina(); }
                break;

            case 7: { recuperarDepartamento(); }
                break;

            case 8 : {recuperarUniversidade(); }
                break;

              case 9: {recuperarTudo();  }
                break;

            case 10 : { cout<< " FIM " << endl; }
                    break;

             default : { cout << " Opcao invalida, digite novamente " << endl;
                            getchar();
             }

        }
    }
}

void Principal::MenuCadastro()
{
    int operacao = -1;

    while(operacao != 7)
    {
        system("cls");
        cout << " Informe sua opcao : " <<endl;
        cout << " 1 - Cadastrar Aluno. " <<endl;
        cout << " 2 - Cadastrar Professor. " <<endl;
        cout << " 3 - Cadastrar Livro. " << endl;
        cout << " 4 - Cadastrar Disciplina. " <<endl;
        cout << " 5 - Cadastrar Departamento " <<endl;
        cout << " 6 - Cadastrar Universidade " <<endl;
        cout << " 7 - Sair, " << endl;
        cin>> operacao;

        switch(operacao)
        {
            case 1: {cadastrarAluno(); }
                break;

            case 2:{cadastrarProfessor(); }
                break;

            case 3:{cadastrarLivro(); }
                break;

            case 4: { cadastrarDisciplina(); }
                break;

            case 5: { cadastrarDepartamento(); }
                break;

            case 6 : { cadastrarUniversidade(); }
                break;

            case 7 : { cout<< " FIM " << endl; }
                    break;

             default : { cout << " Opcao invalida, digite novamente " << endl;
                            getchar();
             }

        }
    }
}

void Principal::MenuExecutar()
{
    int operacao = -1;

    while(operacao != 11)
    {
        system("cls");
        cout << " Informe sua opcao : " <<endl;
        cout << " 1 - Listar Alunos. " <<endl;
        cout << " 2 - Listar Professores.  " <<endl;
        cout << " 3 - Listar Estagiarios. " << endl;
        cout << " 4 - Listar Pessoas. " << endl;
        cout << " 5 - Listar Livros. " << endl;
        cout << " 6 - Listar Disciplinas. " <<endl;
        cout << " 7 - Listar Departamentos. " <<endl;
        cout << " 8 - Listar Universidades " <<endl;
        cout << " 9 - Listar Pessoas e seus Dados " << endl;
        cout << " 10 - Listar Area de conhecimento e seus Dados " << endl;
        cout << " 11 - Sair. " <<endl;
        cin >> operacao;

        switch(operacao)
        {
        case 1:
            {
                LAluno.listeAlunosProximo();
                fflush(stdin);
                getchar();
            }break;

        case 2:
        {
            LProfessor.listeProfessorProximo();
            fflush(stdin);
            getchar();
        }break;

        case 3:
            {
                LEstagiario.listeEstagiarioProximo();
                fflush(stdin);
                getchar();
            }break;

        case 4:
            {
                LPessoa.listePessoaProximo();
                fflush(stdin);
                getchar();
            }break;

        case 5:
            {
                LLivrro.listeLivroProximo();
                fflush(stdin);
                getchar();
            }break;

        case 6:
            {
                LDisciplina.listeDisciplinasProximo();
                fflush(stdin);
                getchar();
            }break;

        case 7:
            {
                LDepartamento.listaDepartamentoProx();
                fflush(stdin);
                getchar();
            }break;

        case 8:
            {
                LUniversidade.listaUniversidadeProx();
                fflush(stdin);
                getchar();
            }break;

        case 9:
            {
                LPessoa.listeDados();
                fflush(stdin);
                getchar();
            }break;

        case 10:
            {
                LAreaConhecimento.listeDados();
                fflush(stdin);
                getchar();
            }break;

        case 11:
            {
                cout<< " FIM " <<endl;
            } break;

        default:
            {
                cout << "Opcao invalida, digite novamente " <<endl;
                getchar();
            }

        }

    }
}

void Principal::MenuGravar()
{
    int operacao = -1;

    while (operacao != 10)
    {
         system("cls");
        cout << " Informe sua opcao : " <<endl;
        cout << " 1 - Gravar Alunos. " << endl;
        cout << " 2 - Gravar Professores. " << endl;
        cout << " 3 - Gravar Estagiarios. " << endl;
        cout << " 4 - Gravar Pessoas " << endl;
        cout << " 5 - Gravar Livros " << endl;
        cout << " 6 - Gravar Disciplinas. " <<endl;
        cout << " 7 - Gravar Departamentos :  " <<endl;
        cout << " 8 - Gravar Universidades. " <<endl;
        cout << " 9 - Gravar Tudo. " <<endl;
        cout << " 10 - Sair. " <<endl;
        cin >> operacao;

        switch(operacao)
        {
            case 1: {gravarAluno();  }
                break;

            case 2:{gravarProfessor(); }
                break;

             case 3:{gravarEstagiario(); }
                break;

            case 4:{gravarPessoa(); }
                break;

            case 5:{gravarLivro(); }
                break;

            case 6:{ gravarDisciplina();  }
                break;

           case 7 :{gravarDepartamento();   }
                break;

            case 8 :{gravarUniversidade();   }
                break;

            case 9 :{ gravarTudo();  }
                break;

            case 10 :{ cout<< "FIM " << endl;}
                break;

            default:{ cout << "Opcao invalida, digite novamente " << endl;
                        getchar();
            }

        }
    }
}

//================================== FUNÇÕES DE CADASTRO ========================================//
void Principal::cadastrarUniversidade()
{
    char nomeUniversidade[150];
    Universidade* pUniv = NULL;

    cout << " Qual o nome da universidade ? " <<endl;
    cin >> nomeUniversidade;

    pUniv = new Universidade(contadorIdUniversidades++);
    pUniv->setNomeUniv(nomeUniversidade);
    LUniversidade.setUniversidade(pUniv);
}

void Principal::cadastrarDepartamento()
{
    Universidade* pUniv = NULL;
    Departamento* pDepto = NULL;

    char nomeUniversidade[150];
    char nomeDepartamento[150];

    cout << " Qual o nome da universidade ? " <<endl;
    cin >> nomeUniversidade;
    pUniv = LUniversidade.localizar(nomeUniversidade);

    if(pUniv != NULL)
    {
        cout<< " Qual o nome do departamento ? " << endl;
        cin >> nomeDepartamento;
        pDepto = new Departamento(contadorIdDepartamentos++);
        pDepto->setNomeDpto(nomeDepartamento);
        pDepto->setUniversidade(pUniv);
        LDepartamento.setDepartamentoLista(pDepto);

    }
    else
        cout << " Universidade inexistente no sistema " << endl;

}

void Principal::cadastrarLivro()
{
    Livro* pLivro = NULL;
    areaConhecimento* pAc = NULL;

    char nomeLivro[150];
    char nomeAreaConhecimento[150];

    cout << " Qual o nome do Livro ? " << endl;
    cin >> nomeLivro;
    cout << " Qual a Area de Conhecimento do Livro " << endl;
    cin >> nomeAreaConhecimento;

    pLivro = new Livro(contadorIdLivros++);
    pLivro->setNomeLivro(nomeLivro);
    pLivro->setAreaConhecimento(nomeAreaConhecimento);
    LLivrro.setLivroLista(pLivro);

    pAc = static_cast<areaConhecimento*>(pLivro);
    LAreaConhecimento.setAreaConhecimentoLista(pAc);

}

void Principal::cadastrarDisciplina()
{
    Universidade* pUniv = NULL;
    Departamento* pDepto = NULL;
    Disciplina * pDisciplina = NULL;

    char nomeUniversidade[150];
    char nomeDepartamento[150];
    char nomeDisciplina[150];

    cout << " Qual o nome da universidade ? " <<endl;
    cin >> nomeUniversidade;
    pUniv = LUniversidade.localizar(nomeUniversidade);

    if(pUniv != NULL)
    {

        cout<< " Qual o nome do departamento ? " << endl;
        cin >> nomeDepartamento;

        pDepto = LDepartamento.localizar(nomeDepartamento);

        if(pDepto != NULL)
        {
            cout<< "Qual o nome da disciplina ? " << endl;
            cin>> nomeDisciplina;
            pDisciplina = new Disciplina(contadorIdDisciplinas++);
            pDisciplina->setNomeDisciplina(nomeDisciplina);
            pDisciplina->setDepartamento(pDepto);
            LDisciplina.setDisciplinasLista(pDisciplina); // setar Disciplina na lista
        }
        else
        {
            cout << "Departamento inexistente " << endl;
        }
    }
    else
    {
        cout<< "Universidade inexistente " << endl;
    }
}

void Principal::cadastrarAluno()
{
    char nomeAluno[150];
    int RA = 0;
    int verificador = 0;
    float bolsa = 0.0;
    Aluno* pAluno = NULL;
    Estagiario* pEstagiario = NULL;
    Pessoa* pPessoa = NULL;

    cout<< " Qual o nome do Aluno ? " << endl;
    cin>> nomeAluno;

    cout<< " Qual o RA do aluno ? " <<endl;
    cin>>RA;

    cout << " O Aluno é um Estagiario ? " << endl;
    cout << " Aperte 1 se for Estagiario " << endl;
    cout << " Aperte 2 se não for Estagiario " << endl;
    cin>>verificador;

    cout << " Qual é o valor da Bolsa do Aluno " << endl;
    cin >> bolsa;

    pAluno = new Aluno(contadorIdAlunos++);
    pAluno->setNomePessoa(nomeAluno);
    pAluno->setRA(RA);
    pAluno->setBolsaAluno(bolsa);
    LAluno.setAlunoLista(pAluno);

    pPessoa = static_cast <Pessoa*> (pAluno); //TypeCast para transformar em tipo Pessoa
    LPessoa.setPessoaLista(pPessoa);

    switch(verificador)
    {
        case 1:
        {
           // pEstagiario = static_cast<Estagiario*>(pAluno);
           pEstagiario = new Estagiario(contadorIdEstagiario++);
           pEstagiario->setNomePessoa(nomeAluno);
           pEstagiario->setBolsaAluno(bolsa);
           LEstagiario.setEstagiarioLista(pEstagiario);

        }break;

        case 2:{}
            break;

        default  :{cout << "Opção invalida, digite novamente " << endl;
                        getchar();
        }

    }
}

void Principal::cadastrarProfessor()
{
    Professor* pProfessor = NULL;
    Pessoa* pPessoa = NULL;
    areaConhecimento* pAc = NULL;

    char nomeProfessor[150];
    char nomeAreaConhecimento[150];
    float salario;
    float bolsaProjeto;

    cout << " Qual o nome do Professor ? " << endl;
    cin >> nomeProfessor;
    cout << " Qual o salario do Professor ? " <<endl;
    cin >> salario;
    cout << " Qual o valor da bolsa do Professor ? " <<endl;
    cin>> bolsaProjeto;
    cout << " Qual a Area de Conhecimento do Professor ? " << endl;
    cin >> nomeAreaConhecimento;

    pProfessor = new Professor(contadorIdProfessor++);
    pProfessor->setNomePessoa(nomeProfessor);
    pProfessor->setSalario(salario);
    pProfessor->setBolsaProjeto(bolsaProjeto);
    pProfessor->setAreaConhecimento(nomeAreaConhecimento);
    LProfessor.setProfessorLista(pProfessor);

    pPessoa = static_cast <Pessoa*> (pProfessor); //TypeCast para transformar o objeto em tipo Pessoa
    LPessoa.setPessoaLista(pPessoa);

    pAc = static_cast<areaConhecimento*> (pProfessor);
    LAreaConhecimento.setAreaConhecimentoLista(pAc);

}

//========================================== FUNÇÕES DE GRAVAÇÂO =====================================//
void Principal::gravarAluno()
{
    LAluno.gravarAluno();
}

void Principal::gravarProfessor()
{
    LProfessor.gravarProfessor();
}

void Principal::gravarEstagiario()
{
    LEstagiario.gravarEstagiario();
}

void Principal::gravarPessoa()
{
    LPessoa.gravarPessoa();
}

void Principal::gravarLivro()
{
    LLivrro.gravarLivro();
}

void Principal::gravarDisciplina()
{
    LDisciplina.gravarDisciplinas();
}

void Principal::gravarDepartamento()
{
    LDepartamento.gravarDepartamentos();
}

void Principal::gravarUniversidade()
{
    LUniversidade.gravarUniversidades();
}

void Principal::gravarTudo()
{
    LAluno.gravarAluno();
    LProfessor.gravarProfessor();
    LEstagiario.gravarEstagiario();
    LPessoa.gravarPessoa();
    LLivrro.gravarLivro();
    LDisciplina.gravarDisciplinas();
    LDepartamento.gravarDepartamentos();
    LUniversidade.gravarUniversidades();
}

//===================================== FUNÇÕES DE RECUPERAÇÃO ========================= //

void Principal::recuperarAluno()
{
    LAluno.recuperarAluno();
}

void Principal::recuperarProfessor()
{
    LProfessor.recuperarProfessor();
}

void Principal::recuperarEstagiario()
{
    LEstagiario.recuperarEstagiario();
}

void Principal::recuperarPessoa()
{
    LPessoa.recuperarPessoa();
}

void Principal::recuperarLivro()
{
        LLivrro.recuperarLivro();
}

void Principal::recuperarDisciplina()
{
    LDisciplina.recuperarDisciplinas();
}

void Principal::recuperarDepartamento()
{
    LDepartamento.recuperarDepartamento();
}

void Principal::recuperarUniversidade()
{
    LUniversidade.recuperarUniversidades();
}

void Principal::recuperarTudo()
{
    LAluno.recuperarAluno();
    LProfessor.recuperarProfessor();
    LEstagiario.recuperarEstagiario();
    LPessoa.recuperarPessoa();
    LLivrro.recuperarLivro();
    LDisciplina.recuperarDisciplinas();
    LDepartamento.recuperarDepartamento();
    LUniversidade.recuperarUniversidades();
}
/*
istream& operator>>(istream& entrada, Aluno& Aluno)
{
    entrada >>
} */
