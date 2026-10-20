#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_CTYPE, "");
    FILE *arquivo = fopen("notas.txt", "r");

    int qte_estudantes = 0, alunos_aprovados = 0;
    float num, soma, media, maior_nota = 0;
    char rgm[9];

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo!\n");
        return 1;
    }

    while (fscanf(arquivo, "%9s %f", rgm, &num) != EOF) {
        qte_estudantes++;
        soma += num;

        if (num > maior_nota) {
            maior_nota = num;
        }

        if (num >= 6) {
            alunos_aprovados += 1;
        }
    }

    media = soma / qte_estudantes;

    printf("Estudantes: %d\n", qte_estudantes);
    printf("Média da turma: %.2f\n", media);
    printf("Maior nota: %.2f\n", maior_nota);
    printf("Quantidade de alunos aprovados: %d\n\n",alunos_aprovados);

    fclose(arquivo);
    return 0;
}
