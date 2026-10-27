#include <stdio.h>
#include <locale.h>

void trocar(int *a, int *b) {
    int auxiliar;
    printf("\n\nAntes: a= %d b= %d\n", *a, *b);
    auxiliar = *a;
    *a = *b;
    *b = auxiliar;
    printf("Depois: a= %d b= %d\n\n", *a, *b);
}

int main() {
    setlocale(LC_CTYPE, "");
    int a, b;

    printf("Digite o valor de a: ");
    scanf("%d", &a);

    printf("Digite o valor de b: ");
    scanf("%d", &b);

    trocar(&a, &b); // Passagem por referência (endereço)

    return 0;
}
