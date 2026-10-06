#include <stdio.h>
#include <locale.h>

#define LINHAS 3
#define COLUNAS 3

int main() {
    setlocale(LC_CTYPE, "");

    const char *produtos[] = {"café", "bolo", "coxinha", };
    const char *dias_semana[] = {"seg", "ter", "qua", };
    int vendas_produtos[LINHAS][COLUNAS], i, j, soma_atual, soma_total = 0;

    for (i = 0; i < LINHAS; i++) {
        for (j = 0; j < COLUNAS; j++) {
            printf("Digite a qte de %s vendidos na %s: ", produtos[i], dias_semana[j]);
            scanf("%d", &vendas_produtos[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < LINHAS; i++) {
        soma_atual = 0;
        for (j = 0; j < COLUNAS; j++) {
            soma_atual += vendas_produtos[i][j];
        }
        printf("%s: %d unidades\n", produtos[i], soma_atual);
        soma_total += soma_atual;
    }

    printf("Total geral: %d unidades\n\n", soma_total);

    return 0;
}
