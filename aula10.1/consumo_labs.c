#include <stdio.h>
#include <locale.h>
#define LABS 4
#define DIAS 7

const char *dias[] =
{
    "seg", "ter", "qua", "qui",
    "sex", "sab", "dom"
};

const char *laboratorios[] =
{
    "Lab A", "Lab B", "Lab C", "Lab D"
};

float calcular_total(float consumo[][DIAS], int laboratorios);

float calcular_media_laboratorio(
    float consumo[][DIAS],
    int laboratorio
);

int buscar_dia_maior_consumo(
    float consumo[][DIAS],
    int laboratorios
);

int buscar_laboratorio_maior_consumo(
    float consumo[][DIAS],
    int laboratorios
);

int contar_acima_limite(
    float consumo[][DIAS],
    int laboratorios,
    float limite
);

void gerar_relatorio(
    float consumo[][DIAS],
    const char *laboratorios[],
    const char *dias[],
    int quantidade_laboratorios
);

int main() {
    setlocale(LC_CTYPE, "");

    float consumo[LABS][DIAS];
    int i, j;

    for (i = 0; i < LABS; i++) {
        for (j = 0; j < DIAS; j++) {
            printf("Digite o consumo do %s na(o) %s (em kWh): ", laboratorios[i], dias[j]);
            scanf("%f", &consumo[i][j]);
        }
    }

    gerar_relatorio(consumo, laboratorios, dias, LABS);

    return 0;
}

float calcular_total(float consumo[][DIAS], int laboratorios) {
    int i, j;
    float consumo_total = 0;
    for (i = 0; i < laboratorios; i++) {
        for (j = 0; j < DIAS; j++) {
            consumo_total += consumo[i][j];
        }
    }
    return consumo_total;
}

float calcular_media_laboratorio(float consumo[][DIAS], int laboratorio) {
    int j;
    float soma_atual = 0;

    for (j = 0; j < DIAS; j++) {
        soma_atual += consumo[laboratorio][j];
    }

    return soma_atual / DIAS;
}

void gerar_relatorio(float consumo[][DIAS], const char *laboratorios[], const char *dias[], int quantidade_laboratorios) {
    int i;

    printf("\n\n===== RELATORIO DE CONSUMO =====\n\n");
    printf("Consumo total geral: %.2f kWh\n\n", calcular_total(consumo, quantidade_laboratorios));

    for (i = 0; i < quantidade_laboratorios; i++) {
        float media_atual = calcular_media_laboratorio(consumo, i);
        printf("Média do %s: %.2f kWh\n", laboratorios[i], media_atual);
    }
    printf("\n\n");
    printf("Dia com maior consumo total: ");
}
