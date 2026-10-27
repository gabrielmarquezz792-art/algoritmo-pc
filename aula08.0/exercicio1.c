#include <stdio.h>
#include <locale.h>
#define TAM 4

int main() {
    setlocale(LC_CTYPE, "");

    int i;
    float salarios[TAM];

    for (i = 0; i < TAM; i++) {
        printf("Digite o salário do funcinário %d: ", (i + 1));
        scanf("%f", &salarios[i]);
    }

    printf("\n");

    for (i = 0; i < TAM; i++) {
        printf("Funcinário %d: R$ %.2f\n", (i + 1), salarios[i]);
    }

    return 0;
}
