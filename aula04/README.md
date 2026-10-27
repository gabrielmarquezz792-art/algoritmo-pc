# Aula 4 - Estruturas de Decisão

## Exercícios de Aplicação

Esta pasta contém exercícios desenvolvidos durante a Aula 4, envolvendo estruturas de decisão, operadores relacionais e lógicos, `if`, `if-else`, decisões aninhadas e `switch-case`.

---

## Exercício 1 - Equação do Segundo Grau

Desenvolva um algoritmo e um programa em C que leia os valores dos coeficientes `a`, `b` e `c` de uma equação do segundo grau:

```text
ax² + bx + c = 0
```

Considere que a equação possui duas raízes reais.

Calcule e exiba os valores de `x1` e `x2` utilizando a fórmula de Bhaskara.

### Exemplo de entrada

```text
Digite o valor de a: 2
Digite o valor de b: 3
Digite o valor de c: -2
```

### Exemplo de saída

```text
Raízes da equação:
x1 = 0.5
x2 = -2
```

---

## Exercício 2 - Situação Acadêmica

Desenvolva um algoritmo e um programa em C que leia as duas notas de um aluno.

Calcule a média aritmética e informe sua situação acadêmica.

O aluno deverá ser considerado:

* Aprovado caso a média seja maior ou igual a `6,0`
* Reprovado caso a média seja menor que `6,0`

### Exemplo de entrada

```text
Digite a primeira nota: 5
Digite a segunda nota: 7
```

### Exemplo de saída

```text
Parabéns! Você foi aprovado com média 6.0
```

---

## Exercício 3 - Aprovação por Nota e Frequência

Desenvolva um algoritmo e um programa em C que leia a média final e o percentual de frequência de um aluno.

Informe a situação acadêmica de acordo com as seguintes regras:

* Frequência inferior a `75%`: Reprovado por falta
* Frequência maior ou igual a `75%` e média inferior a `6,0`: Reprovado por nota
* Nos demais casos: Aprovado

### Exemplo de entrada

```text
Qual a média final do aluno? 7
Qual o percentual de frequência? 70
```

### Exemplo de saída

```text
O aluno foi reprovado por falta
```

---

## Exercício 4 - Classificação do IMC

Desenvolva um programa em C que leia o peso, em quilogramas, e a altura, em metros, de uma pessoa.

Calcule o Índice de Massa Corporal utilizando a fórmula:

```text
IMC = peso / altura²
```

Em seguida, determine a categoria correspondente de acordo com a tabela:

| Categoria      | IMC               |
| -------------- | ----------------- |
| Abaixo do peso | Abaixo de 20,0    |
| Peso normal    | Entre 20,0 e 24,9 |
| Sobrepeso      | Entre 25,0 e 29,9 |
| Obeso          | Entre 30,0 e 39,9 |
| Obeso mórbido  | 40,0 e acima      |

Exiba uma mensagem no formato:

```text
Você está na categoria <categoria>
```

---

## Exercício 5 - Valor da Hospedagem

Desenvolva um programa em C que leia o código correspondente ao tipo de hospedagem e a quantidade de diárias desejada pelo cliente.

Considere as seguintes categorias:

| Tipo    | Código | Valor da diária |
| ------- | ------ | --------------- |
| Simples | `S`    | R$ 300,00       |
| Duplo   | `D`    | R$ 450,00       |
| Triplo  | `T`    | R$ 500,00       |

Calcule e exiba o valor total da hospedagem.

Caso seja informado um código inexistente, exiba:

```text
Tipo inválido!!!
```

### Exemplo de entrada

```text
Qual o tipo de hospedagem (S-D-T)? s
Qual a quantidade de diárias? 3
```

### Exemplo de saída

```text
Valor total a pagar: R$ 900,00
```

---

## Exercício 5.1 - Valor da Hospedagem com `switch-case`

Refaça o exercício anterior utilizando a estrutura `switch-case`.

O programa deve ler o código do tipo de hospedagem e a quantidade de diárias.

Considere:

* Simples (`S`): R$ 300,00
* Duplo (`D`): R$ 450,00
* Triplo (`T`): R$ 500,00

Calcule e exiba o valor total da hospedagem.

Caso seja informado um código inválido, exiba:

```text
Tipo inválido!!!
```

---

## Exercício 6 - Compra Parcelada

Desenvolva um algoritmo e um programa em C que leia o valor total de uma compra e a quantidade de parcelas desejada pelo cliente.

Calcule o valor final da compra aplicando a taxa de juros correspondente.

| Número de parcelas | Juros |
| ------------------ | ----- |
| 2                  | 3%    |
| 4                  | 7%    |
| 6                  | 9%    |
| 8                  | 12%   |

Ao final, exiba:

* O valor total financiado
* O valor de cada parcela

Caso seja informada uma quantidade de parcelas diferente das opções disponíveis, informe que o número de parcelas está incorreto.

---

## Exercício 7 - Tipo de Média

Desenvolva um algoritmo que leia duas notas de um aluno e um caractere indicando o tipo de média que deverá ser calculada.

Considere:

* `A` → Média aritmética
* `P` → Média ponderada

Caso seja escolhida a média ponderada, utilize:

* Peso `3` para a primeira nota
* Peso `7` para a segunda nota

Ao final, exiba o valor da média calculada.

### Exemplo de entrada

```text
Tipo de média (A - P)? P
Digite a primeira nota: 4
Digite a segunda nota: 6
```

### Exemplo de saída

```text
Média calculada: 5.4
```
