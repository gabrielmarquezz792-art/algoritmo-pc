#include<stdio.h>
#include<locale.h>
#define PI 3.141

int main(){
    setlocale(LC_CTYPE, "");
    float raio, perimetro;
    printf("Qual a medida do raio (em cm)? ");
    scanf("%f", &raio);
    perimetro = (float) (2 * PI * raio);
    printf("O perímetro da circunferência é %.2f", perimetro);
    return 0;
}
