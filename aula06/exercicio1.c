#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_CTYPE, "");
    long long int cpf;
    float preco = 1, total_compra = 0;

    printf("CPF: ");
    scanf("%lld", &cpf);

    while(preco > 0) {
        printf("Preço: ");
        scanf("%f", &preco);
        total_compra += preco;
    }

    printf("\n\nCPF: %lld", cpf);
    printf("\nTotal da compra: R$ %.2f", total_compra);

    return 0;
}
