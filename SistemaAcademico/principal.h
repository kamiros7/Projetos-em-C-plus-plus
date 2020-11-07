#ifndef PRINCIPAL_H_INCLUDED
#define PRINCIPAL_H_INCLUDED

#include "listaUniversidade.h"
#include "listaDepartamento.h"
#include "listaDisciplina.h"
#include "listaPessoa.h"
#include "listaProfessor.h"
#include "listaEstagiario.h"
#include "listaLivro.h"
#include "listaAreaConhecimento.h"

//AS ASSOCIAÇÕES E AGREGAÇÃO ENTRE OBJETOS FICAM NO PONTO.H, ASSOCIACAO VIA PONTEIRO, AGREGAÇÃO APENAS CRIANDO O OBJETO

class Principal
{
private:
    Universidade UTFPR;
    Universidade UFPR;
    Universidade Princeton;
    Universidade Cambridge;

    Departamento DAELN;
    Departamento Fisica;
    Departamento Matematica;
    Departamento DAINF;

    Disciplina tecProg;
    Disciplina calculo3;
    Disciplina ED1;
    Disciplina fisica2;
    Disciplina eletricidade;

    Professor Einstein; // fisica princeton
    Professor Newton; // matematica cambridge
    Professor Mineto;
    Professor TesteProf;

    Aluno Camilo; // eng comp utfpr
    Aluno Lucas; // eng comp utfpr
    Aluno Victor; // desing utfpr
    Aluno Gabrielle; // expressão grafica ufpr
    Aluno Teste;

    Estagiario Joao;
    Estagiario Luciano;
    Estagiario Gustavo;

    Livro Halliday;
    Livro Sakidu;
    Livro Moyses;

    int contadorIdAlunos = 0;
    int contadorIdProfessor = 0;
    int contadorIdEstagiario = 0;
    int contadorIdLivros = 0;
    int contadorIdDisciplinas = 0;
    int contadorIdDepartamentos = 0;
    int contadorIdUniversidades = 0;

    listaAluno LAluno;
    listaProfessor LProfessor;
    listaEstagiario LEstagiario;
    listaPessoa LPessoa;
    listaLivro LLivrro;
    listaAreaConhecimento LAreaConhecimento;
    listaDisciplina LDisciplina;
    listaDepartamento LDepartamento;
    listaUniversidade LUniversidade;


public:
    Principal();
    ~Principal();

    //Funções de inicialização
    void Inicializa();
    void InicializaAluno();
    void InicializaProfessor();
    void InicializaEstagiario();
    void InicializaLivro();
    void InicializaDisciplina();
    void InicializaDepartamento();
    void InicializaUniversidade();

    void Executar();

    //funções gerais de execução do menu
    void Menu();
    void MenuCadastro();
    void MenuExecutar();
    void MenuGravar();
    void MenuRecuperar();

    //funções de cadastro
    void cadastrarAluno();
    void cadastrarProfessor();
    void cadastrarLivro();
    void cadastrarDisciplina();
    void cadastrarDepartamento();
    void cadastrarUniversidade();

    //funçõesde recuperação
    void recuperarAluno();
    void recuperarProfessor();
    void recuperarEstagiario();
    void recuperarPessoa();
    void recuperarLivro();
    void recuperarDisciplina();
    void recuperarDepartamento();
    void recuperarUniversidade();
    void recuperarTudo();

    //funções de gravação
    void gravarAluno();
    void gravarProfessor();
    void gravarEstagiario();
    void gravarPessoa();
    void gravarLivro();
    void gravarDisciplina();
    void gravarDepartamento();
    void gravarUniversidade();
    void gravarTudo();

  //  void listeDisciplinasDosDepartamentos();
    //void listeAlunosDasDisciplinas();
    // void listeDepartamentosDaUniversidade();
};

istream& operator>>(istream& entrada, Aluno& Aluno);

#endif // PRINCIPAL_H_INCLUDED
