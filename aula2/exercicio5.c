#include<stdio.h>
#include<locale.h>

int main() {
    setlocale(LC_CTYPE, "");
    float nota1, nota2, media;
    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);
    media = (nota1 + nota2) / 2;
    printf("Média aritmética: %.2f", media);
    return 0;
}
