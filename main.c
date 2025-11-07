#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "produtos.h"

#define NOME_LOJA_MAXIMO 100

void limparTela(){
    system("cls");
}

void nomeLoja(char* nome){
    limparTela();
    printf("Um novo dia no curso C/Cpp...\n");
    printf("*-------------------------------*\n");
    printf("Gerente: Ola seja bem vindo a....    *\n");
    printf("Gerente: Qual o nome da sua loja?\n");
    scanf("%s", nome);
    printf("Gerente: Que nome legal! Seja bem vindo a loja %s\n", nome);
}

void menuPrincipal(int opcaoSelecionada, const char* nomeLoja){
    limparTela();
    printf("-----------------%s's MENU PRINCIPAL------------------\n", nomeLoja);
    printf("Digite uma das opcoes abaixo: (EX: 1 para cadastro de preco)\n");
    printf("1- Cadastro de Produto\n");
    printf("2- Listar Produtos\n");
    printf("3- Buscar produto por nome\n");
    printf("4- Mostrar preco mais caro e mais barato\n");
    printf("5- Mostrar media dos precos dos produtos\n");
    printf("0- Sair\n");

    switch (opcaoSelecionada){
        
        case 1:
            printf("Opcao 1 selecionada - Cadastro de produto\n");
            cadastrarProduto();
            break;
        case 2:
            printf("Opcao 2 selecionada - Listar Produtos\n");
            listarProdutos();
            break;
        case 3:
            printf("Opcao 3 selecionada - Buscar produto por nome\n");
            buscarProduto();
            break;
        case 4:
            printf("Opcao 4 selecionada - Mostrar preco mais caro e mais barato\n");
            mostrarPrecoBaratoCaro();
            break;
        case 5:
            printf("Opcao 5 selecionada - Mostrar media dos precos dos produtos\n");
            break;
            mostrarMedia();
        case 0:
            printf("Saindo do sistema...\n");
            break;
        default:
            printf("Opcao invalida\n");
            break;
    }
}
int main() {

    char nomeDaLoja[NOME_LOJA_MAXIMO];
    int opcao;
    
    nomeLoja(nomeDaLoja);
    
    do {

        menuPrincipal(0, nomeDaLoja);
        printf("\nEscolha uma opcao: ");
        scanf("%d", &opcao);
        menuPrincipal(opcao, nomeDaLoja);
        printf("\nPressione ENTER para continuar...");
        getchar(); // Captura o '\n' deixado pelo scanf
        getchar(); // Aguarda o ENTER

    } while(opcao != 0);
    
    return 0;
}