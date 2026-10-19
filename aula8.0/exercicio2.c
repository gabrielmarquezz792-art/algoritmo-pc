#include <stdio.h>
#include <locale.h>
#define TAM 8

int main() {
    setlocale(LC_CTYPE, "");
    int valores[TAM], i, soma = 0, acima_media = 0;
    float media;

    // Captura dos valores dentro do for
    for (i = 0; i < TAM; i++) {
        printf("Digite o %d° valor: ", i + 1);
        scanf("%d", &valores[i]);
    }

    for (i = 0; i < TAM; i++) {
        soma += valores[i];
    }

    media = (float)soma / TAM;

    for (i = 0; i < TAM; i++) {
        if (valores[i] > media) {
            acima_media += 1;
        }
    }

    printf("\nMédia: %.2f", media);
    printf("\nValores acima da média: %d\n\n", acima_media);

    return 0;
}
