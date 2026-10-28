#include <stdio.h>
#include <locale.h>
#define ALUNOS 3

typedef struct {
    int rgm;
    float nota1;
    float nota2;
    float media;
} Aluno;

void calcular_media(Aluno *aluno) {
    aluno -> media = (aluno -> nota1 + aluno -> nota2) / 2;
}

int main() {
    setlocale(LC_CTYPE, "");

    Aluno alunos[ALUNOS];
    char resp;
    int consultar_rgm, i;

    for (i = 0; i < ALUNOS; i++) {
            printf("Digite o RGM do aluno %d: ", i + 1);
            scanf("%d", &alunos[i].rgm);

            printf("Digite a primeira nota do aluno %d: ", i + 1);
            scanf("%f", &alunos[i].nota1);

             printf("Digite a segunda nota do aluno %d: ", i + 1);
            scanf("%f", &alunos[i].nota2);
            printf("\n");

            calcular_media(&alunos[i]);
    }

    while (1) {
        printf("Digite um RGM para consultar: ");
        scanf("%d", &consultar_rgm);

        for (i = 0; i < ALUNOS; i++) {
            if (consultar_rgm == alunos[i].rgm) {
                printf("\nRGM: %d", alunos[i].rgm);
                printf("\nMédia: %.2f\n", alunos[i].media);
                break;
            } else if (i == ALUNOS - 1) {
                printf("\n\nRGM inválido! Tente novamente.\n");
            }
        }

        printf("Quer continuar consultando (s/n)? ");
        scanf(" %c", &resp);

        if (resp == 's' || resp == 'S') {
            printf("\n");
        }

        if (resp == 'n' || resp == 'N') {
            printf("\n\n");
            break;
        }
    }

    return 0;
}
