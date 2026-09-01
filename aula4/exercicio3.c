#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_CTYPE, "");
    float media_final, percentual_frequencia;
    printf("Qual a média final do aluno? ");
    scanf("%f", &media_final);
    printf("Qual a frequência do aluno? ");
    scanf("%f", &percentual_frequencia);

    if (percentual_frequencia < 75) {
        printf("Reprovado por falta!\n");
    } else if (media_final < 6) {
        printf("Reprovado por nota!\n");
    } else {
        printf("Aprovado!!!");
    }

    return 0;
}
