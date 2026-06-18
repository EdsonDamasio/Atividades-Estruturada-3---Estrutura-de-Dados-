# Atividade Estruturada 3 - Estrutura de Dados

Atividade proposta na disciplina **Estrutura de Dados** do curso de **Ciência da Computação**, sob orientação do professor **Afonso Nirton**.

---

# Lista de Exercícios - Pilhas

## Questão 1 - Conversão de Decimal para Binário

### Enunciado

Faça um programa em C para ler um número inteiro maior que zero, converter este número de decimal para binário utilizando uma estrutura de pilha e apresentar o resultado da conversão na tela.

### Objetivo

Aplicar o conceito de pilha na conversão de bases numéricas, armazenando os restos das divisões sucessivas por 2 e exibindo-os na ordem correta.

### Dica

Utilize o método das divisões sucessivas por 2:

1. Divida o número por 2.
2. Armazene o resto da divisão na pilha.
3. Continue dividindo o quociente por 2 até que ele seja igual a zero.
4. Desempilhe todos os elementos para obter a representação binária correta.

---

## Questão 2 - Verificação de Parênteses

### Enunciado

Construa um programa em C que utilize a estrutura de pilha para verificar se o número de parênteses de abertura é igual ao número de parênteses de fechamento em uma expressão.

### Objetivo

Utilizar a pilha para validar expressões contendo parênteses.

### Dica

* Empilhe cada símbolo `'('` encontrado.
* Ao encontrar um símbolo `')'`, remova um elemento da pilha.
* Ao final da leitura:

  * Se a pilha estiver vazia, a quantidade de parênteses está correta.
  * Caso contrário, a expressão possui erro de balanceamento.

### Exemplo

Expressão válida:

```text
(a+b)*(c+d)
```

Expressão inválida:

```text
((a+b)
```

---

## Questão 3 - Verificação de Palíndromo

### Enunciado

Uma palavra é considerada um palíndromo quando pode ser lida da esquerda para a direita ou da direita para a esquerda sem alterar sua sequência de caracteres.

Exemplos:

* raiar
* ovo
* ana
* mussum

Escreva um programa em C que reconheça se uma palavra informada pelo usuário é ou não um palíndromo.

### Objetivo

Aplicar a estrutura de pilha para comparar caracteres de uma palavra.

### Dica

1. Conte a quantidade de letras da palavra.
2. Insira a primeira metade dos caracteres na pilha.
3. Compare os elementos desempilhados com a segunda metade da palavra.
4. Se todos coincidirem, a palavra é um palíndromo.

### Exemplos

Palíndromos:

```text
ovo
ana
raiar
```

Não são palíndromos:

```text
computador
estrutura
pilha
```

---

## Questão 4 - Notação Polonesa Reversa (Pós-Fixa)

### Enunciado

Escreva um programa em C que calcule o valor de uma expressão em Notação Polonesa Reversa (Notação Pós-Fixa).

Considere:

* As quatro operações matemáticas básicas:

  * Soma (+)
  * Subtração (-)
  * Multiplicação (*)
  * Divisão (/)
* Apenas dígitos de 0 a 9.

### Objetivo

Utilizar uma pilha para avaliar expressões matemáticas escritas em notação pós-fixa.

### Observação

Na Notação Polonesa Reversa, o operador é escrito após os operandos.

Dessa forma, não há necessidade de utilizar parênteses, pois a ordem de execução já está implícita.

### Exemplos

#### Exemplo 1

Notação Infixa:

```text
(2 + 3) * 5
```

Notação Pós-Fixa:

```text
23+5*
```

Resultado:

```text
25
```

---

#### Exemplo 2

Notação Infixa:

```text
2 + 3 * 5
```

Notação Pós-Fixa:

```text
235*+
```

Resultado:

```text
17
```

### Dica

1. Percorra a expressão caractere por caractere.
2. Quando encontrar um número, empilhe-o.
3. Quando encontrar um operador:

   * Desempilhe os dois últimos operandos.
   * Realize a operação.
   * Empilhe o resultado.
4. Ao final, o único elemento restante na pilha será o resultado da expressão.

---

## Conteúdos Trabalhados

Esta atividade aborda os seguintes conceitos da disciplina Estrutura de Dados:

* Estrutura de dados do tipo Pilha (Stack);
* Operações de Empilhar (Push);
* Operações de Desempilhar (Pop);
* Conversão de bases numéricas;
* Balanceamento de símbolos;
* Manipulação de strings;
* Verificação de palíndromos;
* Avaliação de expressões matemáticas em notação pós-fixa.

