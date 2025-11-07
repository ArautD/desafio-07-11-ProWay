#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "produtos.h"

void buscarProduto() {
        limparTela();
    char nomeBusca[50];
    printf("Digite o nome do produto que deseja buscar: ");
    scanf("%s", nomeBusca);

    int encontrado = 0;
    for(int i = 0; i < totalProdutos; i++) {
        if(strcmp(produtos[i].nome, nomeBusca) == 0) {
            printf("Produto encontrado: %s - R$ %.2f\n", produtos[i].nome, produtos[i].preco);
            encontrado = 1;
            break;
        }
    }

    if(!encontrado) {
        printf("Produto %s nao encontrado!\n", nomeBusca);
    }
}