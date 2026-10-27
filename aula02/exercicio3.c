#include<stdio.h>
#include<locale.h>

int main(){
    setlocale(LC_CTYPE, "");
    float dias, meses, semanas;
    printf("Qual a quantidade de semanas na gestação? ");
    scanf("%f", &semanas);
    dias = semanas * 7;
    meses = dias / 30;
    printf("Tempo de gestação aproximado:\n%.2f meses", meses);
    return 0;
}
