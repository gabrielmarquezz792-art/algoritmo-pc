#include <stdio.h>
#include <locale.h>

float calculaArea(float largura, float comprimento) {
    float area = comprimento * largura;
    return area;
}

int main() {
    setlocale(LC_CTYPE, "");

    float largura, comprimento;
    char resp;

    while (1) {
        printf("Digite a largura (m): ");
        scanf("%f", &largura);

        printf("Digite a comprimento (m): ");
        scanf("%f", &comprimento);

        printf("\n\n¡rea: %.2fm≤", calculaArea(largura, comprimento));

        printf("\nDeseja calcular outra ·rea (s/n)? ");
        scanf(" %c", &resp);
        printf("\n");

        if (resp == 'n' || resp == 'N') {
            break;
        }
    }

    return 0;
}
