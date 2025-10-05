#  Meu Diário de Bordo: 

Este repositório serve como meu diário de bordo e portfólio para os conteúdos e projetos desenvolvidos na disciplina de Lógica de Programação na Fatec Itaquera.

O objetivo é registrar o conhecimento adquirido, demonstrar a aplicação prática dos conceitos e facilitar a revisão futura.

## Conteúdo

| Tópico Principal | Conteúdos Específicos | Habilidades Demonstradas |
| :--- | :--- | :--- |
| **Fundamentos de Programação** | Declaração de Variáveis (`int`, `float`), Tipos Primitivos, Operadores Aritméticos e Lógicos. | Leitura e escrita de código limpo, manipulação básica de dados numéricos. |
| **Estruturas Condicionais** | `if`, `else`, `else if`. | Criação de lógica de decisão complexa (Ex: Classificação de IMC, Par/Ímpar, Aprovação de Notas). |
| **Estruturas de Repetição** | `for`, `while`, `do-while`. | Implementação de laços para iteração e otimização de tarefas repetitivas. |
| **Modularização** | Criação e chamada de **Funções**. | Organização de código em blocos reutilizáveis para melhor legibilidade e manutenção. |


## Funções: 

| Função | Uso |
| :--- | :--- |
| **`printf()`** | Responsável por exibir dados (texto, variáveis) na tela (saída de dados). |
| **`scanf()`** | Responsável por ler a entrada de dados do usuário via teclado (entrada de dados). |

## Libs


| Biblioteca | Descrição |
| :--- | :--- |
| **`stdio.h`** | Standard Input/Output (Entrada/Saída Padrão). Essencial para as funções `printf()` e `scanf()`. |
| **`math.h`** | Contém funções matemáticas, como `pow()` (potenciação), utilizada em cálculos como o IMC. |
| **`locale.h`** | Permite a configuração da localização (ex: para usar vírgula como separador decimal) em algumas implementações. |
| **`stdlib.h`** | (Adicional) Contém funções de uso geral, como alocação de memória e conversão de tipos. |


## Variaveis

`=` É para atribuição de variaveis


## Constante

Dentro da função usa `const` e de uso global usa `#define`

## Ponteiros e endereçamento de memória

A diferença entre `&f` e `f` é fundamentalmente a diferença entre **o endereço** e **o valor** de uma variável.

-----

### Diferença entre `&f` e `f` em C

| Característica | `f` (Variável) | `&f` (Endereço/Ponteiro) |
| :--- | :--- | :--- |
| **O que é?** | O **valor** armazenado na variável. | O **endereço de memória** onde o valor `f` está armazenado. |
| **Símbolo Usado?** | Nenhuma. | O operador **"e comercial"** ou **endereço de (`&`)**. |
| **Tipo de Dado** | O tipo declarado (ex: `float`, `int`). | O tipo "ponteiro para" o tipo declarado (ex: `float *`, `int *`). |
| **Uso Principal** | Em cálculos, comparações e para exibir o valor com `printf()`. | Usado por `scanf()` e ao trabalhar com **ponteiros**. |
| **Exemplo Mental**| "A caixa tem o número **10.5** dentro." | "A caixa está localizada no **endereço 0x7FFE...**." |

-----

### 1\. `f` (O Valor)

Quando você usa apenas `f`, você está se referindo ao **conteúdo** da variável.

Se você declarar:

```c
float f = 10.5;
```

  * Em uma operação matemática: `f + 2` resulta em `12.5`.
  * Em uma função de saída: `printf("%.2f", f)` exibe `10.50`.

### 2\. `&f` (O Endereço de Memória)

O operador `&` (e comercial) é o **operador de endereço**. Ele retorna o **endereço de memória** (o ponteiro) de onde a variável `f` está fisicamente armazenada no computador.

  * O endereço é um número hexadecimal que indica a localização exata da variável.
  * Em uma função de saída: `printf("%p", &f)` exibiria algo como `0x7ffee21f450c`.

### Uso Crucial com `scanf()`

A principal razão pela qual você vê o `&` é na função `scanf()`:

```c
float f;
printf("Digite um valor: ");
scanf("%f", &f);
```

**Por que o `&` é obrigatório aqui?**

A função `scanf()` precisa saber **onde** colocar o novo valor que o usuário digitou. Ela não pode apenas receber o valor atual de `f` (que seria inútil).

1.  `f` passaria o **valor** (Ex: `0.0` se não inicializado) para `scanf()`. Isso não permitiria que `scanf()` alterasse o valor.
2.  `&f` passa o **endereço de memória** para `scanf()`. `scanf()` usa esse endereço (que é um **ponteiro**) para ir diretamente àquele local na memória e **alterar o valor** de `f`.

Em resumo, **`f`** é o que está **dentro** da caixa, e **`&f`** é o **rótulo com o endereço** da caixa.