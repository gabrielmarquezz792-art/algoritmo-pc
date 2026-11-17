// Gabriel Marques Avalo da Silva | RGM: 47393441
// Víctor Gabriel da Silva Santos | RGM: 47454733

#include <stdio.h>

#define LOCAIS 3
#define DIAS 5
#define LIMITE_ALERTA 30

int carregarMedicoes(const char *nomeArquivo, int dados[LOCAIS][DIAS]);
float calcularMediaLocal(int dados[LOCAIS][DIAS], int local);
float calcularMediaGeral(int dados[LOCAIS][DIAS]);
int contarAlertasLocal(int dados[LOCAIS][DIAS], int local);
int encontrarDiaMaisQuente(int dados[LOCAIS][DIAS]);
void exibirRelatorio(FILE *destino, int dados[LOCAIS][DIAS]);

int main(void) {
    int temperaturas[LOCAIS][DIAS];
    FILE *arquivo;

    if (!carregarMedicoes("medicoes.txt", temperaturas)) {
        printf("Erro: nao foi possivel ler as 15 mediçoes de medicoes.txt.\n");
        return 1;
    }

    exibirRelatorio(stdout, temperaturas);

    arquivo = fopen("relatorio.txt", "w");
    if (arquivo == NULL) {
        printf("Erro: nao foi possivel criar relatorio.txt.\n");
        return 1;
    }
    exibirRelatorio(arquivo, temperaturas);
    fclose(arquivo);
    printf("\nRelatorio salvo em relatorio.txt\n");
    return 0;
}

/* FUNCAO FORNECIDA — NAO ALTERAR */
int carregarMedicoes(const char *nomeArquivo, int dados[LOCAIS][DIAS]) {
    FILE *arquivo = fopen(nomeArquivo, "r");
    int i, j;
    if (arquivo == NULL) return 0;
    for (i = 0; i < LOCAIS; i++) {
        for (j = 0; j < DIAS; j++) {
            if (fscanf(arquivo, "%d", &dados[i][j]) != 1) {
                fclose(arquivo);
                return 0;
            }
        }
    }
    fclose(arquivo);
    return 1;
}


float calcularMediaLocal(int dados[LOCAIS][DIAS], int local) {
    float soma_local = 0, media_local;

    for (int j = 0; j < DIAS; j++) {
        soma_local += dados[local][j];
    }
    media_local = soma_local / DIAS;
    return media_local;
}

float calcularMediaGeral(int dados[LOCAIS][DIAS]) {
    float soma_geral = 0, media_geral;

    for (int i = 0; i < LOCAIS; i++) {
       for (int j = 0; j < DIAS; j++) {
         soma_geral += dados[i][j];
       }
    }
    media_geral = soma_geral / (DIAS * LOCAIS);
    return media_geral;
}

int contarAlertasLocal(int dados[LOCAIS][DIAS], int local) {
    int alertas = 0;
    for (int j = 0; j < DIAS; j++) {
        if (dados[local][j] >= LIMITE_ALERTA) {
            alertas++;
        }
    }
    return alertas;
}

int encontrarDiaMaisQuente(int dados[LOCAIS][DIAS]) {
    float soma = 0, media_atual, maior_media;
    int indice_maior_media;
    for (int j = 0; j < DIAS; j++) {
        for (int i = 0; i < LOCAIS; i++) {
            soma += dados[i][j];
        }
        media_atual = soma / LOCAIS;
        soma = 0;

        if (j == 0) {
            maior_media = media_atual;
            indice_maior_media = j;
        } else if (media_atual == maior_media) {
            continue;
        } else if (media_atual > maior_media) {
            maior_media = media_atual;
            indice_maior_media = j;
        }
    }
    return ++indice_maior_media;
}

void exibirRelatorio(FILE *destino, int dados[LOCAIS][DIAS]) {
    const char *nomes[LOCAIS] = {"Centro", "Norte", "Sul"};

    int alertas_totais = 0;

    fprintf(destino, "===== ECOMONITOR =====\n");
    fprintf(destino, "Media geral: %.2f C\n", calcularMediaGeral(dados));
    for (int i = 0; i < LOCAIS; i++) {
        int alerta_atual = contarAlertasLocal(dados, i);
    alertas_totais += alerta_atual;
        fprintf(destino, "%s: media %.2f C | alertas: %d\n", nomes[i], calcularMediaLocal(dados, i), alerta_atual);
    }
    fprintf(destino, "Dia com maior media: Dia %d\n", encontrarDiaMaisQuente(dados));
    fprintf(destino, "Total de alertas: %d\n", alertas_totais);
    fprintf(destino, "=======================");
}
