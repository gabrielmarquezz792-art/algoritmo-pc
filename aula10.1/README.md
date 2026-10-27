## Aula 10.1 - Desafio: Monitoramento de Consumo de Energia de Laboratórios

Desafio de aplicação da **modularização com funções** sobre uma **matriz**: em vez de resolver tudo dentro da `main()`, o problema é decomposto em subproblemas, e cada um vira uma função com responsabilidade própria.

### Contexto

Uma universidade deseja acompanhar o consumo de energia elétrica de seus laboratórios de informática. Durante uma semana, foi registrado o consumo diário, em kWh, de quatro laboratórios: **Lab A**, **Lab B**, **Lab C** e **Lab D**.

Os dados ficam armazenados em uma matriz:

- cada **linha** representa um laboratório;
- cada **coluna** representa um dia da semana.

### Problema

Desenvolva um programa em C que determine:

1. o consumo total geral de energia durante a semana;
2. o consumo médio de cada laboratório;
3. o dia que apresentou o maior consumo total, considerando todos os laboratórios;
4. o laboratório que apresentou o maior consumo total durante a semana;
5. quantos registros de consumo ficaram **acima de 100 kWh**.

O programa deve utilizar **funções** para dividir as responsabilidades da solução.

**Decomposição sugerida** (os nomes são sugestões; outras soluções são possíveis, desde que o programa seja adequadamente modularizado):

```c
float calcular_total(float consumo[][7], int laboratorios);

float calcular_media_laboratorio(float consumo[][7], int laboratorio);

int buscar_dia_maior_consumo(float consumo[][7], int laboratorios);

int buscar_laboratorio_maior_consumo(float consumo[][7], int laboratorios);

int contar_acima_limite(float consumo[][7], int laboratorios, float limite);
```

### Observações

- Criar vetores para identificar os dias e os laboratórios:

```c
const char *dias[] = {"seg", "ter", "qua", "qui", "sex", "sab", "dom"};
const char *laboratorios[] = {"Lab A", "Lab B", "Lab C", "Lab D"};
```

- A matriz pode ser declarada como `float consumo[4][7];`
- Considera-se consumo elevado qualquer registro **acima de 100 kWh**.
- Apresentar as médias com **duas casas decimais**.
- As funções de busca podem retornar o **índice** do laboratório ou do dia encontrado:

```c
int dia = buscar_dia_maior_consumo(consumo, 4);

printf("%s", dias[dia]);
```

### Entrada

Consumo em kWh para teste:

    Lab A:
    80  90  95  110  120  100  85

    Lab B:
    75  85  90  105  115  95  80

    Lab C:
    100  110  120  130  125  115  105

    Lab D:
    70  80  85  90  100  95  75

### Saída esperada

    ===== RELATORIO DE CONSUMO =====

    Consumo total geral: 2725.00 kWh

    Media do Lab A: 97.14 kWh
    Media do Lab B: 92.14 kWh
    Media do Lab C: 115.00 kWh
    Media do Lab D: 85.00 kWh

    Dia com maior consumo total:
    sex - 460.00 kWh

    Laboratorio com maior consumo semanal:
    Lab C - 805.00 kWh

    Registros acima de 100 kWh: 10

> ⚠️ **Conferência dos valores:** o enunciado original indicava 9 registros acima de 100 kWh, mas pelos dados de teste o resultado correto é **10** (Lab A: 2, Lab B: 2, Lab C: 6, Lab D: 0; o valor `100` **não** conta, pois a regra é "acima de"). Os demais valores foram conferidos e estão corretos.

### Para pensar antes de programar

**1. Não comece pela `main()`.** Antes de escrever o programa, identifique os subproblemas:

    Problema maior
          ↓
    Analisar o consumo de energia
          ↓
    ┌──────────┬──────────┬──────────┬──────────┐
    total      médias     buscas     contagem

Pergunta-guia: *qual responsabilidade pode se transformar em uma função?*

**2. Pensamento computacional: decomposição.** Em vez de um único bloco grande (ler, calcular tudo, buscar tudo, exibir tudo), a solução é organizada em módulos:

    main()
       ├── calcular_total()
       ├── calcular_media_laboratorio()
       ├── buscar_dia_maior_consumo()
       ├── buscar_laboratorio_maior_consumo()
       └── contar_acima_limite()

> 💡 **Modularizar é transformar a decomposição do problema em código.**

**3. Como percorrer a matriz.** Nem todas as funções percorrem os dados da mesma maneira:

- **média de um laboratório:** interessa uma **linha**;
- **dia de maior consumo:** interessam as **colunas**;
- **total geral** e **contagem acima do limite:** interessam **todos os elementos**.

**4. O que cada função recebe e retorna?** Antes de programar uma função: qual é a sua responsabilidade → quais dados ela precisa → o que ela retorna. Exemplo com `contar_acima_limite()`:

- **Entrada:** matriz + número de laboratórios + limite;
- **Processamento:** percorrer os dados e contar os valores `> limite`;
- **Saída:** quantidade encontrada.

**5. Por que não usamos `&consumo`?** Ao usar um array ou matriz como parâmetro (`float consumo[][7]`), a função recebe acesso aos elementos da matriz **original**. Por isso a chamada é `calcular_total(consumo, 4);` e não `calcular_total(&consumo, 4);`.

> 💡 Em parâmetros de função, arrays são tratados essencialmente por meio de **ponteiros para seus elementos**.

### Desafios extras

1. **Retirar o "4" das funções:** criar as constantes e usá-las na declaração da matriz e nas chamadas:

```c
#define LABS 4
#define DIAS 7
```

2. **Relatório modularizado:** depois que o programa estiver funcionando, criar:

```c
void gerar_relatorio(
    float consumo[][7],
    const char *laboratorios[],
    const char *dias[],
    int quantidade_laboratorios
);
```

A `main()` fica responsável principalmente por **coordenar a execução**, e as funções realizam os processamentos:

    main()
      └── gerar_relatorio()
              ├── calcular_total()
              ├── calcular_media_laboratorio()
              ├── buscar_dia_maior_consumo()
              ├── buscar_laboratorio_maior_consumo()
              └── contar_acima_limite()
