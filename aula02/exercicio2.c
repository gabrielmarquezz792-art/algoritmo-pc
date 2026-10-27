#include<stdio.h>
#include<locale.h>

int main() {
    setlocale(LC_CTYPE, "");
    float comprimento, largura, perimetro, area;
    printf("Qual o comprimento do jardim (m)? ");
    scanf("%f", &comprimento);
    printf("Qual a largura do jardim (m)? ");
    scanf("%f", &largura);
    perimetro = (float) (comprimento + largura) * 2;
    area = (float) (comprimento * largura);
    printf("Perímetro do jardim: %.2f m", perimetro);
    printf("\nÁrea do jardim: %.2f m²", area);
    return 0;
}
