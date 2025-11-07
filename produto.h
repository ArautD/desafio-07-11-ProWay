#ifndef PRODUTO_H
#define PRODUTO_H

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <locale.h>

#define MAX_PRODUTOS 10
#define MAX_NOME 100
#define NOME_LOJA_MAX 100

typedef struct {
    char nome[MAX_NOME];
    double preco;
} Produto;

extern Produto produtos[MAX_PRODUTOS];
extern int totalProdutos;

void toLowerStr(char *str);
void cadastrarProduto();
void listarProdutos();
void buscarProduto();
void mostrarPrecoBaratoCaro();
void mostrarMedia();

#endif
