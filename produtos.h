#ifndef PRODUTOS_H
#define PRODUTOS_H

#define MAX_PRODUTOS 50

struct Produto {
    char nome[50];
    float preco;
};
// Declaração de variáveis globais
extern struct Produto produtos[MAX_PRODUTOS];
extern int totalProdutos;

// Declaração de funções
void cadastrarProduto();
void listarProdutos();
void buscarProduto();
void mostrarPrecoBaratoCaro();
void mostrarMedia();

#endif