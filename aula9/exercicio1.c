#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_CTYPE, "");

    int num, i;
    FILE *arquivo = fopen("tabuada.txt", "a");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo!\n");
        return 1;
    }

    printf("Digite um número inteiro: ");
    scanf("%d", &num);

    fprintf(arquivo, "Tabuada do %d\n", num);
    for (i = 0; i < 11; i++) {
        fprintf(arquivo, "%d * %d = %d\n", num, i, i * num);
    }
    printf("Arquivo criado ou atualizado com sucesso!");
    fclose(arquivo);

    return 0;
}
