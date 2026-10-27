#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_CTYPE, "");
    float nota1, nota2, media_aritmetica;

    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    media_aritmetica = (nota1 + nota2) / 2;

    if (media_aritmetica >= 6) {
        printf("Parabéns! Você foi aprovado com média %.2f", media_aritmetica);
    } else if (media_aritmetica >= 3) {
        printf("Você está de exame com média %.2f", media_aritmetica);
    } else {
        printf("Que pena! Você foi reprovado com média %.2f", media_aritmetica);
    }

    return 0;
}
