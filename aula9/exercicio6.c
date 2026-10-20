#include <stdio.h>
#include <locale.h>

#include <stdlib.h> // Para limpar a tela

int main() {
    setlocale(LC_CTYPE, "");

    int menu = 1, opcao, mes;
    float consumo;

    while (menu) {
        printf("1- Cadastrar consumo\n");
        printf("2- Exibir relatório\n");
        printf("3- Sair\n");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                system("cls"); // Para limpar a tela
                printf("Digite o número do mês: ");
                scanf("%d", &mes);
                printf("Digite o consumo do mês %d em kWh: ", mes);
                scanf("%f", &consumo);

                FILE *arquivo_adicionar = fopen("energia.txt", "a");
                if (arquivo_adicionar == NULL) {
                    printf("Erro ao abrir o arquivo.\n");
                    return 1;
                }

                fprintf(arquivo_adicionar, "%d %.2f\n", mes, consumo);

                fclose(arquivo_adicionar);
                system("cls"); // Para limpar a tela
                break;
            case 2: {
                FILE *arquivo_ler = fopen("energia.txt", "r");
                if (arquivo_ler == NULL) {
                    printf("Nenhum registro cadastrado ainda.\n\n");
                    break;
                }

                int contador = 0, mes_caro = 0, mes_barato = 0;
                float soma = 0, media, maior_valor = 0, menor_valor = 0;

                while (fscanf(arquivo_ler, "%d %f", &mes, &consumo) != EOF) {
                    if (contador == 0) {
                        maior_valor = consumo;
                        menor_valor = consumo;
                        mes_caro = mes;
                        mes_barato = mes;
                    }
                    contador++;
                    soma += consumo;

                    if (consumo > maior_valor) {
                        maior_valor = consumo;
                        mes_caro = mes;
                    } else if (consumo < menor_valor) {
                        menor_valor = consumo;
                        mes_barato = mes;
                    }
                }
                fclose(arquivo_ler);

                if (contador == 0) {
                    printf("Nenhum registro cadastrado ainda.\n\n");
                } else {
                    media = soma / contador;

                    printf("\nQuantidade de meses: %d\n", contador);
                    printf("O mês mais caro foi %d e o consumo foi: %.2f\n", mes_caro, maior_valor);
                    printf("O mês mais barato foi %d e o consumo foi: %.2f\n", mes_barato, menor_valor);
                    printf("Média de consumo: %.2f\n\n", media);
                }
                break;
            }
            case 3:
                system("cls"); // Para limpar a tela
                printf("Programa encerrado.\n\n");
                menu = 0;
                break;
            default:
                printf("ERRO! Valor inválido, tente novamente.\n\n");
        }
    }

    return 0;
}
