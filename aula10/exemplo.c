#include <stdio.h>
#include <locale.h>

float calcular_area(float base, float altura) {
    return base * altura;
}

int main() {
    setlocale(LC_CTYPE, "");

    float base, altura, area;

    base = 5;
    altura = 6;

    printf("A área do retângulo é: %.1f cm²\n", calcular_area(base, altura));


    printf("A área do retângulo é: %.1f cm²\n", calcular_area(2, 7.8));

     printf("A área do retângulo é: %.1f cm²\n", calcular_area(3, 8));

      printf("A área do retângulo é: %.1f cm²\n", calcular_area(8, 9));

    return 0;
}
