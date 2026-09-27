#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_CTYPE, "");

    // Variáveis
    int codigo_cadete, etapa, pontuacao, pontuacao_total, continuar;
    float media;

    // Do While para fazer quantos cadetes o usuário quiser
    do {
        printf("===== MISSÃO ORBITAL =====\n");
        printf("Código do cadete: ");
        scanf("%d", &codigo_cadete);
        printf("\n");

        pontuacao_total = 0;

        // For para fazer exatamente 3 etapas por cadete
        for (etapa = 1; etapa <= 3; etapa++) {
            // While para só aceitar valores de 0 a 100
            while (1) {
                printf("Pontuação da etapa %d: ", etapa);
                scanf("%d", &pontuacao);
                if (pontuacao >= 0 && pontuacao <= 100) {
                    break;
                }
            }
            pontuacao_total += pontuacao;
        }

        media = pontuacao_total / 3.0;

        // Relatório
        printf("\n------------- RESULTADO -------------\n");
        printf("Cadete: %d\n", codigo_cadete);
        printf("Pontuação total: %d pontos\n", pontuacao_total);

        if (pontuacao_total == 300)
            printf("PONTUAÇÃO MÁXIMA\n");

        printf("Média: %.2f\n", media);

        if (media >= 85.0) {
            printf("CLASSIFICAÇÃO: COMANDANTE DA MISSÃO\n");
            printf("TREINAMENTO CONCLUÍDO COM EXCELÊNCIA.\n");
        } else if (media >= 70.0) {
            printf("CLASSIFICAÇÃO: PILOTO APROVADO\n");
            printf("CADETE AUTORIZADO PARA A MISSÃO.\n");
        } else if (media >= 50.0) {
            printf("CLASSIFICAÇÃO: CADETE EM RECUPERAÇÃO\n");
            printf("NOVO TREINAMENTO RECOMENDADO.\n");
        } else {
            printf("CLASSIFICAÇÃO: TREINAMENTO REINICIADO\n");
            printf("CADETE AINDA NÃO AUTORIZADO.\n");
        }

        printf("-------------------------------------\n");
        printf("Avaliar outro cadete? 1-Sim | 0-Não: ");
        scanf("%d", &continuar);
    } while (continuar);

    printf("Sistema encerrado.\n");
    return 0;
}
