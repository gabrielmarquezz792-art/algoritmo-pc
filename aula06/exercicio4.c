#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_CTYPE, "");
    int qte_alunos;
    float nota, soma = 0, media;

    printf("Quantidade de alunos: ");
    scanf("%d", &qte_alunos);

    printf("\n");
    for (int i = 1; i <= qte_alunos; i++) {
        printf("Nota %d: ", i);
        scanf("%f", &nota);

        while (nota > 10 || nota < 0) {
            printf("Nota inválida");
            printf("\nDigite novamente: ");
            scanf("%f", &nota);
        }
        soma += nota;
        media = soma / i;
    }

    printf("\nMédia da turma: %.2f", media);

    return 0;
}
