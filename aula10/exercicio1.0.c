#include <stdio.h>
#include <locale.h>

float calcular_frete(float peso) {
    float frete = peso * 4.5;

    return frete;
}

int main() {
    setlocale(LC_CTYPE, "");

    float peso;
    char resp;

    while (1) {
        printf("\nDigite o peso (kg): ");
        scanf("%f", &peso);

        printf("Valor do frete: R$ %.2f\n", calcular_frete(peso));

        printf("Deseja calcular outro frete (s/n)? ");
        scanf(" %c", &resp);

        if (resp == 'n' || resp == 'N') {
            break;
        }
    }

    return 0;
}
