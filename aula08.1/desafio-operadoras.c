#include <stdio.h>
#include <locale.h>
#include <math.h>
#define QTE_OPERADORAS 3
#define QTE_MESES 12

int main() {
    setlocale(LC_CTYPE, "");

    // Vetores com meses e operadores constantes
    const char *meses[] = {"jan", "fev", "mar", "abr", "mai", "jun", "jul", "ago", "set", "out", "nov", "dez"};
    const char *operadoras[] = {"Vivo", "Claro", "Tim"};

    // Matriz de todas as vendas por mês por cada operadora
    int vendas_mensais[QTE_OPERADORAS][QTE_MESES];

    // Vetor de médias
    int medias[QTE_OPERADORAS];

    // Vetor de vendas por mes
    int vendas_mes[QTE_MESES];

    // Linhas e colunas da matriz
    int i, j;

    // Média geral, soma para cada operadora, soma geral e soma mês
    int media_geral, soma_operadora, soma_geral = 0, soma_mes;

    // Variáveis para descobrir valor e índice do mês com mior media de vendas e operadora com maior venda anual
    int maior_media_mes = -1, indice_melhor_mes = 0, maior_venda_anual = -1, indice_melhor_operadora = 0;

    for (i = 0; i < QTE_OPERADORAS; i++) {
        for (j = 0; j < QTE_MESES; j++) {
            printf("Digite a qte de chips vendidos pela %s em %s: ", operadoras[i], meses[j]);
            scanf("%d", &vendas_mensais[i][j]);
        }
        printf("\n\n");
    }

    for (i = 0; i < QTE_OPERADORAS; i++) {
        soma_operadora = 0;
        for (j = 0; j < QTE_MESES; j++) {
            soma_operadora += vendas_mensais[i][j];
        }
        soma_geral += soma_operadora;
        medias[i] = round((float)soma_operadora / QTE_MESES);

        if (soma_operadora > maior_venda_anual) {
            maior_venda_anual = soma_operadora;
            indice_melhor_operadora = i;
        }
    }

    media_geral = round((float)soma_geral / (QTE_OPERADORAS * QTE_MESES));

    for (j = 0; j < QTE_MESES; j++) {
        soma_mes = 0;
        for (i = 0; i < QTE_OPERADORAS; i++) {
            soma_mes += vendas_mensais[i][j];
        }

        if (soma_mes > maior_media_mes) {
            maior_media_mes = soma_mes;
            indice_melhor_mes = j;
        }
    }

    // Relatório
    printf("RELATORIO ANUAL DE VENDAS\n\n");
    printf("Media mensal geral: %d chips\n\n", media_geral);

    for (i = 0; i < QTE_OPERADORAS; i++) {
        printf("Media da %s: %d chips\n", operadoras[i], medias[i]);
    }

    printf("\nMes com maior media de vendas: %s - %d chips\n", meses[indice_melhor_mes], maior_media_mes);

    printf("Operadora com maior venda anual: %s - %d chips\n\n", operadoras[indice_melhor_operadora], medias[indice_melhor_operadora]);

    return 0;
}
