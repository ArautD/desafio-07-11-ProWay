#include "produto.h"

void buscarProduto() {
    if (totalProdutos == 0) {
        printf("NPC: Nenhum produto cadastrado :(\n");
        return;
    }

    char busca[MAX_NOME];
    printf("Digite o nome do produto para buscar: ");
    fgets(busca, MAX_NOME, stdin);
    busca[strcspn(busca, "\n")] = '\0';

    char buscaLower[MAX_NOME];
    strcpy(buscaLower, busca);
    toLowerStr(buscaLower);

    int encontrado = 0;
    for (int i = 0; i < totalProdutos; i++) {
        char nomeLower[MAX_NOME];
        strcpy(nomeLower, produtos[i].nome);
        toLowerStr(nomeLower);

        if (strstr(nomeLower, buscaLower)) {
            printf("Produto encontrado: %s - R$ %.2f\n", produtos[i].nome, produtos[i].preco);
            encontrado = 1;
        }
    }

    if (!encontrado)
        printf("Produto \"%s\" não encontrado :( \n", busca);
}
