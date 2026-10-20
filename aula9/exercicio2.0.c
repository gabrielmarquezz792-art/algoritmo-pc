#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_CTYPE, "");

    int num, i;
    char dia_semana[4];
    float consumo;
    FILE *arquivo = fopen("consumo.txt", "a");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo!\n");
        return 1;
    }

    printf("Digite a quantidade de registros: ");
    scanf("%d", &num);

    for (i = 0; i < num; i++) {
        printf("Digite o dia da semana (Ex.: seg): ");
        scanf("%s", dia_semana);
        printf("Qual o consumo da %s: ", dia_semana);
        scanf("%f", &consumo);
        fprintf(arquivo, "%s %.1f\n", dia_semana, consumo);
    }
    printf("Arquivo criado ou atualizado com sucesso!");
    fclose(arquivo);

    return 0;
}
