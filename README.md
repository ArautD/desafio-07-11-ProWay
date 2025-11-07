# Desafio do curso de programação em C
# Sistema de Gerenciamento de Loja.

Um pequeno sistema em **C** desenvolvido durante o programa de Trainee da Techne em um curso ministrado pela ProWay. Consiste em gerenciar produtos de uma loja, com funcionalidades de cadastro, listagem, busca, média de preços e identificação do produto mais caro e mais barato.  
O código foi organizado em **arquivos separados**, mantendo a `main.c` como ponto de entrada principal.

---

## 📁 Estrutura do Projeto

```
loja/
│
├── main.c
├── produto.h
├── produto.c
├── cadastrar.c
├── listar.c
├── buscar.c
├── preco.c
└── media.c
```

### Descrição dos arquivos

| Arquivo | Função |
|----------|--------|
| **main.c** | Contém a função `main()` e o menu principal do programa. |
| **produto.h** | Cabeçalho com `typedef`, `#define`, variáveis globais e protótipos das funções. |
| **produto.c** | Define as variáveis globais (`produtos`, `totalProdutos`) e funções auxiliares como `toLowerStr()`. |
| **cadastrar.c** | Implementa a função `cadastrarProduto()`. |
| **listar.c** | Implementa a função `listarProdutos()`. |
| **buscar.c** | Implementa a função `buscarProduto()`. |
| **preco.c** | Implementa a função `mostrarPrecoBaratoCaro()`. |
| **media.c** | Implementa a função `mostrarMedia()`. |

---

## ⚙️ Funcionalidades

✅ Cadastro de produtos  
✅ Listagem dos produtos cadastrados  
✅ Busca de produtos por nome (não sensível a maiúsculas/minúsculas)  
✅ Exibição do produto mais caro e mais barato  
✅ Cálculo da média de preços  
✅ Interface simples via terminal  

---

## 🧠 Tecnologias utilizadas

- Linguagem C  
- Biblioteca padrão (`stdio.h`, `stdlib.h`, `string.h`, `locale.h`, `ctype.h`)  
- Compilador GCC  

---

## 🚀 Como executar

No terminal, estando dentro da pasta do projeto, execute:

```bash
output/lojinha
```

---

## 💡 Exemplo de uso

```
NPC: Olá! Qual o nome da sua loja?
> Mercado do João

======== Bem vindo(a) a Mercado do João ========
1 - Cadastrar produto
2 - Listar produtos
3 - Buscar produto
4 - Mostrar mais caro e mais barato
5 - Mostrar média dos preços
0 - Sair
=========================
Escolha uma opção:
```

---

## 🧩 Observações

- O código suporta até **10 produtos** (ajustável pelo `#define MAX_PRODUTOS`).
- A codificação de caracteres UTF-8 é configurada no início do programa.
- O sistema utiliza `system("cls")` (Windows). Em sistemas Linux/Mac, altere para `system("clear")`.

---


---

> Projeto criado para fins de estudo e prática em programação modular em linguagem C.
