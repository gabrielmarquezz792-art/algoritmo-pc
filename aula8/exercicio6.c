#include <stdio.h>
#include <locale.h>
#define NUM_TEMPERATURAS 7

int main() {
    setlocale(LC_CTYPE, "");

    int i, acima_media = 0;
    float soma = 0, media, maior, menor;
    float temperaturas[NUM_TEMPERATURAS];
    const char *dias_semana[] = {"seg", "ter", "qua", "qui", "sex", "sab", "dom", };

    for (i = 0; i < NUM_TEMPERATURAS; i++) {
        printf("Digite a temperatura da [%s]: ", dias_semana[i]);
        scanf("%f", &temperaturas[i]);
        soma += temperaturas[i];
    }

    media = soma / 7;

    maior = temperaturas[0];
    menor = temperaturas[0];
    for (i = 0; i < NUM_TEMPERATURAS; i++) {
        if (temperaturas[i] > maior) {
            maior = temperaturas[i];
        } else if (temperaturas[i] < menor) {
            menor = temperaturas[i];
        }

        if (temperaturas[i] > media) {
            acima_media += 1;
        }
    }

    printf("\nMédia: %.2f °C", media);
    printf("\nMaior temperatura: %.2f °C", maior);
    printf("\nMenor temperatura: %.2f °C", menor);
    printf("\nDias acima da média: %d\n\n", acima_media);

    return 0;
}
