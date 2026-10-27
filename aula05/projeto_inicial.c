#include <stdio.h>
#include <math.h>
#include <locale.h>


int main(void) {
    setlocale(LC_CTYPE, "");

    // Variáveis de Entradas
    int qte_participantes, qte_jogadores_por_time, qte_computadores;
    float potencia, duracao, preco_kwh;
    float preco_kit, outros_custos, orcamento;

    // Variáveis de Processamento
    int qte_times;
    float consumo_energia, custo_energia;
    float custo_alimentacao, custo_total;
    float custo_por_participante, saldo;

    int infraestrutura, tipo_consumo;

    // Entrada de dados
    printf("Digite a quantidade total de participantes: ");
    scanf("%d", &qte_participantes);

    printf("Digite a quantidade de jogadores por time: ");
    scanf("%d", &qte_jogadores_por_time);

    printf("Digite a quantidade de computadores disponíveis: ");
    scanf("%d", &qte_computadores);

    printf("Digite a potência média de cada computador (em W): ");
    scanf("%f", &potencia);

    printf("Digite a duração do evento (em horas): ");
    scanf("%f", &duracao);

    printf("Digite o preço de 1 kWh de energia (em R$): ");
    scanf("%f", &preco_kwh);

    printf("Digite o preço de 1 kit de alimentação por participante (em R$): ");
    scanf("%f", &preco_kit);

    printf("Digite outros custos do evento (em R$): ");
    scanf("%f", &outros_custos);

    printf("Digite o orçamento máximo disponível para o evento (em R$): ");
    scanf("%f", &orcamento);

    // Cálculos
    qte_times = ceil(qte_participantes / qte_jogadores_por_time);

    consumo_energia = (qte_computadores * potencia * duracao)/1000;

    custo_energia = consumo_energia * preco_kwh;

    custo_alimentacao = qte_participantes * preco_kit;

    custo_total = custo_energia + custo_alimentacao + outros_custos;

    custo_por_participante = custo_total / qte_participantes;

    saldo = orcamento - custo_total;

    // Relatorio geral
    printf("\n\n============== ARENA TECH ==============\n");
    printf("Participantes: %d\n", qte_participantes);
    printf("Times necessários: %d\n", qte_times);
    printf("Computadores disponíveis: %d\n", qte_computadores);

    // Analise da infraestrutura
    if (qte_computadores >= qte_participantes) {
        printf("Infraestrutura: SUFICIENTE");
        infraestrutura = 1;
    } else if (qte_computadores < qte_participantes) {
         printf("Infraestrutura: INSUFICIENTE");
         infraestrutura = 0;
    }

    printf("\n\nConsumo estimado: %.2f", consumo_energia);

    if (consumo_energia <= 20) {
        printf("\nClassificação do consumo: BAIXO");
        tipo_consumo = 0;
    } else if (consumo_energia <= 40) {
        printf("\nClassificação do consumo: MODERADO");
        tipo_consumo = 1;
    } else if (consumo_energia > 40) {
        printf("\nClassificação do consumo: ALTO");
        tipo_consumo = 2;
    }

    printf("\nCusto da energia: R$ %.2f\n", custo_energia);

    printf("Custo da alimentação: R$ %.2f\n", custo_alimentacao);

    printf("Outros custos: R$ %.2f\n", outros_custos);

    printf("CUSTO TOTAL: R$ %.2f\n", custo_total);

    printf("CUSTO POR PARTICIPANTE: R$ %.2f\n",custo_por_participante);

    printf("\n\nOrçamento disponível: R$ %.2f\n", orcamento);

    printf("Saldo: R$ %.2f\n", saldo);

    if (custo_total > orcamento) {
        printf("Situação do orçamento: ACIMA DO ORÇAMENTO");
    } else if (custo_total <= orcamento && saldo <= (orcamento * 0.05)) {
        printf("Situação do orçamento: NO LIMITE DO ORÇAMENTO");
    } else {
        printf("Situação do orçamento: DENTRO DO ORÇAMENTO");
    }

    if (infraestrutura == 0 || custo_total > orcamento) {
        printf("\nDECISÃO FINAL: NÃO RECOMENDADO");
    } else if (infraestrutura == 1 && custo_total <= orcamento && tipo_consumo == 2) {
        printf("\nDECISÃO FINAL: APROVADO COM RESSALVAS");
    } else if (infraestrutura == 1 && custo_total <= orcamento) {
        printf("\nDECISÃO FINAL: APROVADO");
    }

    printf("\n=======================================\n\n");
    return 0;
}
