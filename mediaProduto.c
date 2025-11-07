#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "produtos.h"

void mostrarMedia(){
    if (totalProdutos == 0) {
        limparTela();
        printf("Nenhum produto cadastrado!\n");
        return;
    }

    float somaPrecos = 0.0f;
    for (int i = 0; i < totalProdutos; i++) {
        somaPrecos += produtos[i].preco;
    }

    float media = somaPrecos / totalProdutos;

    limparTela();
    printf("Media de preços dos produtos:\n");
    printf("-----------------------------\n");
    printf("Total de produtos: %d\n", totalProdutos);
    printf("Media de preços: R$ %.2f\n", media);;
}