#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_CTYPE, "");

    int num = 1, soma_impares = 0;

    while (num > 0) {
        printf("Digite um número: ");
        scanf("%d", &num);
        if (num % 2 != 0) {
            soma_impares += num;
        }
    }

    printf("Soma dos números ímpares: %d", soma_impares);

    return 0;
}
