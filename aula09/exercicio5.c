#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_CTYPE, "");

    FILE *arquivo = fopen("vendas.txt", "r");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo!\n");
        return 1;
    }
    int cod_venda, contador = 0;
    float valor_venda, maior_valor = 0, total = 0;

    while (fscanf(arquivo, "%d %f", &cod_venda, &valor_venda) != EOF) {
        contador++;
        total += valor_venda;

        if (valor_venda > maior_valor) {
            maior_valor = valor_venda;
        }
    }

    printf("Quantidade de vendas: %d\n", contador);
    printf("Total vendido: R$ %.2f\n", total);
    printf("Maior venda: R$ %.2f\n\n", maior_valor);

    fclose(arquivo);
    return 0;
}
