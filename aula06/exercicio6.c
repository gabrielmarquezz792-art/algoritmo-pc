#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_CTYPE, "");
    int opcao, rodando = 1;
    float subtotal = 0;

    do {
        printf("Cafeteria Anália\n\n");
        printf("[1] X-Burger (R$ 18,90)\n");
        printf("[2] Batata frita (R$ 9,50)\n");
        printf("[3] Suco (R$ 10,00)\n");
        printf("[4] Pudim (R$ 12,00)\n");
        printf("[5] Sair\n");
        printf("\nDigite uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                subtotal += 18.90;
                printf("Subtotal: R$ %.2f\n\n", subtotal);
                break;
            case 2:
                subtotal += 9.50;
                printf("Subtotal: R$ %.2f\n\n", subtotal);
                break;
            case 3:
                subtotal += 10.00;
                printf("Subtotal: R$ %.2f\n\n", subtotal);
                break;
            case 4:
                subtotal += 12.00;
                printf("Subtotal: R$ %.2f\n\n", subtotal);
                break;
            case 0:
            case 5:
                printf("\n\nTotal do pedido: R$ %.2f\n\n", subtotal);
                rodando = 0;
                break;
            default:
                printf("Valor incorreto, tente novamente\n\n");
        }
    } while (rodando);

    return 0;
}
