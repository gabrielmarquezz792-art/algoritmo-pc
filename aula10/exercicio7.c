#include <stdio.h>
#include <locale.h>

void calcular_media(Aluno *aluno);

void cadastrar_aluno(Aluno alunos[], int *quantidade);

void consultar_aluno(Aluno alunos[], int quantidade);

void listar_alunos(Aluno alunos[], int quantidade);

int main() {
    setlocale(LC_CTYPE, "");

    int menu = 1;

    while (menu) {
        printf("===== SISTEMA ACADÊMICO =====\n\n");
        printf("1 - Cadastrar aluno");
        printf("2 - ");
        ;
        ;
    }

    return 0;
}
