/******************************************************************************
Algoritmo passo a passo

1- Ler palavra
2- Descobrir tamanho
3- Empilhar primeira metade
4- Ignorar letra do meio (se o tamanho for ímpar)
5- Comparar segunda metade com a pilha
*******************************************************************************/

#include <stdio.h>
#include <string.h>

#define MAX 100//Tamanho máximo da pilha

//estrutura da pilha
typedef struct {
	char dados[MAX];
	int topo;

} Pilha;

//função para inicializar a Pilha
void inicializar(Pilha *p) {
	p->topo = -1;
}

//função push (Empilhar) -- Adiciona um novo elemento no topo da pilha
void push(Pilha *p, char caractere) {
	p->dados[++p->topo] = caractere;
}

//função pop (remover) --  Remove o elemento que está no topo da pilha
char pop(Pilha *p) {
	return p->dados[p->topo--];
}


int main()
{
	char palavra[MAX];

	printf("Digite uma palavra: ");
	scanf("%s", palavra);

	int tamanho = strlen(palavra);

	Pilha p;
	inicializar(&p);

	for(int i=0; i<tamanho/2; i++)
		push(&p, palavra[i]);

	int inicio;

	if(tamanho % 2 == 0)
		inicio = tamanho/2;

	else
		inicio = tamanho/2 + 1;

	int palindromo = 1;

	for(int i=inicio; i<tamanho; i++) {

		if(pop(&p) != palavra[i]) {
			palindromo = 0;
			break;
		}

	}

	if(palindromo)
		printf("Eh palindromo\n");

	else
		printf("Nao eh palindromo\n");


	return 0;
}
