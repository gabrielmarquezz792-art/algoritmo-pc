#include<stdio.h>
#include<locale.h>


int main() {
    setlocale(LC_CTYPE, "");
    int potencia, horas_dia;
    float consumo_mensal;

    printf("Potência do equipamento (W)?\n");
    scanf("%d", &potencia);
    printf("Horas de uso por dia?\n");
    scanf("%d", &horas_dia);
    consumo_mensal = (float) (potencia * horas_dia * 30) / 1000;
    printf("Consumo mensal: %.2f kWh", consumo_mensal);
    return  0;
}
