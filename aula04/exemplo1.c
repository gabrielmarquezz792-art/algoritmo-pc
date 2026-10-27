#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_CTYPE, "");
    int num1;

    printf("Digite um número: ");
    scanf("%d", &num1);

    if (num1 % 2 == 0 && num1 % 5 == 0) {
        printf("O número %d é múltiplo de 2 e 5\n", num1);
    } else {
        printf("O número %d é ímpar\n", num1);
    }

    return 0;
}
