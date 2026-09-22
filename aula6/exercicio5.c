#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_CTYPE, "");

    int conta_valida = 12345, senha_valida = 123, senha, conta;
    int tentativas = 3, i = 1;

    do {
        printf("Tentativa %d/%d", i, tentativas);
        printf("\nConta: ");
        scanf("%d", &conta);
        printf("Senha: ");
        scanf("%d", &senha);

        if (conta == conta_valida && senha == senha_valida) {
            printf("\nAcesso autorizado.");
            break;
        } else if (i == tentativas) {
            printf("\nAcesso negado.");
        }

        printf("\n\n");
        i++;
    } while (i <= tentativas);

    return 0;
}
