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
