# Algoritmos e Pensamento Computacional
Aula do melhor professor Marco Antonio que existe

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
