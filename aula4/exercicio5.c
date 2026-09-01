#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_CTYPE, "");
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

    if (opcao == 's' || opcao == 'S') {
        printf("Total a pagar R$ %.2f", (num_diarias * 300));
    } else if (opcao == 'd' || opcao == 'D') {
        printf("Total a pagar R$ %.2f", (num_diarias * 450));
    } else if (opcao == 't' || opcao == 'T') {
        printf("Total a pagar R$ %.2f", (num_diarias * 600));
    } else {
        printf("Opção inválida!!!!!");
    }
    return 0;
}
