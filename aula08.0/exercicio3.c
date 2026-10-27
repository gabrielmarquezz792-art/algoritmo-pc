#include <stdio.h>
#include <locale.h>
#define TAM 6

int main() {
    setlocale(LC_CTYPE, "Portuguese");

    int i, qte_abaixo_media = 0;
    float media, salarios[TAM], soma = 0, maior_salario;

    for (i = 0; i < TAM; i++) {
        printf("Digite o salário do %dº funcionário: ", i + 1);
        scanf("%f", &salarios[i]);
    }

    maior_salario = salarios[0];

    for (i = 0; i < TAM; i++) {
        soma += salarios[i];
        if (salarios[i] > maior_salario) {
            maior_salario = salarios[i];
        }
    }

    media = soma / TAM;

    for (i = 0; i < TAM; i++) {
        if (salarios[i] < media) {
            qte_abaixo_media += 1;
        }
    }

    printf("\nMédia salarial: R$ %.2f", media);
    printf("\nMaior salário: R$ %.2f", maior_salario);
    printf("\nSalários abaixo da média: %d\n\n", qte_abaixo_media);

    return 0;
}
