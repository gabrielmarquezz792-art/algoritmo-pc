#include<stdio.h>
#include<locale.h>
#include<math.h>


int main() {
    setlocale(LC_CTYPE, "");
    float velocidade, angulo_graus, alcance_horizontal, gravidade, angulo_radianos;
    gravidade = 9.8;
    printf("Qual a velocidade inicial (m/s):\n");
    scanf("%f", &velocidade);
    printf("Qual o ângulo de lançamento em graus: ");
    scanf("%f", &angulo_graus);
    angulo_radianos = (3.14 / 180) * angulo_graus;
    alcance_horizontal = pow(velocidade, 2) * sin(2 * angulo_radianos) / gravidade;
    printf("O alcance horizontal estimado é %.2f metros.", alcance_horizontal);

    return  0;
}
