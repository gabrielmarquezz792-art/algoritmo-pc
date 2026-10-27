#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_CTYPE, "");

    int qte_alunos = 10, qte_aprovados = 0;
    float nota_atual;

    for (int i = 1; i <= qte_alunos; i++) {
        printf("Digite a nota do %dº aluno: ", i);
        scanf("%f", &nota_atual);

        if (nota_atual > 10 || nota_atual < 0) {
            continue;
        }

        if (nota_atual >= 6) {
            qte_aprovados += 1;
        }
    }

    printf("\nAlunos aprovados: %d\n", qte_aprovados);

    return 0;
}
