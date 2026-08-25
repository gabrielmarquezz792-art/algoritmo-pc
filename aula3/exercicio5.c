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
    printf("O Índice de Massa Corporal é %.2f kg/m².", imc);
    return  0;
}
