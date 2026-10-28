# Aula 10 - Funções e Modularização

## Atividade rápida - Planejando funções (sem código)

Qual função você criaria para cada problema abaixo? Pense antes de escrever código: **nome**, **parâmetros** e **tipo de retorno**.

| Problema | Entrada | Saída |
|---|---|---|
| 1. Converter Celsius para Fahrenheit | temperatura | temperatura convertida |
| 2. Mostrar um menu | nenhuma | nenhuma |
| 3. Determinar o maior entre dois valores | dois inteiros | maior inteiro |

---

## Exercício 1 - Cálculo de Frete

Uma transportadora calcula o valor do frete considerando o peso do pacote. Para determinado serviço, são cobrados R$ 4,50 por quilograma. Como esse cálculo será realizado muitas vezes pelo sistema, a regra deve ser implementada em uma função.

Desenvolva um programa em C que leia o peso do pacote e utilize a função:

```c
float calcular_frete(float peso);
```

para calcular e retornar o valor do frete.

### Exemplo de entrada

    Digite o peso (kg): 8.5

### Exemplo de saída

    Valor do frete: R$ 38.25
    Deseja calcular outro frete (s/n)?

### Atenção

- O programa deve permitir calcular quantos fretes o usuário precisar (repetir enquanto a resposta for `s`).
- A regra de cálculo deve ficar **somente dentro da função**.

---

## Exercício 1 (continuação) - Relatório do Frete

Retome o Exercício 1 e crie uma **função sem retorno** (`void`) para exibir o relatório.

### Atenção

- Funções sem retorno utilizam `void`.
- A função apenas **executa uma ação** (exibir o relatório); o cálculo continua na função `calcular_frete()`.

---

## Exercício 2 - Troca de Valores

Durante determinados processamentos, um programa precisa reorganizar valores. Uma operação fundamental consiste em trocar o conteúdo de duas variáveis.

Crie a função que receba os dois valores e troque seus conteúdos.

### Exemplo de entrada

    Digite o valor de a: 10
    Digite o valor de b: 20

### Exemplo de saída

    Antes: a=10 b=20
    Depois: a= 20 b=10

### Atenção

- Neste caso é preciso utilizar **ponteiros** para alterar o valor das variáveis.
- Em C, todos os argumentos são passados **por valor**.

---

## Exercício 3 - Média e Situação do Aluno

Uma escola precisa de um sistema que auxilie os professores a calcular a média de notas dos alunos e determinar automaticamente se cada aluno está aprovado ou reprovado. Para ser aprovado, o aluno deve ter uma média igual ou superior a 7.

Desenvolva um programa em C que:

- solicite duas notas de um aluno;
- calcule a média;
- informe o resultado, utilizando funções;
- permita que o programa seja executado enquanto o usuário possuir notas a serem digitadas.

### Exemplo de entrada

    Digite a primeira nota: 7
    Digite a segunda nota: 3

### Exemplo de saída

    Média do aluno: 5.0
    Situação: Reprovado
    Deseja digitar notas de outro aluno (s/n)?

### Atenção

- Aprovado: média **maior ou igual a 7**.
- Sugestão: dividir o programa em funções (por exemplo, uma para calcular a média e outra para determinar a situação).

---

## Exercício 4 - Área de Ambientes

Uma empresa de climatização precisa calcular frequentemente a área de ambientes retangulares para estimar a quantidade de piso necessária. Como esse cálculo será reutilizado diversas vezes, decidiu-se implementá-lo em uma função.

Desenvolva um programa em C que:

- leia a largura (em metros);
- leia o comprimento (em metros);
- utilize uma função `calcularArea()` para calcular a área;
- exiba o resultado;
- permita calcular quantas áreas o usuário precisar.

### Exemplo de entrada

    Digite a largura (m): 4.5
    Digite o comprimento (m): 8

### Exemplo de saída

    Área: 36.0 m²
    Deseja calcular outra área (s/n)?

---

## Exercício 5 - Struct Aluno

Um sistema acadêmico precisa armazenar o RGM e duas notas de um estudante e calcular sua média.

Crie uma estrutura `Aluno` contendo:

- `rgm`
- `nota1`
- `nota2`
- `media`

Implemente:

```c
void calcular_media(Aluno *aluno);
```

A função deverá atualizar o campo `media`.

### Exemplo de entrada

    RGM: 123456
    Nota 1: 7.0
    Nota 2: 9.0

### Exemplo de saída

    RGM: 123456
    Média: 8.00

### Atenção

- A função recebe o **endereço** da estrutura e atualiza o campo `media` diretamente.
- Com ponteiro para struct, os campos são acessados com `->`.

---

## Exercício 6 - Vetor de Alunos

Um sistema acadêmico precisa armazenar o RGM e duas notas de um estudante e calcular sua média.

O programa deverá armazenar os dados de **3 alunos** em um **vetor de estruturas**. Para cada aluno:

- leia o RGM;
- leia a primeira nota;
- leia a segunda nota;
- calcule a média utilizando a função:

```c
void calcular_media(Aluno *aluno);
```

A função deverá receber o endereço da estrutura correspondente ao aluno e atualizar o campo `media`.

Depois de cadastrar todos os alunos, o programa deverá solicitar um **RGM para consulta** e exibir (caso encontrado) o RGM e a média. Caso contrário, deverá exibir uma mensagem de erro.

### Atenção

- A consulta deve percorrer o vetor comparando o RGM digitado com o RGM de cada aluno.
- Se nenhum aluno tiver o RGM informado, exiba uma mensagem de erro.

---

## Exercício 7 - Desafio: Sistema Acadêmico com Menu

O sistema acadêmico precisa permitir que o usuário cadastre alunos e faça consultas sem precisar encerrar e executar novamente o programa. Para isso, será utilizado um menu.

Crie um programa que apresente continuamente o seguinte menu:

    ===== SISTEMA ACADÊMICO =====

    1 - Cadastrar aluno
    2 - Consultar aluno por RGM
    3 - Listar alunos
    4 - Sair

    Escolha uma opção:

O programa deverá armazenar **até 10 alunos** e utilizar funções para cadastro, consulta, listagem de alunos e cálculo da média.

### Funções sugeridas

Para aumentar ainda mais a modularização, vamos criar as seguintes funções:

```c
void calcular_media(Aluno *aluno);
void cadastrar_aluno(Aluno alunos[], int *quantidade);
void consultar_aluno(Aluno alunos[], int quantidade);
void listar_alunos(Aluno alunos[], int quantidade);
```

### Atenção

- Em parâmetros de função, arrays já são tratados essencialmente como ponteiros para seus elementos. Poderíamos utilizar também `(Aluno *alunos, int *quantidade)`.
- O menu deve se repetir até que a opção 4 (Sair) seja escolhida.
