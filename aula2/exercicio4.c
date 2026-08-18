#include<stdio.h>
#include<locale.h>

int main() {
    setlocale(LC_CTYPE, "");
    float massa, litros, mililitros;
    printf("Digite a massa corporal (em kg): ");
    scanf("%f", &massa);
    mililitros = massa * 35;
    litros = mililitros / 1000;
    printf("A quantidade de água recomendada por dia: %.1f litros", litros);
    return 0;
}
