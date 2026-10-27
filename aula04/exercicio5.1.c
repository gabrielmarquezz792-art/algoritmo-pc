#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_CTYPE, "Portuguese");
    char opcao;
    float num_diarias;

    printf("Hospedagem Anália\n");
    printf("[S] Quarto Simples\n");
    printf("[D] Quarto Duplo\n");
    printf("[T] Quarto Triplo\n");
    printf("Digite uma opção: ");
    scanf(" %c", &opcao);

    printf("Qual a quantidade de diárias: ");
    scanf("%f", &num_diarias);

    switch (opcao) {
        case 'S':
        case 's':
            printf("Total a pagar R$ %.2f\n", (num_diarias * 300));
            break;

        case 'D':
        case 'd':
            printf("Total a pagar R$ %.2f\n", (num_diarias * 450));
            break;

        case 'T':
        case 't':
            printf("Total a pagar R$ %.2f\n", (num_diarias * 600));
            break;

        default:
            printf("Opção inválida!!!!!\n");
            break;
    }

    return 0;
}
