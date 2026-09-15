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

---
*Desenvolver → Testar → Explicar → Avaliar → Melhorar*
