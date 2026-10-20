# Aula 9 - Manipulação de Arquivos

## Exercício 1 - Tabuada em Arquivo

Um estudante quer gerar uma tabuada e consultá-la depois, mesmo após encerrar o programa.

Desenvolva um algoritmo e um programa em C que:

- leia um número inteiro;
- grave em um arquivo chamado `tabuada.txt` as multiplicações desse número de 0 a 10.

### Exemplo de entrada

    Digite um número inteiro: 7

### Exemplo de saída (conteúdo de `tabuada.txt`)

    7 x 0 = 0
    7 x 1 = 7
    7 x 2 = 14
    [...]
    7 x 9 = 63
    7 x 10 = 70

### Atenção

- O arquivo deve ter **11 linhas**.
- Use o modo `"w"`: cada execução deve gerar uma nova tabuada, substituindo a anterior.

---

## Exercício 2 - Histórico de Consumo de Água

Um aplicativo mantém o histórico do consumo semanal de água de uma residência. Como o arquivo pode conter registros anteriores, os novos dados devem ser acrescentados sem apagar as informações já armazenadas.

Desenvolva um algoritmo e um programa em C que:

- leia a quantidade de registros que serão cadastrados;
- para cada registro, leia o dia da semana e o consumo de água em litros;
- acrescente os dados ao arquivo `consumo.txt`, utilizando uma linha para cada registro.

### Exemplo de entrada

    Dia: seg
    Consumo: 3.5
    Dia: ter
    Consumo: 7.8
    Dia: qua
    Consumo: 9.25

### Exemplo de saída (conteúdo acrescentado a `consumo.txt`)

    seg 3.50
    ter 7.80
    qua 9.25

### Atenção

- Use o modo `"a"`: os registros anteriores não podem ser apagados.

---

## Exercício 3 - Consulta da Tabuada

Um estudante quer consultar a tabuada gravada anteriormente.

Desenvolva um algoritmo e um programa em C que:

- abra o arquivo `tabuada.txt`;
- leia todas as linhas;
- exiba seu conteúdo na tela.

### Exemplo de arquivo de entrada (`tabuada.txt`)

    7 x 0 = 0
    7 x 1 = 7
    7 x 2 = 14

### Exemplo de saída na tela

    7 x 0 = 0
    7 x 1 = 7
    7 x 2 = 14

### Atenção

- Verifique se o arquivo foi aberto corretamente (`NULL`).
- Sugestão: leitura linha por linha com `fgets()`.

---

## Exercício 4 - Notas da Turma

A coordenação do curso de letras recebeu um arquivo com o RGM e a nota final dos estudantes.

Desenvolva um algoritmo e um programa em C que abra o arquivo `notas.txt` e determine:

- a quantidade de estudantes;
- a média da turma;
- a maior nota;
- a quantidade de alunos aprovados (nota >= 6,0).

### Exemplo de arquivo de entrada (`notas.txt`)

    2500123-4 8.5
    2500567-8 6.0
    2500987-6 4.5

### Exemplo de saída na tela

    Estudantes: 3
    Média da turma: 6.33
    Maior nota: 8.50
    Quantidade de alunos aprovados: 2

### Atenção

- Sugestão: leitura formatada com `fscanf()`, testando se o retorno é igual ao número de campos lidos.
- Antes de calcular a média, verifique se existe ao menos um registro.

---

## Exercício 5 - Vendas da Loja

Uma loja registra em `vendas.txt` o código e o valor de cada venda concluída.

Desenvolva um algoritmo e um programa em C que:

- leia o arquivo `vendas.txt`;
- exiba a quantidade de vendas;
- exiba o total vendido;
- exiba o maior valor registrado.

### Exemplo de arquivo de entrada (`vendas.txt`)

    101 150.00
    102 89.90
    103 320.50

### Exemplo de saída na tela

    Quantidade de vendas: 3
    Total vendido: R$ 560.40
    Maior venda: R$ 320.50

### Atenção

- Para este exercício, você poderá criar o arquivo de entrada no bloco de notas ou criar um programa para armazenar os dados.

---

## Exercício 6 - Juntando Tudo: Consumo de Energia

Uma residência deseja manter o histórico mensal do consumo de energia elétrica. Para tanto, você deve criar uma aplicação que salve em um arquivo (`energia.txt`) cada registro contendo o número do mês e o consumo correspondente em kWh.

Desenvolva um algoritmo e um programa em C que apresente o seguinte menu:

    1- Cadastrar consumo
    2- Exibir relatório
    3- Sair

O programa deverá repetir o menu até que a opção 3 seja escolhida.

### Planejamento da solução

- **Opção 1 - Cadastrar** (modo `"a"`): ler os dados, abrir o arquivo no modo `"a"`, gravar e fechar.
- **Opção 2 - Relatório** (modo `"r"`): abrir o arquivo no modo `"r"`, inicializar os acumuladores, ler e processar todos os registros, calcular e exibir os resultados, fechar.
- **Opção 3 - Sair:** informar o encerramento.
- **Outra opção:** informar opção inválida e exibir o menu novamente.

### Atenção

- O enunciado não define quais indicadores o relatório deve exibir. Sugestões: quantidade de meses registrados, consumo total, consumo médio e mês de maior consumo.

