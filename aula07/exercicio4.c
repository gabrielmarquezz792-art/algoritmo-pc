#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_CTYPE, "");

    int qte_municipios_menos_dez = 0;
    float temperatura_atual, soma_temperaturas = 0, media_temperaturas;
    char municipio[50];

    for (int i = 1; i <= 5; i++) {
        printf("\nDigite o nome do município: ");
        scanf("%49s", municipio);

        printf("Digite a temperatura média em %s: ", municipio);
        scanf("%f", &temperatura_atual);

        soma_temperaturas += temperatura_atual;

        if (temperatura_atual < 10) {
            qte_municipios_menos_dez += 1;
        }
    }

    media_temperaturas = soma_temperaturas / 5;

    printf("\nA temperatura média da região foi: %.2f\n", media_temperaturas);
    printf("Quantidades de municipios com média menor que 10ºC: %d\n", qte_municipios_menos_dez);

    return 0;
}
