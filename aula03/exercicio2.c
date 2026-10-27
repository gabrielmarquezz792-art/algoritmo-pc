#include<stdio.h>
#include<locale.h>


int main() {
    setlocale(LC_CTYPE, "");
    int horas, minutos, total;
    printf("Hora? ");
    scanf("%d", &horas);
    printf("Minutos? ");
    scanf("%d", &minutos);
    total = (horas * 60) + minutos;
    printf("Já se passaram %d minutos desde o início do dia.", total);
    return  0;
}
