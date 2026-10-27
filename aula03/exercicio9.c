#include<stdio.h>
#include<locale.h>
#include<math.h>


int main() {
    setlocale(LC_CTYPE, "");
    float x1, x2, y1, y2, distancia;
    printf("Digite a coordenada x do 1º ponto: ");
    scanf("%f", &x1);
    printf("Digite a coordenada y do 1º ponto: ");
    scanf("%f", &y1);
    printf("Digite a coordenada x do 2º ponto: ");
    scanf("%f", &x2);
    printf("Digite a coordenada y do 2º ponto: ");
    scanf("%f", &y2);
    distancia = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    printf("A distância entre os pontos é %.2f.", distancia);

    return  0;
}
