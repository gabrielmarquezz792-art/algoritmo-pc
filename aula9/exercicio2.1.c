#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_CTYPE, "");

    int num, i;
    char rgm[10];
    float nota;
    FILE *arquivo = fopen("notas.txt", "a");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo!\n");
        return 1;
    }

    printf("Digite a quantidade de registros: ");
    scanf("%d", &num);

    for (i = 0; i < num; i++) {
        printf("Digite o RGM: ");
        scanf("%s", rgm);
        printf("Qual a nota do aluno com RGM:%s? ", rgm);
        scanf("%f", &nota);
        fprintf(arquivo, "%s %.1f\n", rgm, nota);
    }
    printf("Arquivo criado ou atualizado com sucesso!");
    fclose(arquivo);

    return 0;
}
