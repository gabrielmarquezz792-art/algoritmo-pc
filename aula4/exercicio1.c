#include <stdio.h>
#include <locale.h>
#include <math.h>

int main() {
    setlocale(LC_CTYPE, "");
    float a, b, c, x1, x2, delta;

    printf("Digite o valor de a: ");
    scanf("%f", &a);
    printf("Digite o valor de b: ");
    scanf("%f", &b);
    printf("Digite o valor de c: ");
    scanf("%f", &c);

    delta = pow(b, 2) - (4 * a * c);
    if (delta <= -1) {
        printf("Não existem raízes para essa equação");
    } else if (delta == 0) {
        x1 = (-b + sqrt(delta)) / (2 * a);

        printf("Raíz da equação:\nx1 = %.2f", x1);
    } else {
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);

        printf("Raízes da equação:\nx1 = %.2f\nx2 = %.2f\n", x1, x2);
    }
    return 0;
}
