#include "produto.h"

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");
    system("chcp 65001 > nul");

    char nomeLoja[NOME_LOJA_MAX];
    char entrada[32];
    int opcao = -1;

    printf("NPC: Olá! Qual o nome da sua loja?\n> ");
    fgets(nomeLoja, sizeof(nomeLoja), stdin);
    nomeLoja[strcspn(nomeLoja, "\n")] = '\0';

    do {
        system("cls");
        printf("======== Bem vindo(a) a %s ========\n", nomeLoja);
        printf("1 - Cadastrar produto\n");
        printf("2 - Listar produtos\n");
        printf("3 - Buscar produto\n");
        printf("4 - Mostrar mais caro e mais barato\n");
        printf("5 - Mostrar média dos preços\n");
        printf("0 - Sair\n");
        printf("=========================\n");
        printf("Escolha uma opção: ");

        fgets(entrada, sizeof(entrada), stdin);
        opcao = atoi(entrada);

        system("cls");
        switch (opcao) {
            case 1: cadastrarProduto(); break;
            case 2: listarProdutos(); break;
            case 3: buscarProduto(); break;
            case 4: mostrarPrecoBaratoCaro(); break;
            case 5: mostrarMedia(); break;
            case 0: printf("Saindo...\n"); break;
            default: printf("Opção inválida!\n"); break;
        }

        if (opcao != 0) {
            printf("\nPressione ENTER para continuar...");
            fgets(entrada, sizeof(entrada), stdin);
        }

    } while (opcao != 0);

    return 0;
}
