#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "produtos.h"

struct Produto produtos[MAX_PRODUTOS];
int totalProdutos = 0;

void cadastrarProduto() {
    if(totalProdutos >= MAX_PRODUTOS) {
        printf("Limite de produtos atingido!\n");
        return;
    }

    system("cls");
    printf("Opcao 1 - Cadastro de produto\n");
    printf("Digite o nome do produto: ");
    scanf("%s", produtos[totalProdutos].nome);
    printf("Digite o preco do produto: ");
    scanf("%f", &produtos[totalProdutos].preco);
    printf("Produto %s cadastrado com sucesso!\n", produtos[totalProdutos].nome);
    totalProdutos++;
}

void listarProdutos() {
    system("cls");
    printf("Lista de Produtos:\n");
    for(int i = 0; i < totalProdutos; i++) {
        printf("%d. %s - R$ %.2f\n", i+1, produtos[i].nome, produtos[i].preco);
    }
}