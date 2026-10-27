#include<stdio.h>
#include<locale.h>
#include<math.h>


int main() {
    setlocale(LC_CTYPE, "");
    float largura, comprimento, valor, area, custo;
    int quantidade;
    printf("Qual é a largura da área (em metros)? ");
    scanf("%f", &largura);
    printf("Qual é a comprimento da área (em metros)? ");
    scanf("%f", &comprimento);
    printf("Qual é o valor de cada caixa? ");
    scanf("%f", &valor);
    area = largura * comprimento;
    quantidade = ceil(area / 2.5);
    custo = quantidade * valor;
    printf("Área total a ser revestida: %.2f m²\n", area);
    printf("Quantidade de caixas necessárias: %d\n,", quantidade);
    printf("Custo total de compra: R$ %.2f\n", custo);
    return  0;
}
