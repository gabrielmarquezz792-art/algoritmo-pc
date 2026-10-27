#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_CTYPE, "Portuguese");
    float nota1, nota2, media;
    char tipo_media;

    printf("Digite o tipo de média (A para Aritmética, P para Ponderada): ");
    scanf(" %c", &tipo_media);

    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    switch (tipo_media) {
        case 'A':
        case 'a':
            media = (nota1 + nota2) / 2;
            printf("Média Aritmética: %.2f\n", media);
            break;

        case 'P':
        case 'p':
            media = ((nota1 * 3) + (nota2 * 7)) / 10;
            printf("Média Ponderada: %.2f\n", media);
            break;

        default:
            printf("Opção de média inválida!\n");
            break;
    }

    return 0;
}
