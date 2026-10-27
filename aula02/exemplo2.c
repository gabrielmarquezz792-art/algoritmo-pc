#include<stdio.h>
#include<locale.h>

int main() {
    setlocale(LC_CTYPE, "");

    int quantidade;
    float preco_unitario, valor_final;

    printf("Qual a quantidades de cafés? ");
    scanf("%d", &quantidade);
    printf("Qual o preço unitário? R$");
    scanf("%f", &preco_unitario);
    valor_final = quantidade * preco_unitario;
    printf("Total a pagar: R$ %.2f", valor_final);
    return 0;
}
