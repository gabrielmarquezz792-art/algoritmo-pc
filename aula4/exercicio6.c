#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_CTYPE, "");
    float valor_total_compra, valor_total_financiado, valor_parcela;
    int numero_parcelas;

    printf("Digite o valor total da compra: ");
    scanf("%f", &valor_total_compra);
    printf("Digite o total de parcelas (2, 4, 6 e 8): ");
    scanf("%d", &numero_parcelas);

    if (numero_parcelas == 2) {
        valor_total_financiado = valor_total_compra * 1.03;
    } else if (numero_parcelas == 4) {
        valor_total_financiado = valor_total_compra * 1.07;
    } else if (numero_parcelas == 6) {
        valor_total_financiado = valor_total_compra * 1.09;
    } else if (numero_parcelas == 8) {
        valor_total_financiado = valor_total_compra * 1.12;
    }

    valor_parcela = valor_total_financiado / numero_parcelas;

    printf("O valor total financiado é de %.2f com parcelas de %.2f", valor_total_financiado, valor_parcela);

    return 0;
}
