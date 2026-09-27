#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_CTYPE, "");

    int qte_valores, qte_positivos = 0, qte_negativos = 0, maior_valor = 0, atual_valor;

    printf("Digite a quantidade de valores: ");
    scanf("%d", &qte_valores);

    for(int i = 1; i <= qte_valores; i++) {
        printf("Digite o %dº valor: ", i);
        scanf("%d", &atual_valor);

        if (atual_valor > 0) {
            qte_positivos++;
        } else if (atual_valor < 0) {
            qte_negativos++;
        }

        if (atual_valor > maior_valor) {
            maior_valor = atual_valor;
        }
    }

    printf("\nQuantidade de valores positivos: %d\n", qte_positivos);
    printf("Quantidade de valores negativos: %d\n", qte_negativos);
    printf("Maior valor: %d\n", maior_valor);

    return 0;
}
