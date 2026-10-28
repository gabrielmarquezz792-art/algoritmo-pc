#include <stdio.h>
#include <locale.h>
#include <string.h>

float calcular_media(float primeira_nota, float segunda_nota) {
    float media = (primeira_nota + segunda_nota) / 2;
    return media;
}

void exibir_relatorio(float media) {
    char situacao[10];
    printf("\n\nMédia do aluno: %.2f\n", media);
    if (media >= 7) {
        strcpy(situacao, "Aprovado");
    } else {
        strcpy(situacao, "Reprovado");
    }
    printf("Situação: %s", situacao);
}

int main() {
    setlocale(LC_CTYPE, "");

    float primeira_nota, segunda_nota;
    char resp;

    while (1) {
        printf("Digite a primeira nota: ");
        scanf("%f", &primeira_nota);
        printf("Digite a segunda nota: ");
        scanf("%f", &segunda_nota);

        exibir_relatorio(calcular_media(primeira_nota, segunda_nota));
        printf("\nDeseja digitar notas de outro aluno (s/n)? ");
        scanf(" %c", &resp);
        printf("\n");

        if (resp == 'n' || resp == 'N') {
            break;
        }
    }

    return 0;
}
