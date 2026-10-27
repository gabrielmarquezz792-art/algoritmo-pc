#include<stdio.h>
#include<locale.h>


int main() {
    setlocale(LC_CTYPE, "");
    float primeiro_valor, segundo_valor, terceiro_valor, quarto_valor, media_aritmetica;
    printf("Digite o primeiro valor: ");
    scanf("%f", &primeiro_valor);
    printf("Digite o segundo valor: ");
    scanf("%f", &segundo_valor);
    printf("Digite o terceiro valor: ");
    scanf("%f", &terceiro_valor);
    printf("Digite o quarto valor: ");
    scanf("%f", &quarto_valor);
    media_aritmetica = (primeiro_valor + segundo_valor + terceiro_valor + quarto_valor) / 4;
    printf("A média aritmética é %.2f.", media_aritmetica);
    return  0;
}
