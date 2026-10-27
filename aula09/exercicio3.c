#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_CTYPE, "");

    char linha[100];
    FILE *arquivo = fopen("tabuada.txt", "r");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo!\n");
        return 1;
    }

    while (fgets(linha, sizeof(linha), arquivo)) {
        printf("%s", linha);
    }

    fclose(arquivo);
    return 0;
}
