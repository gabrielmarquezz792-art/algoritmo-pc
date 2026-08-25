#include<stdio.h>
#include<locale.h>


int main() {
    setlocale(LC_CTYPE, "");
    float primeira_nota, segunda_nota, terceira_nota, media_poderada;
    printf("Digite a primeira nota: ");
    scanf("%f", &primeira_nota);
    printf("Digite a segunda nota: ");
    scanf("%f", &segunda_nota);
    printf("Digite a terceira nota: ");
    scanf("%f", &terceira_nota);
    segunda_nota *= 2;
    terceira_nota *= 4;
    media_poderada = (primeira_nota + segunda_nota + terceira_nota) / 7;
    printf("A média ponderada é %.2f.", media_poderada);

    return  0;
}
