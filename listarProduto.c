#include <stdio.h>
#include <stdlib.h>
#include "produtos.h"

void listarProdutos() {
    system("cls");
    printf("Listando todos os produtos cadastrados:\n");
    printf("--------------------------------------\n");
    
    if (totalProdutos == 0) {
        printf("Nenhum produto cadastrado!\n");
        return;
    }

    for (int i = 0; i < totalProdutos; i++) {
        printf("Produto %d: %s - R$ %.2f\n", 
               i + 1, 
               produtos[i].nome, 
               produtos[i].preco);
    }
}