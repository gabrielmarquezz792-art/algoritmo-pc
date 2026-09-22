#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_CTYPE, "");
    float nota, media, soma = 0, maior_nota = 0;

    for(int i = 1 ; i <= 5; i++) {
        printf("Digite a nota do %d° estudante: ", i);
        scanf("%f", &nota);
        soma += nota;
        if (nota > maior_nota) {
            maior_nota = nota;
        }
    }

    media = soma / 5;

    printf("\n\nMédia da turma: %.2f", media);
    printf("\nMaior nota: %.2f", maior_nota);

    return 0;
}
