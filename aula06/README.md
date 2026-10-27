# Aula 6 - Estruturas de Repetição

## Exercício 1 - Total de Compra no Supermercado

Desenvolva um algoritmo e um programa em C que leia o CPF do cliente e, em seguida, os preços dos produtos adquiridos. A entrada dos produtos deverá continuar até que seja informado o valor 0, indicando o encerramento da compra. Ao final, apresente o CPF do cliente e o valor total da compra.

### Exemplo de entrada

    CPF: 12345678901
    Preço: 12.50
    Preço: 8.90
    Preço: 5.60
    Preço: 0

### Exemplo de saída

    CPF: 12345678901
    Total da compra: R$ 27.00

---

## Exercício 2 - Média e Maior Nota da Turma

Desenvolva um algoritmo e um programa em C que leia as notas de 5 estudantes, calcule a média da turma e determine a maior nota obtida.

### Exemplo de entrada

    Digite a nota do 1º estudante: 7.0
    Digite a nota do 2º estudante: 8.5
    Digite a nota do 3º estudante: 6.0
    Digite a nota do 4º estudante: 9.0
    Digite a nota do 5º estudante: 5.5

### Exemplo de saída

    Média da turma: 7.20
    Maior nota: 9.00

---

## Exercício 3 - Soma dos Números Ímpares

Desenvolva um programa em C que leia números inteiros e some somente os valores ímpares. O número 0 deverá indicar o encerramento da entrada de dados. Ao final, apresente a soma dos números ímpares informados.

### Exemplo de entrada

    Digite um número: 5
    Digite um número: 8
    Digite um número: 3
    Digite um número: 10
    Digite um número: 7
    Digite um número: 0

### Exemplo de saída

    Soma dos números ímpares: 15

---

## Exercício 4 - Validação de Notas da Turma

Desenvolva um algoritmo e um programa em C que inicialmente leia a quantidade de alunos da turma. Para cada estudante, solicite sua nota. Caso seja informado um valor menor que 0 ou maior que 10, o programa deverá solicitar uma nova nota e somente prosseguir quando um valor válido for fornecido. Ao final, calcule e apresente a média da turma.

### Exemplo de entrada

    Quantidade de alunos: 3
    Nota 1: 8.0
    Nota 2: 12.0
    Nota inválida!
    Digite novamente: 7.0
    Nota 3: 6.0

### Exemplo de saída

    Média da turma: 7.00

---

## Exercício 5 - Controle de Tentativas de Login

Desenvolva um algoritmo e um programa em C que solicite o número da conta e a senha do cliente. Considere como credenciais válidas a conta 12345 e a senha 123. O usuário poderá realizar no máximo três tentativas. O programa deverá encerrar imediatamente quando as credenciais corretas forem fornecidas ou bloquear o acesso após a terceira tentativa incorreta. Utilize `do...while`.

### Exemplo de entrada

    Conta: 12345
    Senha: 111
    Conta: 12345
    Senha: 222
    Conta: 12345
    Senha: 123

### Exemplo de saída

    Acesso autorizado.

---

## Exercício 6 - Terminal de Autoatendimento (Cafeteria Anália)

Desenvolva um algoritmo e um programa em C que apresente o cardápio abaixo e permita ao cliente adicionar produtos informando seus códigos. Após cada produto válido, apresente o subtotal do pedido. O código 0 deverá finalizar a compra e apresentar o valor total. Utilize `do...while`.

    Cafeteria Anália

    [1] X-Burger (R$ 18,90)
    [2] Batata frita (R$ 9,50)
    [3] Suco (R$ 10,00)
    [4] Pudim (R$ 12,00)
    [5] Sair

    Digite uma opção:

### Exemplo de entrada

    Digite uma opção: 1
    Digite uma opção: 3
    Digite uma opção: 2
    Digite uma opção: 0

### Exemplo de saída

    Subtotal: R$ 18.00
    Subtotal: R$ 25.00
    Subtotal: R$ 37.00
    Total do pedido: R$ 37.00
