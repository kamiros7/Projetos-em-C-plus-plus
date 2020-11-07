#ifndef LISTALIVRO_H_INCLUDED
#define LISTALIVRO_H_INCLUDED

#include "lista.h"
#include "elemento.h"
#include "livro.h"

class listaLivro
{
private:
    Lista<Livro> ListaTemplateLivro;

public:
    listaLivro();
    ~listaLivro();

    void setLivroLista(Livro* livro);
    void listeLivroProximo();
    void listeLivroAnterior();
    void gravarLivro();
    void recuperarLivro();
    void limpaLista();
};

#endif // LISTALIVRO_H_INCLUDED
