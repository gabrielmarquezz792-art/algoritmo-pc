# Aula 8 - Estruturas de Dados Básicas: Vetores e Matrizes

## Exercício 1 - Registro de Salários de Funcionários

O setor administrativo de uma pequena empresa precisa registrar o salário de quatro funcionários para gerar uma conferência dos dados cadastrados.

Desenvolva um programa em C que:

- leia o salário de 4 funcionários;
- armazene os valores em um vetor;
- exiba os salários na mesma ordem em que foram digitados.

### Exemplo de entrada

    Digite o salário do 1° funcionário: 1500
    Digite o salário do 2° funcionário: 3500
    Digite o salário do 3° funcionário: 2600
    Digite o salário do 4° funcionário: 3100

### Exemplo de saída

    Funcionário 1: R$ 1500.00
    Funcionário 2: R$ 3500.00
    Funcionário 3: R$ 2600.00
    Funcionário 4: R$ 3100.00

---

## Exercício 2 - Média e Valores Acima da Média

Um sistema de monitoramento registra oito medições de desempenho de um equipamento ao longo do dia. O analista deseja identificar o comportamento geral dessas medições.

Desenvolva um programa em C que:

- leia 8 valores reais e armazene-os em um vetor;
- calcule a média dos valores;
- determine quantos valores ficaram acima da média.

### Exemplo de entrada

    Digite o x° valor:
    Ex.: 6 8 5 9 7 10 4 7

### Exemplo de saída

    Média: 7.00
    Valores acima da média: 3

---

## Exercício 3 - Indicadores Salariais do Setor

Uma empresa deseja obter indicadores rápidos sobre os salários de um pequeno setor para apoiar uma análise interna.

Desenvolva um programa em C que leia e armazene os salários de 6 funcionários e, depois:

1. calcule a média salarial;
2. determine o maior salário;
3. conte quantos salários estão abaixo da média.

### Exemplo de entrada

    Digite o salário do x° funcionário:
    Ex.: 1800 2500 2200 3100 1500 2700

### Exemplo de saída

    Média salarial: R$ 2300.00
    Maior salário: R$ 3100.00
    Salários abaixo da média: 3

---

## Exercício 4 - Vendas da Cafeteria Universitária

Uma cafeteria universitária acompanha a quantidade vendida de três produtos durante quatro dias. Cada linha representa um produto e cada coluna representa um dia.

Desenvolva um programa em C que:

- leia as vendas de 3 produtos durante 4 dias;
- calcule o total vendido de cada produto;
- calcule o total geral de itens vendidos.

### Exemplo de entrada

    Digite a qte do x° produto no y° dia:
    Ex.: 10 12 9 11
         8 7 10 9
         5 6 4 7

### Exemplo de saída

    Produto 1: 42 unidades
    Produto 2: 34 unidades
    Produto 3: 22 unidades
    Total geral: 98 unidades

---

## Desafio - Cafeteria com Vetores de Nomes

Crie um vetor para os dias da semana e outro para os produtos e personalize o exercício anterior (Exercício 4), exibindo o nome do produto e do dia nas mensagens em vez de apenas números.

### Exemplo de vetores

    const char *produtos[] = {"café", "coxinha", "bolo"};
    const char *dias_semana[] = {"seg", "ter", "qua"};

### Exemplo de entrada

    Digite a qte de cafés vendidos na seg: 10
    Digite a qte de cafés vendidos na ter: 5
    ...
    Digite a qte de bolos vendidos na qua: 6

### Exemplo de saída

    Cafés: 42 unidades
    Bolos: 34 unidades
    Coxinhas: 22 unidades
    Total geral: 98 unidades

### Atenção

- Uma variável comum guarda um valor. Um ponteiro (`*`) guarda um endereço.
- Em C, `&` obtém o endereço de uma variável e `*` acessa o valor armazenado nesse endereço.

---

## Exercício 5 - Médias dos Estudantes

Uma disciplina registra quatro avaliações para três estudantes. A coordenação deseja calcular a média individual e identificar o estudante com maior média.

Desenvolva um programa em C que:

- leia as 4 notas de 3 estudantes;
- calcule e exiba a média de cada estudante;
- identifique o estudante com a maior média.

### Exemplo de entrada

    Digite a xª nota do y° estudante:
    Ex.: 8 7 9 6
         6 5 7 8
         9 8 10 9

### Exemplo de saída

    Média do estudante 1: 7.50
    Média do estudante 2: 6.50
    Média do estudante 3: 9.00
    Maior média: estudante 3 - 9.00

---

## Exercício 6 - Temperaturas da Semana

Uma estação meteorológica registra a temperatura máxima de cada dia de uma semana.

Leia 7 temperaturas e armazene-as em um vetor. Calcule:

- a média semanal;
- a maior temperatura;
- a menor temperatura;
- quantos dias ficaram acima da média.

### Exemplo de entrada

    Digite a temperatura da [seg]:
    Ex.: 25 27 26 30 28 24 29

### Exemplo de saída

    Média: 27.00 °C
    Maior temperatura: 30.00 °C
    Menor temperatura: 24.00 °C
    Dias acima da média: 3
