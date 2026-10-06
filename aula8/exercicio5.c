#include <stdio.h>
#include <locale.h>

#define NUM_ESTUDANTES 3
#define NUM_NOTAS 4

int main() {
    setlocale(LC_CTYPE, "");

    int i, j;
    float notas[NUM_ESTUDANTES][NUM_NOTAS];
    float medias[NUM_ESTUDANTES];
    float soma;
    float maior_media = -1.0;
    int estudante_maior_media = 0;

    for (i = 0; i < NUM_ESTUDANTES; i++) {
        soma = 0;

        for (j = 0; j < NUM_NOTAS; j++) {
            printf("Digite a %dª nota do %d° estudante: ", j + 1, i + 1);
            scanf("%f", &notas[i][j]);
            soma += notas[i][j];
        }

        medias[i] = soma / NUM_NOTAS;

        if (medias[i] > maior_media) {
            maior_media = medias[i];
            estudante_maior_media = i + 1;
        }

        printf("\n");
    }

    for (i = 0; i < NUM_ESTUDANTES; i++) {
        printf("Média do estudante %d: %.2f\n", i + 1, medias[i]);
    }

    printf("\nMaior média: estudante %d - %.2f\n", estudante_maior_media, maior_media);

    return 0;
}
