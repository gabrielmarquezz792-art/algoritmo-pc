#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_CTYPE, "");

    float valor_diario, valor_semanal = 0;

    for (int i = 1; i <= 7; i++) {
        printf("Digite o valor do %dº dia: ", i);
        scanf("%f", &valor_diario);

        valor_semanal += valor_diario;
    }

    printf("Valor total vendido na semana: %.2f\n", valor_semanal);

    return 0;
}
