#include <stdio.h>
#include <locale.h>
#define LINHAS 3
#define COLUNAS 4

int main() {
    setlocale(LC_CTYPE, "");

    int vendas_produtos[LINHAS][COLUNAS], i, j, soma_atual, soma_total = 0;

    for (i = 0; i < LINHAS; i++) {
        for (j = 0; j < COLUNAS; j++) {
            printf("Digite a qte do %dº produto no %dº dia: ", i + 1, j + 1);
            scanf("%d", &vendas_produtos[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < LINHAS; i++) {
        soma_atual = 0;
        for (j = 0; j < COLUNAS; j++) {
            soma_atual += vendas_produtos[i][j];
        }
        printf("\nProduto %d: %d unidades", (i + 1), soma_atual);
        soma_total += soma_atual;
    }

    printf("\nTotal geral: %d unidades\n\n", soma_total);

    return 0;
}
