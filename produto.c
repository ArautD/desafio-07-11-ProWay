#include "produto.h"

Produto produtos[MAX_PRODUTOS];
int totalProdutos = 0;

void toLowerStr(char *str) {
    for (int i = 0; str[i]; i++)
        str[i] = (char)tolower((unsigned char)str[i]);
}
