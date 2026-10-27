#include <stdio.h>
#include <locale.h>

int main() {

    setlocale(LC_CTYPE, "");
    int i, num = 1;

    while (num > 0) {
        printf("Digite um número inteiro: ");
        scanf("%d", &num);

        printf("Tabuada do %d", num);

        for(i = 0; i <= 10; i++) {
            printf("\n%d * %d = %d", num, i, num * i);
        }
    }
    //printf("\nAgora terminou!!! o i é igual a: %d", --i);

    return 0;
}
