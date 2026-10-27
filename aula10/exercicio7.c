#include <stdio.h>
#include <locale.h>
#define ALUNOS 10

typedef struct {
    char nome[20];
    int rgm;
    float nota1;
    float nota2;
    float media;
} Aluno;

void calcular_media(Aluno *aluno);

void cadastrar_aluno(Aluno alunos[], int *quantidade);

void consultar_aluno(Aluno alunos[], int quantidade);

void listar_alunos(Aluno alunos[], int quantidade);

int main() {
    setlocale(LC_CTYPE, "");
    Aluno alunos[ALUNOS];
    int menu = 1, opcao, quantidade = 0;

    while (menu) {
        printf("===== SISTEMA ACADÊMICO =====\n\n");
        printf("1 - Cadastrar aluno\n");
        printf("2 - Consultar aluno por RGM\n");
        printf("3 - Listar\n");
        printf("4 - Sair\n");
        printf("\nEscolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                cadastrar_aluno(alunos, &quantidade);
                break;
            case 2:
                consultar_aluno(alunos, quantidade);
                break;
            case 3:
                listar_alunos(alunos, quantidade);
                break;
            case 4:
                printf("Programa encerrado.\n\n");
                menu = 0;
                break;
            default:
                printf("ERRO! Valor inválido, tente novamente.\n\n");
        }
    }
    return 0;
}

void calcular_media(Aluno *aluno) {
    aluno->media = (aluno->nota1 + aluno->nota2) / 2;
}

void cadastrar_aluno(Aluno alunos[], int *quantidade) {
    if (*quantidade >= ALUNOS) {
        printf("Quantidade de alunos máxima atingida!\n\n");
        return;
    }
    printf("Digite o nome do aluno: ");
    scanf(" %[^\n]", alunos[*quantidade].nome);
    printf("Digite o RGM do aluno: ");
    scanf("%d", &alunos[*quantidade].rgm);
    printf("Digite a primeira nota do aluno: ");
    scanf("%f", &alunos[*quantidade].nota1);
    printf("Digite a segunda nota do aluno: ");
    scanf("%f", &alunos[*quantidade].nota2);

    calcular_media(&alunos[*quantidade]);
    (*quantidade)++;
    printf("\nAluno cadastrado com sucesso!\n\n");
}

void consultar_aluno(Aluno alunos[], int quantidade) {
    if (quantidade == 0) {
        printf("Nenhum aluno cadastrado ainda.\n\n");
        return;
    }

    int consultar_rgm;
    int encontrado = 0;

    printf("Digite um RGM para consultar: ");
    scanf("%d", &consultar_rgm);

    for (int i = 0; i < quantidade; i++) {
        if (consultar_rgm == alunos[i].rgm) {
            printf("\n--- Aluno Encontrado ---\n");
            printf("Nome: %s\n", alunos[i].nome);
            printf("RGM: %d\n", alunos[i].rgm);
            printf("Média: %.2f\n", alunos[i].media);
            printf("-----------------------\n\n");
            encontrado = 1;
            break;
        }
    }

    if (!encontrado) {
        printf("\nRGM inválido ou não encontrado!\n\n");
    }
}

void listar_alunos(Aluno alunos[], int quantidade) {
    if (quantidade == 0) {
        printf("Nenhum aluno cadastrado para listar.\n\n");
        return;
    }

    printf("\n===== LISTA DE ALUNOS =====\n");
    for (int i = 0; i < quantidade; i++) {
        printf("%d. Nome: %s | RGM: %d | Média: %.2f\n", i + 1, alunos[i].nome, alunos[i].rgm, alunos[i].media);
    }
    printf("===========================\n\n");
}
