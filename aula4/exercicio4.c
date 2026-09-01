#include<stdio.h>
#include<locale.h>
#include<math.h>

int main() {
    setlocale(LC_CTYPE, "");
    float imc, peso, altura;

    printf("Qual é o peso da pessoa em kg?\n");
    scanf("%f", &peso);
    printf("Qual é a altura da pessoa em metros?\n");
    scanf("%f", &altura);

    imc = peso / pow(altura, 2);
    if (imc < 20) {
        printf("Abaixo do peso\nImc: %.2f kg/m²", imc);
    } else if (imc < 25) {
        printf("Peso normal\nImc: %.2f kg/m²", imc);
    } else if (imc < 30) {
        printf("Sobrepeso\nImc: %.2f kg/m²", imc);
    } else if (imc < 40) {
        printf("Obeso\nImc: %.2f kg/m²", imc);
    } else {
       printf("Obeso mórbido\nImc: %.2f kg/m²", imc);
    }

    return  0;
}
