# Enunciados - Aula 7: Exercícios de Aplicação (Estruturas de Repetição)

Enunciados dos exercícios de revisão sobre estruturas de repetição, retirados do material da Aula 07. Para cada um, analisar os dados de entrada, os processamentos necessários, as condições envolvidas e escolher a estrutura de repetição mais adequada (`for`, `while` ou `do...while`).

### Exercício 1

Durante a análise de um conjunto de dados numéricos, é necessário identificar algumas características básicas dos valores registrados, como a quantidade de valores positivos e negativos e o maior valor encontrado.

Desenvolva um programa em C que leia inicialmente a **quantidade de valores** que será analisada e, em seguida, leia os respectivos números reais. Ao final, o programa deverá apresentar:

- quantidade de valores positivos;
- quantidade de valores negativos;
- maior valor informado.

Considere o valor 0 como neutro, não devendo ser contabilizado como positivo nem negativo. Utilize a estrutura de repetição que considerar mais adequada.

### Exercício 2

Uma pequena loja registra, ao final de cada dia, o valor total obtido com as vendas. Para acompanhar o desempenho semanal, o responsável deseja conhecer o valor acumulado das vendas realizadas durante os sete dias da semana.

Desenvolva um programa em C que leia o valor das vendas de cada um dos 7 dias e apresente o total vendido na semana.

Utilize a estrutura de repetição que considerar mais adequada.

### Exercício 3

Ao final de uma avaliação, um professor deseja obter rapidamente a quantidade de estudantes que alcançaram a média mínima estabelecida para aprovação. Considere que a turma possui 10 alunos e que uma nota igual ou superior a 6.0 é considerada suficiente para aprovação.

Desenvolva um programa em C que leia a nota dos 10 alunos e apresente a quantidade de estudantes que obtiveram nota igual ou superior a 6.0.

Utilize a estrutura de repetição que considerar mais adequada.

### Exercício 4

Um órgão regional de monitoramento climático registrou a temperatura média de cinco municípios. A partir desses dados, deseja-se produzir um relatório resumido sobre as condições observadas na região.

Desenvolva um programa em C que leia o nome e a temperatura média de cada um dos cinco municípios e apresente:

- temperatura média da região;
- quantidade de municípios cuja temperatura média seja inferior a 10 °C.

Para simplificar a entrada de dados, considere nomes de municípios sem espaços. A leitura do nome pode ser feita sem o operador `&` antes da variável, por exemplo:

```c
char municipio[50];
scanf("%49s", municipio);
```
