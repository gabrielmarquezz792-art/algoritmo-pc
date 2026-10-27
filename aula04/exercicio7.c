#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_CTYPE, "");

    float nota1, nota2, media;
    char tipo_media;

    printf("Digite o tipo de média (A para Aritmética, P para Ponderada): ");
    scanf(" %c", &tipo_media);

    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    if (tipo_media == 'A' || tipo_media == 'a') {
        media = (nota1 + nota2) / 2;
        printf("Média Aritmética: %.2f\n", media);
    }
    else if (tipo_media == 'P' || tipo_media == 'p') {
        media = ((nota1 * 3) + (nota2 * 7)) / (3 + 7);
        printf("Média Ponderada: %.2f\n", media);
    }
    else {
        printf("Opção de média inválida!\n");
    }

    return 0;
}
