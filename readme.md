# Sistema Básico de Gerenciamento de Estoque

Este programa em C é um sistema básico de gerenciamento de estoque de produtos. Ele permite o cadastro de produtos, incluindo ID, nome, preço e quantidade.

## Funcionalidades

O programa oferece as seguintes funcionalidades:

1. Cadastro de produtos
2. Entrada de produtos (em desenvolvimento)
3. Venda de produtos (em desenvolvimento)
4. Fechamento de caixa (em desenvolvimento)

## Compilação

Para compilar este programa, use o compilador GCC com o seguinte comando:

```bash
gcc -o gerenciamento_estoque main.c

Execução
Para executar o programa, use:

bash
Copy code
./gerenciamento_estoque
Funcionamento
O programa funciona da seguinte maneira:

O usuário seleciona uma opção do menu principal.
Se a opção escolhida for o cadastro de produtos, o usuário insere o nome, o ID, o preço e a quantidade do produto.
Se o produto já existir no sistema (mesmo ID), a quantidade é atualizada.
As outras opções de menu (entrada de produtos, venda de produtos e fechamento de caixa) estão em desenvolvimento.
Estrutura de Dados
O programa utiliza uma estrutura chamada "produto" para armazenar as informações dos produtos, incluindo:

ID do produto (int)
Nome do produto (char[50])
Preço do produto (float)
Quantidade do produto (int)
Funções
O programa possui as seguintes funções:

void cadastro(produto *pp, int quantidade_inicial): cadastra um produto no sistema.
void aloca_produto(produto **pp, int tam): aloca dinamicamente memória para a estrutura de produtos.
Contribuição
Sinta-se à vontade para contribuir com este projeto, enviando um pull request ou abrindo uma issue no GitHub.
