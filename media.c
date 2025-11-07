#include "produto.h"

void mostrarMedia() {
    if (totalProdutos == 0) {
        printf("NPC: Você não tem nenhum produto cadastrado!\n");
        return;
    }

    double soma = 0;
    for (int i = 0; i < totalProdutos; i++)
        soma += produtos[i].preco;

    printf("Média dos preços: R$ %.2f\n", soma / totalProdutos);
}
