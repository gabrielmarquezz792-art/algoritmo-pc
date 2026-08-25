## Exercício 1 — Total de produtos recebidos no dia

**Contexto:** Um centro de distribuição recebe mercadorias em dois turnos diariamente. Ao final do expediente, é necessário calcular o total de produtos recebidos para atualizar o estoque do dia.

**Enunciado:** Desenvolva um programa em C que: (i) leia a quantidade de produtos recebidos no turno da manhã e a quantidade de produtos recebidos no turno da tarde; (ii) calcule o total de produtos recebidos; (iii) exiba o resultado.

**Entrada:**
```
Quantidade recebida pela manhã? 185
Quantidade recebida à tarde? 237
```

**Saída:**
```
Total de produtos recebidos no dia: 422
```

---

## Exercício 2 — Conversão de horário para minutos

**Contexto:** Diversos sistemas computacionais armazenam horários em minutos para facilitar cálculos de duração, agendamentos e controle de atividades. Para isso, é necessário converter um horário convencional (horas e minutos) para a quantidade total de minutos transcorridos desde o início do dia.

**Enunciado:** Desenvolva um programa em C que: (i) leia a hora e os minutos de um determinado horário; (ii) calcule quantos minutos se passaram desde as 00h00; (iii) exiba o resultado.

**Entrada:**
```
Hora? 14
Minutos? 35
```

**Saída:**
```
Já se passaram 875 minutos desde o início do dia.
```

---

## Exercício 3 — Operações aritméticas entre dois números

**Contexto:** Uma calculadora utilizada em um ambiente educacional apresenta aos estudantes os principais resultados das operações aritméticas entre dois números inteiros, permitindo comparar diferentes operações de forma rápida.

**Enunciado:** Desenvolva um programa em C que: (i) leia dois números inteiros; (ii) calcule a soma, a subtração do primeiro pelo segundo e a multiplicação entre eles; (iii) exiba os resultados.

**Entrada:**
```
Digite o primeiro número: 18
Digite o segundo número: 7
```

**Saída:**
```
Soma: 25
Subtração: 11
Multiplicação: 126
```

---

## Exercício 4 — Consumo mensal de energia

**Contexto:** Uma empresa deseja estimar o consumo mensal de energia de um equipamento. Para isso, basta conhecer a potência do equipamento (em watts) e a quantidade de horas de funcionamento por dia. Considere que o equipamento funciona durante 30 dias no mês.

**Enunciado:** Desenvolva um programa em C que: leia a potência do equipamento (em watts) e a quantidade de horas de funcionamento por dia; calcule o consumo mensal em quilowatt-hora (kWh), utilizando a fórmula:

```
consumo = (potencia * horas_dia * 30) / 1000
```

Exiba o consumo mensal com duas casas decimais.

**Entrada:**
```
Potência do equipamento (W)? 750
Horas de uso por dia? 5
```

**Saída:**
```
Consumo mensal: 112.50 kWh
```

---

## Exercício 5 — Índice de Massa Corporal (IMC)

**Contexto:** Em clínicas, academias e aplicativos de acompanhamento físico, o Índice de Massa Corporal (IMC) é utilizado como uma medida inicial para relacionar o peso de uma pessoa com sua altura.

**Enunciado:** Desenvolva um programa em C que: (i) leia o peso de uma pessoa, em quilogramas, e a altura, em metros; (ii) calcule o IMC utilizando a fórmula:

```
IMC = peso / altura²
```

(iii) exiba o IMC com duas casas decimais.

**Entrada:**
```
Qual é o peso da pessoa em kg? 72.00
Qual é a altura da pessoa em metros? 1.75
```

**Saída:**
```
O Índice de Massa Corporal é 23.51 kg/m².
```

---

## Exercício 6 — Caixas de piso cerâmico necessárias

**Contexto:** Uma loja especializada em pisos cerâmicos precisa calcular quantas caixas serão necessárias para revestir uma área. Como cada caixa cobre uma quantidade fixa de metros quadrados, a loja deve considerar sempre uma caixa inteira, mesmo quando a divisão não resultar em um número exato.

**Enunciado:** Desenvolva um programa em C que: (i) leia a largura e o comprimento da área a ser revestida e o valor unitário da caixa de piso escolhido pelo cliente; (ii) calcule a área total a ser revestida, a quantidade de caixas necessárias (considerando que cada caixa cobre 2.5 m²) e o custo total da compra; (iii) exiba a quantidade de caixas e o custo total com duas casas decimais.

**Entrada:**
```
Qual é a largura da área (em metros)? 6.8
Qual é o comprimento da área em metros? 4.3
Qual é o valor de cada caixa? 80
```

**Saída:**
```
Área total a ser revestida: 29.24 m²
Quantidade de caixas necessárias: 12
Custo total da compra: R$ 960.00
```

---

## Exercício 7 — Média aritmética de quatro valores

**Contexto:** Em um aplicativo educacional, quatro resultados de atividades precisam ser reunidos em um único indicador. Para isso, o sistema calcula a média aritmética dos valores informados.

**Enunciado:** Desenvolva um programa em C que: (i) leia quatro números reais; (ii) calcule a média aritmética utilizando a fórmula:

```
media = (num1 + num2 + num3 + num4) / 4
```

(iii) exiba o resultado com duas casas decimais.

**Entrada:**
```
Digite o primeiro valor: 7.50
Digite o segundo valor: 8.00
Digite o terceiro valor: 6.50
Digite o quarto valor: 9.00
```

**Saída:**
```
A média aritmética é 7.75.
```

---

## Exercício 8 — Média ponderada de três notas

**Contexto:** Em uma disciplina, as avaliações possuem níveis diferentes de importância. Por essa razão, a nota final não é calculada por uma média simples, mas por uma média ponderada. A primeira avaliação possui peso 1, a segunda peso 2 e a terceira peso 4.

**Enunciado:** Desenvolva um programa em C que: (i) leia três notas; (ii) calcule a média ponderada, considerando os pesos 1, 2 e 4; (iii) exiba o resultado com duas casas decimais. Utilize a fórmula:

```
media = (nota1 * 1 + nota2 * 2 + nota3 * 4) / (1 + 2 + 4)
```

**Entrada:**
```
Digite a primeira nota: 7.00
Digite a segunda nota: 8.00
Digite a terceira nota: 9.00
```

**Saída:**
```
A média ponderada é 8.43.
```

---

## Exercício 9 — Distância euclidiana entre dois pontos

**Contexto:** Sistemas de mapas, jogos digitais, aplicações de engenharia e programas de computação gráfica precisam calcular a distância entre diferentes posições. Em um plano cartesiano, cada posição pode ser representada por um par de coordenadas.

**Enunciado:** Desenvolva um programa em C que: (i) leia as coordenadas (x1, y1) e (x2, y2) de dois pontos; (ii) calcule e exiba a distância entre eles usando a fórmula da distância euclidiana:

```
d = raiz( (x2 - x1)² + (y2 - y1)² )
```

**Entrada:**
```
Digite a coordenada x do 1º ponto: 1.00
Digite a coordenada y do 1º ponto: 2.00
Digite a coordenada x do 2º ponto: 4.00
Digite a coordenada y do 2º ponto: 6.00
```

**Saída:**
```
A distância entre os pontos é 5.00.
```

---

## Exercício 10 — Alcance horizontal de um lançamento

**Contexto:** Em jogos digitais, simuladores e aplicações de física, a distância horizontal percorrida por um objeto lançado depende da velocidade inicial, do ângulo do lançamento e da aceleração da gravidade. Esse cálculo pode ser usado para determinar o alcance de uma bola, projétil ou personagem.

**Enunciado:** Desenvolva um programa em C que: (i) leia a velocidade inicial do lançamento, em metros por segundo, e o ângulo de lançamento, em graus; (ii) converta o ângulo para radianos; (iii) calcule e exiba o alcance horizontal com duas casas decimais. Utilize a fórmula:

```
alcance = (velocidade² * sen(2 * angulo)) / gravidade
```

**Entrada:**
```
Qual a velocidade inicial (m/s): 20.00
Qual o ângulo de lançamento em graus: 45.00
```

**Saída:**
```
O alcance horizontal estimado é 40.82 metros.
```
