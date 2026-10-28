#include <stdio.h>
#include <locale.h>

typedef struct {
    int rgm;
    float nota1;
    float nota2;
    float media;
} Aluno;

void calcular_media(Aluno *aluno);

int main() {
    setlocale(LC_CTYPE, "");

    Aluno aluno1;

    printf("RGM: ");
    scanf("%d", &aluno1.rgm);

    printf("Nota 1: ");
    scanf("%f", &aluno1.nota1);

    printf("Nota 2: ");
    scanf("%f", &aluno1.nota2);

    calcular_media(&aluno1);

    printf("\n\nRGM: %d\n", aluno1.rgm);
    printf("Média: %.2f\n\n", aluno1.media);

    return 0;
}

void calcular_media(Aluno *aluno) {
    aluno -> media = (aluno -> nota1 + aluno -> nota2) / 2;
}
