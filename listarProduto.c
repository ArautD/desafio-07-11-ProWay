#include "produto.h"

void listarProdutos() {
    if (totalProdutos == 0) {
        printf("NPC: Nenhum produto cadastrado :(\n");
        return;
    }

    printf("\nProdutos cadastrados:\n");
    for (int i = 0; i < totalProdutos; i++) {
        printf("%d - %s | R$ %.2f\n", i + 1, produtos[i].nome, produtos[i].preco);
    }
}
