# Algoritmos e Pensamento Computacional
Algoritmos e Pensamento Computacional

Estudante: Gabriel Marques Avalo da Silva 

Disciplina: Algoritmos e Pensamento Computacional 

Semestre: 2º semestre de Ciência da Computação 

Professor: Marco Antonio Sanches Anastacio 

Universidade: Universidade Cruzeiro do Sul

## Objetivo do repositório

Este repositório reúne as atividades práticas desenvolvidas ao longo da disciplina de Algoritmos e Pensamento Computacional, incluindo exercícios de aula, projetos práticos e a documentação de cada etapa, conforme os critérios da Avaliação Contínua definidos pelo professor.

## Organização das pastas

O repositório está organizado por aula, com subpastas para cada exercício ou projeto realizado.

## Sumário

- [Objetivo do repositório](#objetivo-do-repositório)
- [Aula 2 - Introdução à Linguagem C](#aula-2---introdução-à-linguagem-c)
- [Aula 3 - Operadores e Expressões em Linguagem C](#aula-3--operadores-e-expressões-em-linguagem-c)
- [Aula 4 - Estruturas de Decisão](#aula-4---estruturas-de-decisão)
- [Aula 5 - Projeto Arena Tech](#aula-5---projeto-arena-tech-planejamento-e-viabilidade-da-maratona-gamer)
- [Aula 6 - Estruturas de Repetição](#aula-6---estruturas-de-repetição)
- [Aula 7 - Projeto Missão Orbital e Exercícios de Revisão](#aula-7---projeto-missão-orbital-e-exercícios-de-revisão)
- [Aula 8 - Estruturas de Dados Básicas: Vetores e Matrizes](#aula-8---estruturas-de-dados-básicas-vetores-e-matrizes)
- [Aula 8.1 - Desafio: Análise de Vendas de Chips de Telefonia Móvel](#aula-81---desafio-análise-de-vendas-de-chips-de-telefonia-móvel)

## Aula 2 - Introdução à Linguagem c

### O que é um Programa de Computador?

Um programa é um conjunto de instruções escritas em uma linguagem que permite a comunicação entre o programador e o computador. No nível mais baixo, essas instruções são representadas em **código de máquina** (0's e 1's). Um arquivo contendo instruções em linguagem de máquina é chamado de **executável**.

### Linguagens de Programação

- Assim como uma linguagem natural (português, inglês etc.) tem vocabulário e regras para que pessoas se comuniquem, uma **linguagem de programação** define regras sintáticas e semânticas para escrever códigos que o computador possa executar.
- **Resumo:** linguagens naturais conectam pessoas; linguagens de programação conectam pessoas e computadores.
- Exemplos: JavaScript, Ruby, C#, Java, C++, C, Python, PHP.

### Por que usar uma linguagem de programação?

Ela é o meio pelo qual transformamos **algoritmos** (a ideia/lógica da solução, independente de linguagem) em **instruções compreensíveis pelo computador**. Programar é "dar vida ao algoritmo" — transformar raciocínio lógico em ação automatizada.

### Como a máquina entende os códigos?

É preciso um tradutor entre a linguagem de alto nível (usada pelo programador) e a linguagem de máquina. Existem dois métodos principais:

| Método | Como funciona | Vantagem | Desvantagem | Exemplos |
|---|---|---|---|---|
| **Interpretador** | Traduz e executa o programa linha por linha; precisa estar presente toda vez que o programa roda | Consome menos memória | Execução mais lenta | Python, Ruby |
| **Compilador** | Traduz todo o código-fonte para um programa executável de uma vez | Velocidade de execução; oculta o código-fonte | A cada alteração no código, é preciso recompilar | C, C++ |

### Categorias das linguagens de programação

1. **Nível de abstração:** baixo nível (Assembly), médio nível (C), alto nível (Python, Java, JavaScript).
2. **Paradigmas de programação:** imperativo (C, Pascal), funcional (Haskell, Lisp, Scala), orientado a objetos (Java, C++, Python), declarativo (SQL, Prolog), lógico (Prolog).
3. **Sistema de tipagem:** estática (C, Java, Go), dinâmica (Python, JavaScript, PHP), forte (C, Java, Python) e fraca (C em partes, JavaScript, PHP).

### IDEs (Ambientes de Desenvolvimento)

- **NetBeans / Eclipse** — voltados principalmente para Java, mas suportam outras linguagens.
- **Microsoft Visual Studio Code** — leve, gratuito, com IntelliSense, integração com Git/GitHub e extensões.
- **Dev-C++ / Code::Blocks** — IDEs clássicos, gratuitos, muito usados por iniciantes em C/C++.

### Pseudocódigo

É a descrição do algoritmo, passo a passo, em português estruturado. Serve como ponte entre a ideia e o código.

**Estrutura adotada na disciplina:**
```
algoritmo nome_do_algoritmo
    declarações
    inicio
        instrução_1
        instrução_2
        ...
    fim
```

**Convenções comuns:** `INÍCIO`/`FIM` marcam início/fim; `DECLARE` declara variáveis; `LEIA` faz entrada de dados; `ESCREVA` faz saída de dados; `←` é o operador de atribuição.

### Linguagem C

- Desenvolvida no início dos anos 1970, para dar mais poder e flexibilidade ao desenvolvimento do sistema operacional **UNIX**.
- É uma linguagem **estruturada**, de **médio nível**, **compilada**, rápida e eficiente, portável entre sistemas, e base para muitas outras linguagens.
- Usada em sistemas operacionais (ex.: Linux), sistemas embarcados, automação industrial, compiladores e interpretadores.

**Estrutura básica de um programa em C:**
```c
#include <stdio.h>

int main(){
    printf("Olá mundo\n");
    return 0;
}
```
- `#include <stdio.h>` inclui a biblioteca de entrada/saída padrão.
- `int main()` é a função principal, ponto de entrada do programa.
- As chaves `{ }` delimitam o bloco de instruções.
- `return 0;` indica que o programa terminou corretamente.
- A maioria das instruções termina com `;`.
- Constantes podem ser definidas com `#define` (ex.: `#define PI 3.14159`).

**Problemas de acentuação em C:** ocorrem quando o arquivo-fonte, o programa e o console usam codificações diferentes. Solução: incluir `<locale.h>` e chamar `setlocale(LC_CTYPE, "");` no início do `main`.

### Tipos de Dados

Classificação geral: **numéricos**, **textuais**, **caracteres**, **lógicos** e **outros (especiais)** (vetores, registros, estruturas, arquivos).

**Tipos primitivos em C:**

| Classificação | Em C | Exemplo |
|---|---|---|
| inteiro | `int` | `int idade = 20;` |
| real | `float` / `double` | `float altura = 1.75;` |
| caractere | `char` | `char conceito = 'A';` |
| lógico | `int` ou `bool` | `int aprovado = 1;` |

- Caractere usa aspas simples (`'A'`); texto usa aspas duplas (`"Maria"`), mas não é tipo simples como `String` em Java/Python.
- Em C, o separador decimal é o **ponto**.
- `double` armazena decimais com alta precisão (8 bytes).

### Variáveis

Uma **variável** é um espaço de memória usado para armazenar temporariamente um valor. Possui:
- **tipo de dado** (define o que pode armazenar e o tamanho em memória);
- **nome/identificador** (como é referenciada no código);
- **conteúdo** (o valor armazenado).

```c
int idade = 25;  // tipo  nome  conteúdo
```

**Regras para o identificador (nome) de uma variável:**
1. Não pode começar com número.
2. Não pode conter espaço.
3. Não pode conter acentos.
4. Não pode conter símbolos como `@ # - !`.
5. Não pode ser uma palavra reservada da linguagem.

**Declaração de variáveis:**
```c
tipo_de_dado variavel;
// ou já inicializando
tipo_de_dado variavel = valor_inicial;
```

**Formas de atribuir valor a uma variável:**
- Definindo um valor diretamente (`preco = 12.99`);
- Atribuindo o valor de outra variável (`n2 = n1`);
- Atribuindo o resultado de uma expressão (`c = a * b`);
- O usuário digitando o valor via comando de entrada (`leia` / `scanf`).

### Comandos de Entrada e Saída (Input/Output)

**Em pseudocódigo:**
- `escreva` — exibe uma mensagem (texto, conteúdo de variável, ou ambos).
- `leia` — atribui o dado digitado pelo usuário a uma variável.

**Em C:**
- `printf()` — escreve mensagens e valores na tela. Usa `\n` como caractere de escape para nova linha.
```c
  printf("Você tem %d anos de idade.\n", idade);
```
- `scanf()` — lê valores digitados pelo usuário. Usa `&` antes do nome da variável.
```c
  scanf("%d", &idade);
```

**Especificadores de formato mais usados:**

| Formato | Descrição |
|---|---|
| `%d` | inteiro (`int`) |
| `%c` | caractere (`char`) |
| `%s` | cadeia de caracteres (texto/String) |
| `%f` | decimal de precisão simples (`float`) |
| `%lf` | decimal de precisão dupla (`double`) |
| `%.2f` | número com duas casas decimais |

**Formatação de campos com `printf()`** (`a=678`, `b=12.3456`):

| Especificador | Significado | Resultado |
|---|---|---|
| `%5d` | largura mínima 5, preenche com espaços | `  678` |
| `%06d` | largura mínima 6, preenche com zeros | `000678` |
| `%7.3f` | largura mínima 7, 3 casas decimais | ` 12.346` |
| `%7.2f` | largura mínima 7, 2 casas decimais | `  12.35` |

### Conversão de Tipos em C

- **Conversão implícita:** o compilador converte automaticamente. Ex.: `float media = (a + b)/2;` com `a` e `b` inteiros faz divisão inteira antes de converter, truncando o resultado (`3.00` em vez de `3.50`).
- **Conversão explícita (casting):** o programador força a conversão. Ex.: `float media = (float)(a + b)/2;` — agora o resultado é `3.50`.

## Aula 3 — Operadores e Expressões em Linguagem C

### Revisão rápida

Na aula passada vimos a estrutura do pseudocódigo (`algoritmo` / `declarações` / `inicio` / `fim`) e a estrutura básica de um programa em C (`#include`, `int main()`, bloco de instruções, `return 0;`).

### Diretiva `#include`

Toda diretiva em C começa com o símbolo `#` no início da linha. A diretiva `#include` inclui o conteúdo de outro arquivo dentro do programa atual — a linha com a diretiva é substituída pelo conteúdo do arquivo especificado.

**Sintaxe:**
```c
#include <nome_do_arquivo>
```

**Principais arquivos `.h` da linguagem C:**

| Arquivo | Descrição |
|---|---|
| `stdio.h` | Funções de entrada e saída (I/O) |
| `string.h` | Funções de tratamento de strings |
| `math.h` | Funções matemáticas |
| `ctype.h` | Funções de teste e tratamento de caracteres |
| `stdlib.h` | Funções de uso genérico |

### Revisão: Tipos de Dados e Declaração de Variáveis

| Classificação geral | Em C | Exemplo |
|---|---|---|
| inteiro | `int` | `int idade = 20;` |
| real | `float` / `double` | `float altura = 1.75;` |
| caractere | `char` | `char conceito = 'A';` |
| lógico | `int` ou `bool` | `int aprovado = 1;` |

**Comparação Pseudocódigo × C:**
```
inteiro idage, num1 int idage;
real nota1, media float nota1, nota2, media;
literal nome char conceito;
logico aprovado
```

### Operadores: convenção para o pseudocódigo

| Operador | Descrição |
|---|---|
| `+` | soma |
| `-` | subtração |
| `/` | divisão |
| `*` | multiplicação |
| `( )` | agrupar termos (alterar a precedência) |
| `mod` ou `%` | resto da divisão |
| `←` ou `=` | atribuir um valor (receber) |
| `^` ou `**` | potência |
| `< <= > >= <> ==` | operadores de relação (comparação) |
| `E`, `OU`, `NÃO` | operadores lógicos |

### Principais operadores aritméticos em C

| Operação | Operador | Expressão algébrica | Exemplo em C (`x=5, y=3`) | Resultado |
|---|---|---|---|---|
| Adição | `+` | x + y | `x + y` | 8 |
| Subtração | `-` | x − y | `x - y` | 2 |
| Multiplicação | `*` | xy | `x * y` | 15 |
| Divisão | `/` | x/y | `x / y` (com `y=2`) | 2 |
| Resto da divisão | `%` | x mod y | `x % y` (com `y=2`) | 1 |
| Incremento | `++` | x + 1 | `x++;` (com `x=5`) | 6 |
| Decremento | `--` | x − 1 | `x--;` (com `x=5`) | 4 |

**Dica:** em C, quando dois inteiros são divididos (`/`), o resultado também é inteiro (a parte decimal é descartada).

```c
int a = 7, b = 3;
int soma = a + b; // 10
int div = a / b; // 2
int resto = a % b; // 1
```

**Observação:** os operadores seguem uma ordem de precedência — use parênteses `( )` para deixar a expressão mais clara.

### Regra de precedência

As operações aritméticas em pseudocódigo e em C obedecem às mesmas regras da matemática:

1. As operações são resolvidas a partir dos parênteses mais internos até os mais externos.
2. Primeiro resolvemos multiplicações, divisões e módulos.
3. Por fim, resolvemos adições e subtrações.

**Tabela de prioridade dos operadores aritméticos:**

| Prioridade | Operador | Operação | Exemplo |
|---|---|---|---|
| 4º | `+` | soma | `a + b` |
| 4º | `-` | subtração | `a - b` |
| 3º | `*` | multiplicação | `a * b` |
| 3º | `/` | divisão | `a / b` |
| 2º | `mod` ou `%` | resto de divisão inteira | `a % b` |
| 1º | `+` | manutenção de sinal | `+a` |
| 1º | `-` | inversão de sinal | `-a` |

> Numa expressão com operadores da mesma prioridade, as operações são executadas da esquerda para a direita. Em linguagens com operador de potência, ele tem prioridade maior que `+ - / *`.

**Exemplos de avaliação:**
```
a = 5 + 3 * 2;
   Primeiro: 3 * 2 = 6
   Depois: 5 + 6 = 11
   Resultado: 11

b = 10 - 4 / 2 + 1;
   Primeiro: 4 / 2 = 2
   Depois: 10 - 2 = 8
   Depois: 8 + 1 = 9
   Resultado: 9

c = -3 + 5 * (2 + 1);
   Primeiro: (2 + 1) = 3
   Depois: 5 * 3 = 15
   Depois: -3 + 15 = 12
   Resultado: 12
```

### Divisão inteira × divisão real

O resultado de `7 / 2` **depende dos tipos envolvidos**:

```c
// Divisão inteira
int a = 7;
int b = 2;
printf("%d", a/b); // Resultado: 3

// Divisão real
float a = 7;
float b = 2;
printf("%.1f", a/b); // Resultado: 3.5
```

### Operadores de atribuição e incremento

A linguagem C possui operadores especiais resultantes da combinação de operadores aritméticos com operadores de atribuição:

| Operador | Operação equivalente |
|---|---|
| `x += y` | `x = x + y` |
| `x -= y` | `x = x - y` |
| `x *= y` | `x = x * y` |
| `x /= y` | `x = x / y` |
| `x %= y` | `x = x % y` |
| `x++` | `x = x + 1` |
| `x--` | `x = x - 1` |

### Precedência de sinais e operações — exemplos

```
3 * (4 + 5) = 27
equivale a:
4 + 5 = 9
3 * 9 = 27

3 * 4 + 5 = 17
equivale a:
3 * 4 = 12
12 + 5 = 17
```

### Prioridade dos grupos de operadores

Do menor para o maior nível de precedência na avaliação de uma expressão completa:

| Operadores | Prioridade |
|---|---|
| Lógicos | 4º |
| Relacionais | 3º |
| Aritméticos | 2º |
| Parênteses | 1º |

*(ou seja: parênteses são resolvidos primeiro, depois os aritméticos, depois os relacionais e por último os lógicos)*

### Funções matemáticas

**Convenção para o pseudocódigo:**
```
sen(x)
cos(x)
tan(x) ou tg(x)
arcsen(x) ou sen⁻¹(x)
arccos(x) ou cos⁻¹(x)
arctg(x) ou arctan(x) ou tg⁻¹(x)
log(x)
ln(x)
raiz(x)
```
> As linguagens de programação são rigorosas quanto à sintaxe — sempre verifique a sintaxe correta na linguagem escolhida.

**Funções matemáticas na linguagem C (biblioteca `math.h`):**

| Função | Descrição |
|---|---|
| `sqrt(x)` | raiz quadrada |
| `pow(x,y)` | potência |
| `fabs(x)` | valor absoluto |
| `ceil(x)` | arredonda para cima |
| `floor(x)` | arredonda para baixo |
| `round(x)` | arredondamento |
| `log10(x)` | logaritmo decimal |
| `sin(x)` | seno |
| `cos(x)` | cosseno |
| `tan(x)` | tangente |

**Exemplos:**
```c
printf("%.2f\n", sqrt(25)); // Resultado: 5.00
printf("%.2f\n", pow(2,5)); // Resultado: 32.00
```

Para usar a biblioteca `math`, é preciso incluí-la:
```c
#include <math.h>
```

Muitas funções matemáticas retornam um valor do tipo `double`. Funciona armazenar em `int`, mas o mais adequado é usar `double`:
```c
int a = pow(2,5); // funciona, mas não é o ideal
double a = pow(2,5); // mais adequado
```

> **OBS:** No Linux (e WSL), ao usar funções da biblioteca matemática, normalmente é necessário adicionar a opção `-lm` ao compilar:
> ```
> gcc programa.c -o programa -lm
> ```

## Aula 4 - Estruturas de Decisão

Nesta aula foram estudadas as estruturas utilizadas para controlar o fluxo de execução de um programa. Diferentemente da estrutura sequencial, as estruturas de decisão permitem que o programa escolha diferentes caminhos de acordo com condições estabelecidas.

### Estrutura Sequencial

Na estrutura sequencial, os comandos são executados em uma ordem predefinida. Cada comando é executado somente após o término do comando anterior.

### Operadores Relacionais

Os operadores relacionais são utilizados para comparar valores. O resultado de uma comparação é sempre lógico:

* `1` para verdadeiro
* `0` para falso

Principais operadores:

| Operador | Significado      |
| -------- | ---------------- |
| `==`     | Igual a          |
| `!=`     | Diferente de     |
| `>`      | Maior que        |
| `<`      | Menor que        |
| `>=`     | Maior ou igual a |
| `<=`     | Menor ou igual a |

É importante não confundir:

* `=` → operador de atribuição
* `==` → operador de comparação

### Operadores Lógicos

Os operadores lógicos permitem combinar ou negar condições.

| Operador | Significado |
| -------- | ----------- |
| `&&`     | E           |
| `\|\|`   | OU          |
| `!`      | NÃO         |

Exemplo:

```c
if (nota >= 6 && frequencia >= 75) {
    printf("Aluno aprovado");
}
```

### Prioridade dos Operadores

A prioridade apresentada durante a aula é:

1. Parênteses
2. Operadores aritméticos
3. Operadores relacionais
4. Operadores lógicos

Os parênteses podem ser utilizados para deixar as expressões mais claras e controlar a ordem das operações.

### Estrutura de Decisão Simples - `if`

A estrutura `if` executa um bloco de código somente quando uma condição for verdadeira.

```c
if (condicao) {
    // comandos executados se a condição for verdadeira
}
```

Exemplo:

```c
if (numero % 2 == 0) {
    printf("O número é par");
}
```

### Estrutura de Decisão Composta - `if-else`

A estrutura `if-else` permite executar um bloco quando a condição é verdadeira e outro quando ela é falsa.

```c
if (condicao) {
    // executado se verdadeiro
} else {
    // executado se falso
}
```

Exemplo:

```c
if (numero % 2 == 0) {
    printf("Par");
} else {
    printf("Ímpar");
}
```

### Estruturas de Decisão Aninhadas

As estruturas aninhadas são utilizadas quando várias condições devem ser testadas.

```c
if (condicao1) {
    // primeira situação
} else if (condicao2) {
    // segunda situação
} else {
    // demais situações
}
```

Esse tipo de estrutura pode ser utilizado em exercícios que envolvem diferentes classificações, como aprovação de alunos e categorias de IMC.

### Boas Práticas com `if`

As condições do `if` devem estar entre parênteses.

```c
if (nota >= 6) {
    printf("Aprovado");
}
```

Mesmo quando existe apenas uma instrução, é recomendado utilizar chaves `{}` para melhorar a legibilidade e evitar erros futuros.

### Estrutura `switch-case`

A estrutura `switch-case` é utilizada quando existem várias alternativas baseadas no valor de uma única variável.

```c
switch (opcao) {
    case 1:
        // comandos
        break;

    case 2:
        // comandos
        break;

    default:
        // comandos para valores não previstos
}
```

O comando `break` é utilizado para impedir que os próximos casos sejam executados indevidamente.

A opção `default` é utilizada para tratar valores que não correspondem a nenhum dos casos definidos.

## Aula 5 - Projeto Arena Tech: Planejamento e Viabilidade da Maratona Gamer

### Contexto do desafio

A turma foi desafiada a planejar a **Arena Tech**, uma maratona gamer no campus. Antes de confirmar o evento, é preciso estimar quantidade de times, consumo de energia e custos, além de verificar se a infraestrutura disponível é suficiente. O programa em C deve realizar os cálculos e emitir um diagnóstico automático sobre a viabilidade do evento.

- **Modalidade:** duplas ou trios
- **Entrega:** desenvolvimento em aula + avaliação por pares
- **Formato:** código-fonte em C + relatório de testes e revisão

### Objetivos do projeto

- transformar um problema contextualizado em solução computacional;
- planejar a solução antes de implementar;
- aplicar variáveis, entrada/saída, operadores e estruturas de decisão;
- testar diferentes caminhos de execução;
- explicar as decisões do código;
- avaliar, via revisão por pares, a solução de outro grupo.

### Conteúdos mobilizados

- estrutura básica de um programa em C (`#include <stdio.h>`);
- variáveis `int` e `float`;
- entrada e saída com `scanf()` e `printf()`;
- operadores aritméticos, atribuição, parênteses e precedência;
- divisão real, conversão de tipos e formatação com duas casas decimais;
- operadores relacionais e lógicos (`&&`, `||`, `!`);
- estruturas condicionais `if`, `if...else`, `if...else if...else`;
- uso opcional de `math.h` e `ceil()`.

### Dados de entrada esperados

| Variável | Informação | Tipo |
|---|---|---|
| `qte_participantes` | quantidade total de participantes | int |
| `qte_jogadores_por_time` | jogadores por time | int |
| `qte_computadores` | computadores disponíveis | int |
| `potencia` | potência média de cada computador (W) | float |
| `duracao` | duração do evento (h) | float |
| `preco_kwh` | preço de 1 kWh | float |
| `preco_kit` | preço do kit de alimentação por participante | float |
| `outros_custos` | outros custos do evento | float |
| `orcamento` | orçamento máximo disponível | float |

### Cálculos obrigatórios

- **Times necessários:** arredondar `participantes / jogadores_por_time` (pode usar `ceil()` de `math.h`)
- **Consumo de energia:** `(computadores * potencia * duracao) / 1000` (kWh)
- **Custo da energia:** `consumo_energia * preco_kwh`
- **Custo da alimentação:** `participantes * preco_kit`
- **Custo total:** `custo_energia + custo_alimentacao + outros_custos`
- **Custo por participante:** `custo_total / participantes`
- **Saldo do orçamento:** `orcamento - custo_total`

> Dica de compilação com `math.h` no Linux/Codespaces: `gcc projeto1.c -o projeto1 -lm`

### Regras de decisão

**Infraestrutura**
- `computadores >= participantes` → SUFICIENTE
- `computadores < participantes` → INSUFICIENTE (+ quantidade faltante)

**Consumo de energia**
- `<= 20` → BAIXO
- `> 20 e <= 40` → MODERADO
- `> 40` → ALTO

**Orçamento** (margem de segurança de 5% do valor disponível)
- custo total > orçamento → ACIMA DO ORÇAMENTO
- custo total ≤ orçamento e saldo ≤ 5% do orçamento → NO LIMITE DO ORÇAMENTO
- caso contrário → DENTRO DO ORÇAMENTO

**Decisão final**
- NÃO RECOMENDADO: infraestrutura insuficiente OU custo total acima do orçamento
- APROVADO COM RESSALVAS: infraestrutura suficiente + orçamento ok + consumo ALTO
- APROVADO: demais casos com infraestrutura suficiente e orçamento ok

### Saída esperada

Relatório final legível exibindo: participantes, times necessários, situação da infraestrutura, consumo estimado e classificação, custos (energia, alimentação, outros, total, por participante), orçamento, saldo, situação do orçamento e decisão final com motivo.

### Teste mínimo obrigatório

Rodar o programa com o conjunto de dados de referência (30 participantes, 5 por time, 30 PCs, 800 W, 2 h, R$1,20/kWh, kit R$20, outros R$150, orçamento R$1000) e conferir:
- consumo = 48,00 kWh (ALTO)
- custo total = R$ 807,60
- infraestrutura = SUFICIENTE
- orçamento = DENTRO DO ORÇAMENTO
- decisão final = APROVADO COM RESSALVAS

### Avaliação por pares

Um integrante fica na bancada, os demais visitam outro grupo e testam o programa com entradas variadas, registrando entrada → resultado esperado → resultado obtido. É preciso cobrir, no mínimo: infraestrutura suficiente e insuficiente; consumo BAIXO, MODERADO e ALTO; orçamento DENTRO, NO LIMITE e ACIMA; pelo menos duas decisões finais diferentes.

O relatório de avaliação deve trazer: identificação dos grupos, pontos fortes e frágeis, testes realizados, observações sobre clareza/organização do código e ao menos uma melhoria recomendada.

### Uso de IA

Uso permitido como apoio, desde que declarado. É preciso registrar: qual ferramenta, em qual etapa foi usada (compreensão, planejamento, código, depuração), o que foi feito com apoio da IA, se o grupo consegue explicar o código, e se contribuiu para a aprendizagem.

### Retorno ao grupo

Após o feedback: escolher ao menos uma melhoria, aplicá-la (ou justificar por que não), e registrar o aprendizado obtido ao analisar/receber a análise de outro projeto.

### Entregáveis

- `projeto1_arena_tech.c` compilado e testado
- print da execução do teste mínimo obrigatório
- relatório de avaliação por pares preenchido
- `README.md` curto com integrantes, descrição da solução, uso de IA e melhoria pós-feedback

### Regras importantes

- duplas ou trios; todos devem entender e explicar o código;
- nomes de variáveis claros, indentação adequada, mensagens orientativas;
- estruturas condicionais são obrigatórias;
- não são aceitos programas com resultados fixos, sem leitura de dados;
- testar com diferentes conjuntos de dados antes da avaliação por pares.

### Desafios extras (opcionais)

- `switch...case` para categoria do evento (Econômica, Padrão, Premium) com custo específico;
- validar opção inválida com `default`;
- informar percentual do orçamento já comprometido;
- mensagens mais detalhadas explicando a decisão final;
- personalizar o relatório com nome, data e identidade visual da Arena Tech.

## Aula 6 - Estruturas de Repetição

Nesta aula foram estudadas as **estruturas de repetição (loops)**, que permitem executar um bloco de instruções **várias vezes**, enquanto uma condição for verdadeira. Elas evitam repetir código desnecessariamente, tornam os programas mais eficientes e facilitam a solução de problemas repetitivos.

### Ideia-chave do loop

1. Execute o bloco de instruções.
2. Verifique a condição.
   - Se for verdadeira → repita tudo.
   - Se for falsa → continue para a próxima instrução do programa.

### Estruturas de repetição em pseudocódigo x em C

| Pseudocódigo | Em C | Funcionamento |
|---|---|---|
| `enquanto` | `while` | Testa a condição **antes** de executar o bloco (pré-teste). |
| `para` | `for` | Reúne inicialização, condição e atualização em uma única linha. |
| `faça...enquanto` | `do...while` | Executa o bloco **pelo menos uma vez** e só depois testa a condição (pós-teste). |

### As três partes de todo laço

Independente do tipo, todo loop é constituído de três partes:

1. **Inicialização** — define a(s) variável(is) de controle.
2. **Condição** — verifica se a repetição deve continuar.
3. **Atualização** — altera a(s) variável(is) de controle, garantindo que o laço eventualmente termine.

> ⚠️ **Atenção:** se a condição nunca se tornar falsa, o resultado é um **loop infinito**.

### `while` (laço condicional / pré-teste)

Usado quando **não se sabe** previamente quantas repetições serão necessárias.

    #include <stdio.h>

    int main() {
        int i = 1;
        while (i <= 5) {
            printf("Número: %d\n", i);
            i++;
        }
        return 0;
    }

### `for` (laço contado)

Usado quando **se sabe exatamente** o número de vezes que o bloco deve ser executado. É compacto porque inicialização, condição e atualização ficam reunidas na declaração do laço.

    for (inicialização; condição; atualização) {
        // bloco de instruções
    }

    #include <stdio.h>

    int main() {
        for (int i = 0; i < 10; i++) {
            printf("Contando %d\n", i);
        }
        return 0;
    }

### `do...while` (pós-teste)

Executa o bloco **pelo menos uma vez**, mesmo que a condição seja falsa desde o início, pois a verificação só ocorre ao final da repetição.

    #include <stdio.h>

    int main() {
        int i = 1;
        do {
            printf("Número: %d\n", i);
            i++;
        } while (i <= 5);
        return 0;
    }

> ⚠️ **Atenção:** há ponto e vírgula obrigatório após `while(condição);` no `do...while`.

### Laços contados x laços condicionais

| Tipo | Como funciona | Quando usar |
|---|---|---|
| **Contado** | Um contador controla a repetição até atingir um limite estipulado na condição. | Quando se sabe exatamente ou há um limite definido de repetições. |
| **Condicional** | Usa uma variável com valor predefinido testada em uma condição dentro do laço. | Quando não se sabe a quantidade de repetições previamente. |

### Loops aninhados

Ocorrem quando um loop está **dentro de outro**. São úteis para trabalhar com estruturas complexas, como matrizes.

    for (int i = 0; i < 3; i++) {       // loop externo: percorre as linhas
        for (int j = 0; j < 4; j++) {   // loop interno: percorre as colunas
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

> 💡 **Dica:** para cada repetição do loop externo, o loop interno executa **todas** as suas repetições.

### Loops de consistência (validação de entrada)

Repetem-se até que uma condição de validade seja atendida — muito usados para validar dados digitados pelo usuário.

    #include <stdio.h>

    int main() {
        float nota;
        do {
            printf("Digite a nota do aluno: ");
            scanf("%f", &nota);
            if (nota < 0 || nota > 10) {
                printf("Nota inválida!\n");
            }
        } while (nota < 0 || nota > 10);

        printf("Nota válida: %.1f\n", nota);
        return 0;
    }

> ⚠️ **Atenção:** o laço continua enquanto o dado for inválido e termina quando a entrada se torna válida.

### Instruções `break` e `continue`

| Instrução | O que faz |
|---|---|
| `break` (pare) | Interrompe o laço **imediatamente**, saindo dele e seguindo para a próxima instrução após o loop. |
| `continue` | **Não encerra** o loop; apenas ignora o restante da iteração atual e passa para o próximo ciclo. |

    // break: encerra o loop ao encontrar o valor 0
    int soma = 0, num;
    while (1) {
        printf("Digite um número: ");
        scanf("%d", &num);
        if (num == 0) {
            break;
        }
        soma += num;
    }
    printf("Soma = %d\n", soma);

    // continue: pula os números pares e imprime apenas os ímpares
    for (int i = 0; i <= 10; i++) {
        if (i % 2 == 0) {
            continue;
        }
        printf("%d ", i);
    }

## Aula 7 - Projeto Missão Orbital e Exercícios de Revisão

Esta aula foi dividida em **duas partes**, cada uma com seu próprio prazo de entrega pelo Blackboard: o **Projeto 3 - Missão Orbital** (em equipe) e os **Exercícios de revisão sobre estruturas de repetição** (individuais).

### Parte 1 - Projeto 3: Missão Orbital

**Contexto:** a Agência Orbital está selecionando equipes para uma missão de exploração. Cada cadete realiza três etapas de treinamento; o sistema deve receber as pontuações, impedir valores inválidos, calcular o desempenho e informar a classificação final. Ao término, o operador pode iniciar o treinamento de outro cadete ou encerrar o programa.

**Objetivo:** desenvolver, testar e explicar um programa em C que combine estruturas condicionais e laços de repetição em uma situação completa e curta.

**Modalidade:** individual ou em grupos de até 3 alunos. Entrega pelo link "Projeto 3 - Missão Orbital" no Blackboard, até **29/09/2026, 23h59**. Mesmo em equipe, cada integrante deve entregar individualmente, identificando os nomes dos demais componentes.

#### Conteúdos mobilizados

| Conteúdo | Aplicação no programa |
|---|---|
| Condicionais | Classificar o desempenho e reconhecer a pontuação máxima |
| `for` | Controlar as três etapas do treinamento |
| `while` | Repetir a leitura enquanto a pontuação estiver fora do intervalo de 0 a 100 |
| `do...while` | Permitir o treinamento de outro cadete antes de encerrar o sistema |
| Contador e acumulador | Identificar a etapa atual e calcular a pontuação total |

#### Dados do programa

| Variável sugerida | Finalidade | Tipo |
|---|---|---|
| `codigo_cadete` | Identificação numérica do participante | `int` |
| `etapa` | Controla as três etapas do treinamento | `int` |
| `pontuacao` | Pontuação digitada em cada etapa, de 0 a 100 | `int` |
| `pontuacao_total` | Acumula as três pontuações | `int` |
| `media` | Armazena a média das etapas | `float` |
| `continuar` | Indica se outro cadete será avaliado | `int` |

#### Funcionamento obrigatório

1. Ler o código numérico do cadete e zerar o total (entrada e atribuição).
2. Executar exatamente três etapas de treinamento (`for`).
3. Aceitar somente pontuações entre 0 e 100; valores inválidos devem ser solicitados novamente (`while`).
4. Somar as pontuações e calcular a média real (acumulador).
5. Classificar o desempenho conforme a tabela abaixo (`if/else`).
6. Perguntar se o operador deseja avaliar outro cadete (`do...while`).

#### Classificação do treinamento

| Média | Resultado | Mensagem sugerida |
|---|---|---|
| 85,0 ou mais | Comandante da missão | Treinamento concluído com excelência |
| 70,0 a 84,99 | Piloto aprovado | Cadete autorizado para a missão |
| 50,0 a 69,99 | Cadete em recuperação | Novo treinamento recomendado |
| Abaixo de 50,0 | Treinamento reiniciado | Cadete ainda não autorizado |

> ⚠️ **Condição adicional:** se o total for igual a 300 pontos, exibir também `PONTUAÇÃO MÁXIMA!`, controlada por uma condicional simples.

#### Testes mínimos

| Teste | Pontuações | Média | Resultado esperado |
|---|---|---|---|
| 1 | 85, 70 e 95 | 83,33 | Piloto aprovado |
| 2 | 90, 85 e 95 | 90,00 | Comandante da missão |
| 3 | 40, 50 e 55 | 48,33 | Treinamento reiniciado |
| Validação | 120, depois 80 | - | Recusar 120 e aceitar 80 |

#### Regras importantes

- Não é necessário utilizar vetores, matrizes, funções próprias ou manipulação de arquivos.
- Nomes de variáveis claros, indentação correta e mensagens que orientem o usuário.
- Todos os integrantes devem compreender o programa e conseguir explicar sua parte.
- O uso de IA é permitido como apoio, desde que declarado (parte utilizada e finalidade).

#### O que deve ser entregue

- Arquivo `projeto2_missao_orbital.c`, compilado e testado.
- Captura de tela com uma execução completa.
- Nomes e RGMs dos integrantes em comentário no início do código.
- Envio pelo link do Blackboard, dentro do prazo.

#### Desafios extras opcionais

- Contar quantas etapas tiveram pontuação igual ou superior a 80.
- Exibir a maior e a menor pontuação sem utilizar vetores.
- Validar também a resposta 1-Sim ou 0-Não.
- Personalizar o relatório com nome da nave e código da missão.

### Parte 2 - Exercícios de revisão: Estruturas de Repetição

Atividade **individual**, destinada à resolução de exercícios de revisão sobre `for`, `while` e `do...while`. Antes de programar, é preciso identificar os dados de entrada, os processamentos necessários, as condições envolvidas e a estrutura de repetição mais adequada para cada problema, além de executar e testar as soluções antes da entrega.

Entrega pelo link "Aula 07" no Blackboard, até **28/09/2026, 23h59**.

Os enunciados dos quatro exercícios propostos estão reunidos separadamente em `README_aula7_enunciados.md`.

### Cheat sheet: estruturas de repetição em C

| Estrutura | Uso | Regra |
|---|---|---|
| `while` (pré-teste) | Quando não se sabe o número de repetições | Testa a condição antes de executar o bloco |
| `do...while` (pós-teste) | Quando é preciso executar ao menos uma vez | Testa a condição após executar o bloco (atenção ao `;` final) |
| `for` (determinado) | Quando se sabe previamente a quantidade de iterações | Reúne inicialização, condição e atualização |

**Padrões comuns:**

- **Contador:** registra quantas vezes um evento ocorreu (`if (i % 2 == 0) contador++;`).
- **Acumulador:** armazena soma ou total progressivo (`soma += valor;`).
- **Validação:** repete até receber um dado válido (`while (idade < 0 || idade > 120)`).
- **Aninhado:** loop dentro de loop, útil para matrizes/grades.

> 🏆 **Regra de ouro:** todo loop exige inicialização, condição e atualização. Garanta que a condição se torne falsa em algum momento para evitar loop infinito.

## Aula 8 - Estruturas de Dados Básicas: Vetores e Matrizes

Nesta aula foram estudadas as **estruturas de dados homogêneas** em C: os **arrays** unidimensionais (vetores) e multidimensionais (matrizes). Com elas, deixamos de usar uma variável para cada valor e passamos a **organizar vários dados do mesmo tipo** sob um único nome, para poder processá-los com laços de repetição.

### Desafio inicial: por que precisamos de arrays?

Uma empresa quer registrar o salário de cinco funcionários e exibi-los na mesma ordem em que foram informados.

Uma solução ingênua seria criar uma variável para cada salário:

```c
float salario1, salario2, salario3, salario4, salario5;
```

Mas e se fossem 50 funcionários? E 500? Como percorrer todos os salários com uma estrutura de repetição?

> 💡 **Ideia-chave:** o problema não é apenas guardar os dados. Precisamos **organizar os dados para processá-los**.

### Estruturas de dados homogêneas

- Uma variável comum armazena **um valor por vez** (`float temperatura = 27.5;`).
- Quando vários valores do **mesmo tipo** representam elementos de um mesmo conjunto, podemos organizá-los em uma **estrutura de dados homogênea**.
- **Homogênea** = todos os elementos têm o mesmo tipo.

**Exemplos:**
- notas de uma turma → `float`
- idades de alunos → `int`
- temperaturas diárias → `float`
- quantidade vendida por dia → `int`

Em C, os **arrays** são as estruturas fundamentais para organizar esses conjuntos de dados.

### O que é um array?

Um array é um conjunto de elementos:
- do **mesmo tipo**;
- identificados por um **mesmo nome**;
- armazenados em **posições consecutivas** da memória;
- acessados por meio de **índices**.

Um array de uma dimensão é chamado de **vetor**.

```c
float notas[5] = {7.5, 8.0, 6.5, 9.0, 5.5};

notas[0]  // primeiro elemento (7.5)
notas[2]  // terceiro elemento (6.5)
notas[4]  // quinto elemento (5.5)
```

- **Identificador:** o nome do array (`notas`).
- **Índices:** as posições (`0, 1, 2, 3, 4`).
- **Valores:** o conteúdo armazenado em cada posição.

> 💡 **Ideia-chave:** posição e conteúdo são coisas diferentes. O **índice** indica *onde* o valor está; o **conteúdo** é o valor (*o que*) armazenado.

### Por que o índice começa em zero?

Podemos pensar no índice como um **deslocamento a partir do início** do array:

- `valores[0]` → deslocamento 0 (o primeiro elemento está no início)
- `valores[1]` → deslocamento 1
- `valores[2]` → deslocamento 2

**Erro clássico:**

```c
int v[5];
v[5] = 20;  // ERRO: posição fora dos limites do vetor
```

Em um vetor de 5 posições, os índices válidos são **0, 1, 2, 3 e 4**.

> ⚠️ **Atenção:** em C **não existe verificação automática de limites**. Um acesso inválido produz **comportamento indefinido** (pode funcionar, travar ou alterar outros dados sem avisar).

### Tipos de arrays

- **Array unidimensional → vetor:** organiza os elementos em uma única sequência, acessada por **um índice**.
- **Array multidimensional → matriz:** organiza os elementos em linhas e colunas, acessados por **mais de um índice**.

```c
int vendas[5] = {12, 18, 10, 25, 30};                          // vetor
int notas[3][3] = {{10, 20, 30}, {40, 50, 60}, {70, 80, 90}};  // matriz
```

Também é possível ter arrays com mais dimensões, mas os casos mais comuns no início são **1D e 2D**.

### Declarando e inicializando vetores

- **Declaração:** reserva espaço na memória para um array do tipo especificado.
  ```c
  int idades[5];
  float notas[4];
  ```
- **Inicialização completa:** declara e já atribui um valor para cada elemento.
  ```c
  int valores[5] = {10, 20, 30, 40, 50};
  ```
- **Tamanho inferido pelo compilador:** o compilador conta os elementos informados.
  ```c
  int valores[] = {10, 20, 30, 40, 50};
  ```
- **Inicialização com zeros:** todos os elementos começam com 0.
  ```c
  int valores[5] = {0};
  ```

> ⚠️ **Cuidado:** se um array **não for inicializado** (`int valores[5];`), seus elementos possuem **valores indeterminados** (lixo de memória).

### Acessando e alterando elementos

Usamos o índice para ler ou atribuir um valor, inclusive usando o valor de outros elementos:

```c
int pontos[4] = {10, 20, 30, 40};

pontos[0] = 15;
pontos[2] = pontos[0] + pontos[1];
// Resultado: {15, 20, 35, 40}
```

**Leitura de uma posição com `scanf`:**

```c
scanf("%d", &pontos[3]);
```

> 💡 Observe o `&`: o `scanf` precisa do **endereço** da posição que receberá o valor.

### Percorrendo um vetor

Um vetor se torna realmente útil quando combinado com uma **estrutura de repetição**.

**Pseudocódigo:**
```
para i de 0 até TAM - 1
    leia(vetor[i])
fim-para
```

**Leitura em C:**
```c
for (i = 0; i < TAM; i++) {
    scanf("%d", &vetor[i]);
}
```

**Exibição em C:**
```c
for (i = 0; i < TAM; i++) {
    printf("%d ", vetor[i]);
}
```

> 💡 **Padrão importante:** um vetor unidimensional normalmente é percorrido com **um laço `for`**.

### Por que armazenar antes de processar?

Depois que os dados estão armazenados no vetor, podemos fazer **novos processamentos sem pedir os dados novamente**. Um mesmo conjunto de dados pode ser processado várias vezes.

Fluxo geral: **Entrada → Armazenamento → Processamento → Saída**

**Exemplo: média salarial**

```c
float soma = 0.0f;
float media;

for (i = 0; i < TAM; i++) {
    soma += salarios[i];
}

media = soma / TAM;
printf("Média salarial: R$ %.2f\n", media);
```

### Padrões de processamento em vetores

Muitos problemas com vetores são combinações de poucos padrões fundamentais:

- **Acumulação:** soma os elementos do vetor (ou calcula outra acumulação).
  ```c
  soma += vetor[i];
  ```
- **Contagem:** conta quantos elementos satisfazem uma condição.
  ```c
  if (vetor[i] > media)
      contador++;
  ```
- **Maior valor:** encontra o maior elemento do vetor.
  ```c
  maior = vetor[0];

  for (i = 1; i < TAM; i++) {
      if (vetor[i] > maior)
          maior = vetor[i];
  }
  ```
- **Menor valor:** encontra o menor elemento do vetor (mesma lógica, começando com `menor = vetor[0];` e usando `<`).

> 💡 **Boa prática:** para maior/menor, use um **elemento válido do próprio vetor** como valor inicial (e não um número fixo como `0`).

### Quando uma dimensão não é suficiente

Imagine guardar as notas de **3 estudantes** em **4 avaliações**. Com vetores separados:

```c
float aluno1[4];
float aluno2[4];
float aluno3[4];
```

Mas os dados têm naturalmente uma organização em **linhas e colunas** (aluno × avaliação). A estrutura que representa melhor isso é a **matriz**.

### Matrizes: arrays com duas dimensões

Uma matriz é um array bidimensional organizado em **linhas** e **colunas**.

```c
float notas[3][4];     // declaração: 3 linhas, 4 colunas
notas[linha][coluna]   // acesso a um elemento
```

> 💡 Em uma matriz, cada elemento é identificado por **dois índices**: um para a linha e outro para a coluna.

### Declarando e inicializando matrizes

```c
int vendas[3][4];   // 3 x 4 = 12 elementos do tipo int
```

```c
int vendas[3][4] = {
    {10, 12,  9, 11},
    { 8,  7, 10,  9},
    { 5,  6,  4,  7}
};
```

**Acesso:**
```c
vendas[0][0]   // 10
vendas[1][2]   // 10
vendas[2][3]   // 7
```

> 💡 Em cada dimensão, os índices também começam por **zero**.

### Como percorrer uma matriz

Para percorrer duas dimensões, usamos **duas estruturas de repetição aninhadas**.

**Pseudocódigo:**
```
para linha de 0 até LINHAS - 1
    para coluna de 0 até COLUNAS - 1
        leia(matriz[linha][coluna])
    fim-para
fim-para
```

**Em C:**
```c
for (i = 0; i < LINHAS; i++) {
    for (j = 0; j < COLUNAS; j++) {
        scanf("%d", &matriz[i][j]);
    }
}
```

> 💡 **Padrão:** o **laço externo** (`i`) percorre as **linhas**; o **laço interno** (`j`) percorre as **colunas**.

### Processando linhas e colunas

Uma matriz pode ser analisada de maneiras diferentes, dependendo do problema:

- **Somar uma linha** (o laço varia a coluna `j`):
  ```c
  soma = 0;
  for (j = 0; j < COLUNAS; j++) {
      soma += matriz[linha][j];
  }
  ```
- **Somar uma coluna** (o laço varia a linha `i`):
  ```c
  soma = 0;
  for (i = 0; i < LINHAS; i++) {
      soma += matriz[i][coluna];
  }
  ```
- **Processar toda a matriz** (dois laços aninhados):
  ```c
  for (i = 0; i < LINHAS; i++) {
      for (j = 0; j < COLUNAS; j++) {
          // processa matriz[i][j]
      }
  }
  ```

**Reflexão (exemplo da cafeteria):** se cada linha é um produto e cada coluna é um dia, a soma de uma **linha** é o total vendido de um produto, e a soma de uma **coluna** é o total vendido de todos os produtos em um dia.

### Decompondo a solução (pensamento computacional)

Exemplo: calcular a média de cada estudante e achar a maior média.

- **Decomposição:** leitura → cálculo das médias → busca da maior média.
- **Reconhecimento de padrão:** cada aluno corresponde a **uma linha** processada da mesma forma.

**Etapa 1: armazenar as notas**
```c
for (i = 0; i < ALUNOS; i++) {
    for (j = 0; j < AVALIACOES; j++) {
        scanf("%f", &notas[i][j]);
    }
}
```

**Etapa 2: calcular a média de cada linha e guardar a maior**
```c
for (i = 0; i < ALUNOS; i++) {
    soma = 0.0f;

    for (j = 0; j < AVALIACOES; j++) {
        soma += notas[i][j];
    }

    media = soma / AVALIACOES;

    if (i == 0 || media > maiorMedia) {
        maiorMedia = media;
        melhorAluno = i;
    }
}
```

### Arrays com mais de duas dimensões

A linguagem C permite arrays com **três ou mais dimensões**.

```c
int estoque[2][3][4];
```

Uma interpretação possível: 2 lojas, 3 setores por loja e 4 produtos por setor.

```c
estoque[loja][setor][produto];
```

- A **quantidade de índices acompanha a quantidade de dimensões**.
- Nesta etapa, o foco principal permanece nos arrays de **uma e duas dimensões**.

### Atenção: arrays em C não protegem você

- **Não existe `.length`:** `vetor.length` não existe em C. Use uma constante (`#define TAM 5`) ou mantenha o tamanho em uma variável.
- **Não existe `new` para declarar arrays comuns:** basta `int vetor[10];`.
- **Arrays locais não recebem zero automaticamente:** inicialize explicitamente com `int vetor[10] = {0};`.
- **Índice inválido não gera necessariamente uma mensagem de erro:** `vetor[10] = 5;` é comportamento indefinido se o tamanho for 10.
- **Não podemos copiar arrays com atribuição simples:** `destino = origem;` não copia arrays em C. A cópia deve ser feita **elemento a elemento**.

### String também é vetor em C

Uma **string** é um array de caracteres (`char`) **terminado por `'\0'`**.

```c
char nome[6] = "Marco";
```

- `nome[0] = 'M'`
- `nome[1] = 'a'`
- `nome[2] = 'r'`
- `nome[3] = 'c'`
- `nome[4] = 'o'`
- `nome[5] = '\0'` (caractere terminador)

Por causa do `'\0'`, o array precisa ter **uma posição a mais** do que o número de letras do texto.

### Uso simples de strings

**Com `scanf`:**
```c
char nome[20];

printf("Digite seu nome: ");
scanf("%19s", nome);

printf("Nome digitado: %s\n", nome);
```

**Com `fgets`:**
```c
char nome[20];

printf("Digite seu nome: ");
fgets(nome, 20, stdin);

printf("Nome digitado: %s\n", nome);
```

**Observações:**
- `%s` é usado para exibir (e ler) strings.
- Ao ler com `scanf("%s", ...)`, **não usamos `&nome`**, pois o nome do array já representa o endereço.
- `scanf("%s", nome)` lê apenas **até o primeiro espaço** (ex.: "Ana Paula Silva" vira só `Ana`).
- `fgets()` é mais adequada para ler textos **com espaços** e lê a linha completa (incluindo o `\n` no final).

### Principais funções de string (`string.h`)

Para usar, inclua a biblioteca:
```c
#include <string.h>
```

- **`strlen(string)`:** retorna quantos caracteres a string possui (**não conta** o `\0`).
  ```c
  char texto[] = "C";
  int tamanho = strlen(texto);  // Retorna 1
  ```
- **`strcmp(string1, string2)`:** compara duas strings caractere por caractere, **diferenciando** maiúsculas e minúsculas. Retorna `0` quando as strings são idênticas.
  ```c
  if (strcmp("abc", "abc") == 0) {
      /* Iguais! */
  }
  if (strcmp("abc", "ABC") != 0) {
      /* Diferentes! */
  }
  ```
- **`strcasecmp(string1, string2)`:** funciona como `strcmp()`, mas **ignora** maiúsculas e minúsculas (ótimo para sistemas de busca). Retorna `0` quando são iguais.
  ```c
  if (strcasecmp("Qua", "qua") == 0) {
      /* Retorna 0 (Iguais) */
  }
  ```

> 💡 **Observação:** `strcasecmp()` não faz parte do C padrão. No Linux/WSL ela fica em `<strings.h>` e, em alguns compiladores no Windows, o equivalente é `_stricmp()`.

### Desafio da aula: personalizando com nomes

Usar um vetor de strings para os **dias da semana** e outro para os **produtos**, personalizando as mensagens do exercício da cafeteria.

```c
const char *produtos[] = {"café", "coxinha", "bolo"};
const char *dias_semana[] = {"seg", "ter", "qua"};
```

> 💡 **Atenção:** uma variável comum guarda um **valor**; um **ponteiro** (`*`) guarda um **endereço**. Em C, `&` obtém o endereço de uma variável e `*` acessa o valor armazenado nesse endereço.

### Síntese: o que aprendemos

- **Vetores:** `tipo nome[TAMANHO];`, acessados com **um índice** (`vetor[i]`) e normalmente percorridos com **um laço**.
- **Matrizes:** `tipo nome[LINHAS][COLUNAS];`, acessadas com **dois índices** (`matriz[i][j]`) e normalmente percorridas com **laços aninhados**.
- **Padrões que continuam aparecendo:** acumular, contar, comparar, buscar maior/menor, filtrar e percorrer dados sistematicamente.

> 🏆 **Reflexão final:** o array não resolve o problema sozinho. Ele **organiza os dados** para que o algoritmo possa processá-los de maneira sistemática.

### Exercícios da aula

Os enunciados dos exercícios propostos nesta aula estão reunidos separadamente em `README_aula8_enunciados.md`.

### Cheat sheet: vetores e matrizes em C

- **Declarar vetor:** `int v[5];`
- **Declarar e inicializar:** `int v[5] = {10, 20, 30, 40, 50};`
- **Zerar tudo:** `int v[5] = {0};`
- **Acessar elemento:** `v[i]` (índices de `0` a `TAM - 1`)
- **Declarar matriz:** `int m[3][4];`
- **Acessar elemento da matriz:** `m[i][j]` (`i` = linha, `j` = coluna)
- **Percorrer vetor:** um `for`
- **Percorrer matriz:** dois `for` aninhados (externo = linhas, interno = colunas)
- **String:** `char nome[N];` e precisa de espaço para o `'\0'`

> 🏆 **Regra de ouro:** o primeiro índice é sempre `0` e o último é `TAM - 1`. Passar disso é comportamento indefinido, e o C não avisa.

# Aula 8.1 - Desafio: Análise de Vendas de Chips de Telefonia Móvel

## Contexto

Uma empresa de consultoria foi contratada para analisar o desempenho das vendas de chips de três operadoras de telefonia móvel: **Vivo**, **Claro** e **TIM**.

Para realizar o estudo, foram coletadas as quantidades de chips vendidos por cada operadora durante os **12 meses** de um determinado ano.

## Problema

Considerando os dados armazenados na matriz, desenvolva um programa em linguagem C que permita analisar o desempenho das vendas ao longo do ano.

O programa deverá determinar:

1. a média mensal geral de vendas, considerando todas as operadoras e todos os meses;
2. a média anual de vendas de cada operadora;
3. o mês que apresentou a maior média de vendas, considerando conjuntamente as três operadoras;
4. a operadora que apresentou o maior total de vendas no ano.

### Observações

- Considere criar dois vetores: o primeiro para armazenar os meses e o segundo para as operadoras:

```c
const char *meses[] = {"jan", "fev", ..., "dez"};
const char *operadoras[] = {"Vivo", "Claro", "Tim"};
```

- Arredondar os dados para o **inteiro superior mais próximo**.

## Entrada

Considere, para teste, a seguinte quantidade de chips vendidos:

    Vivo:
    120 135 150 140 160 175 180 170 165 190 200 210

    Claro:
    110 125 145 150 155 160 170 180 175 185 195 205

    TIM:
    100 115 130 125 140 150 160 155 170 175 185 190

## Saída esperada

O programa deverá apresentar as informações calculadas em um formato semelhante a:

    RELATORIO ANUAL DE VENDAS

    Media mensal geral: 160 chips

    Media da Vivo: 167 chips
    Media da Claro: 163 chips
    Media da TIM: 150 chips

    Mes com maior media de vendas: dez - 605 chips
    Operadora com maior venda anual: Vivo - 167 chips

## Para pensar antes de programar

- Nem todos os resultados exigem percorrer a matriz da mesma maneira.
- Use o pensamento computacional:
  - **Decomposição:** leitura → cálculo das médias → busca da maior média.
  - **Reconhecimento de padrões:**
    - Cada operadora corresponde a uma **linha** processada da mesma forma. Para calcular a média de uma operadora, nos interessa percorrer **uma linha**.
    - Cada **coluna** corresponde a um mês. Para descobrir o melhor mês, interessa **comparar as colunas**.
    - Para obter a média geral, precisamos considerar **todos os elementos** da matriz.
