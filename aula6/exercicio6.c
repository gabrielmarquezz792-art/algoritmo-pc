#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_CTYPE, "");
    printf("Cafeteria Anália\n\n");
    printf("[1] X-Burger (R$ 18,90)\n");
    printf("[2] Batata frita (R$ 9,50)\n");
    printf("[3] Suco (R$ 10,00)\n");
    printf("[4] Pudim (R$ 12,00)\n");
    printf("[5] Sair\n");
    printf("\nDigite uma opção: ");

    return 0;
}
