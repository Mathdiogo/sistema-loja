#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct produto{
    int id;
    char nome[50];
    float preco;
    int quantidade;
} produto;

void cadastro(produto *pp, int quantidade_inicial);

/*void saida
 void fechamento*/
void aloca_produto(produto **pp, int tam);

int main()
{
    int op, qntd = 0;
    produto *pp = NULL;

    do {
        printf("\nDigite a opcao desejada:\n \n[1]cadastro produto\n[2]entrada produtos\n[3]venda produtos\n[4]fechamendo de caixa: \n");
        scanf("%i", &op);
        fflush(stdin);

        switch (op) {
        case 1:
            qntd++;
            aloca_produto(&pp, qntd);
            cadastro(pp, 0);
            break;

        case 2:

            //entrada(pp, qntd);
            break;

        case 3:

            break;

        case 4:

            break;
        }

    } while (op != 4);

    return 0;
}

void aloca_produto(produto **pp, int tam)
{
    if ((*pp = (produto *)realloc(*pp, tam * sizeof(produto))) == NULL) {
        exit(1);
    }
}

void cadastro(produto *pp, int quantidade)
{
    printf("\nDigite a categoria do produto: ");
    fflush(stdin);
    gets(pp->nome);
    printf("Digite o id do produto: ");
    scanf("%d", &pp->id);
    printf("Digite o valor do produto a ser vendido: ");
    scanf("%f", &pp->preco);
    printf("Digite a quantidade inicial do produto: ");
    scanf("%d", &pp->quantidade);
      // Verifica se já existe um produto com o mesmo ID
    int i;
    for (i = 0; i < quantidade; i++) {
        if (pp->id == (pp)->id) {
            // Já existe um produto com o mesmo ID, então soma a quantidade do novo produto
            (pp+i)->quantidade += pp->quantidade;
            printf("Produto ja cadastrado. Quantidade atualizada: %d\n", (pp+i)->quantidade);
            return;
        }
    }
    printf("Produto cadastrado com sucesso.\n\n ");
    printf("Nome: %s | ID: %d | Preco: R$ %.2f | Quantidade: %d\n", pp->nome, pp->id, pp->preco, pp->quantidade);
}

