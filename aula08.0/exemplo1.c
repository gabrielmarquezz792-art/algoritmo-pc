#include <stdio.h>
#include <locale.h>
#define TAM 5

int main() {
    setlocale(LC_CTYPE, "");

    int i, contador = 0, achei_maior;
    float salarios[TAM];
    float soma = 0, media, maior_salario;

    for (i = 0; i < TAM; i++) {
        printf("Digite o salário do funcinário %d: ", (i + 1));
        scanf("%f", &salarios[i]);
        soma += salarios[i];
    }

    media = soma / TAM;
    maior_salario = salarios[0];
    achei_maior = 1;
    for (i = 0; i < TAM; i++) {
        if (salarios[i] > media)
            contador++; // Conta os salários acima da média
        if (salarios[i] > maior_salario) {
            maior_salario = salarios[i]; // Verifica o maior salário
            achei_maior = i + 1; // Índice do maior salário
        }
    }

    printf("Média dos salários: R$ %.2f\n", media);
    printf("Quantidade de salários acima da média: %d\n", contador);
    printf("Maior salário funcionário %d: R$ %.2f\n", achei_maior, maior_salario);
    return 0;
}
