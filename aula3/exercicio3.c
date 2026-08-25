#include<stdio.h>
#include<locale.h>


int main() {
    setlocale(LC_ALL, "");
    int primeiro_numero, segundo_numero, soma, subtracao, multiplicacao;
    printf("Digite o primeiro número: ");
    scanf("%d", &primeiro_numero);
    printf("Digite o segundo número: ");
    scanf("%d", &segundo_numero);
    soma = primeiro_numero + segundo_numero;
    subtracao = primeiro_numero - segundo_numero;
    multiplicacao = primeiro_numero * segundo_numero;
    printf("Soma: %d\nSubtração: %d\nMultiplicação: %d",
           soma, subtracao, multiplicacao);
    return  0;
}
