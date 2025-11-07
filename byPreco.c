#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "produtos.h"

void mostrarPrecoBaratoCaro(){
    if (totalProdutos == 0) {
        limparTela();
        printf("Nenhum produto cadastrado!\n");
        return;
    }

    float precoMaior = produtos[0].preco;
    float precoMenor = produtos[0].preco;
    int indiceMaior = 0;
    int indiceMenor = 0;

    for (int i = 1; i < totalProdutos; i++) {
        if (produtos[i].preco > precoMaior) {
            precoMaior = produtos[i].preco;
            indiceMaior = i;
        }
        if (produtos[i].preco < precoMenor) {
            precoMenor = produtos[i].preco;
            indiceMenor = i;
        }
    }

    limparTela();
    printf("Produtos com precos extremos:\n");
    printf("-----------------------------\n");
    printf("Produto mais caro:\n");
    printf("Nome: %s\n", produtos[indiceMaior].nome);
    printf("Preco: R$ %.2f\n\n", produtos[indiceMaior].preco);
    
    printf("Produto mais barato:\n");
    printf("Nome: %s\n", produtos[indiceMenor].nome);
    printf("Preco: R$ %.2f\n", produtos[indiceMenor].preco);
}