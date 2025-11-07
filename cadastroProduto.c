#include "produto.h"

void cadastrarProduto() {
    if (totalProdutos >= MAX_PRODUTOS) {
        printf("NPC: Ops! Limite de produtos atingido!\n");
        return;
    }

    printf("Digite o nome do produto: ");
    fgets(produtos[totalProdutos].nome, MAX_NOME, stdin);
    produtos[totalProdutos].nome[strcspn(produtos[totalProdutos].nome, "\n")] = '\0';

    char buffer[32];
    printf("Digite o preço do produto: ");
    fgets(buffer, sizeof(buffer), stdin);
    produtos[totalProdutos].preco = atof(buffer);

    totalProdutos++;
    printf("NPC: OBA! Seu produto foi cadastrado com sucesso!\n");
}
