#include "produto.h"

void mostrarPrecoBaratoCaro() {
    if (totalProdutos == 0) {
        printf("NPC: Você não tem nenhum produto cadastrado!\n");
        return;
    }

    int indiceMaior = 0, indiceMenor = 0;

    for (int i = 1; i < totalProdutos; i++) {
        if (produtos[i].preco > produtos[indiceMaior].preco)
            indiceMaior = i;
        if (produtos[i].preco < produtos[indiceMenor].preco)
            indiceMenor = i;
    }

    printf("\nProduto mais caro: %s - R$ %.2f\n", produtos[indiceMaior].nome, produtos[indiceMaior].preco);
    printf("Produto mais barato: %s - R$ %.2f\n", produtos[indiceMenor].nome, produtos[indiceMenor].preco);
}
