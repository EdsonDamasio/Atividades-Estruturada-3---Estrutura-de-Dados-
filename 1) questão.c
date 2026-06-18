#include <stdio.h>
#include <stdlib.h>

#define MAX 100//Tamanho máximo da pilha


//Estrutura da Pilha
struct Pilha {
	int itens[MAX];
	int topo;
};

//função para inicializar a Pilha
void inicializarPilha(struct Pilha *p) {
	p->topo = -1;
}

//função para verificação para saber se a pilha está cheia
int estaCheia(struct Pilha *p) {
	if (p->topo == MAX - 1)
		return 1;
	return 0;
}

//função  para verificação para saber se a pilha está vazia
int estaVazia(struct Pilha *p) {
	if (p->topo == -1)
		return 1;
	return 0;
}

// função para inserir um elemento na pilha
void empilhar(struct Pilha *p, int valor) {
	if (estaCheia(p)) {
		printf("Erro: Pilha cheia!\n");
	} else {
		p->topo++;
		p->itens[p->topo] = valor;
	}
}

//função para remover e retornar o elemento ao topo da pilha
int desempilhar(struct Pilha *p) {
	if(estaVazia(p)) {
		printf("Erro: Pilha vazia\n");
		return -1;
	} else {
		int valorRetornado = p->itens[p->topo];
		p->topo--;

		return valorRetornado;
	}
}


int main()
{
	int numeroDecimal, resto;
	struct Pilha p;

	//Inicialização  da pilha
	inicializarPilha(&p);

	//Leitura do número
	do {
		printf("Digite um numero inteiro maior que zero: ");
		scanf("%i", &numeroDecimal);

		if(numeroDecimal <= 0) {
			printf("Numero invalido! Digite um valor maior que zero.\n");
		}
	} while (numeroDecimal <= 0);

	printf("o numero %i convertido para binario eh: ", numeroDecimal);

	//Algoritmo de conversão usando pilha
	while (numeroDecimal > 0) {
		resto = numeroDecimal % 2;//Pega o resto da divisão por 2
		empilhar(&p, resto);//Empilha o resto
		numeroDecimal/=2;//Divide o número por 2
	}

	//Desempilha e exibe os restos para mostrar o binário na ordem correta
	while(!estaVazia(&p)) {
		printf("%d", desempilhar(&p));
	}
	printf("\n");

	return 0;
}