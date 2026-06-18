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
void pop(Pilha *p) {
	p->topo--;
}


int main() {

	char exp[MAX];

	Pilha p;
	inicializar(&p);
	
	printf("Digite a expressao: ");
    scanf("%s", exp);
    
    for(int i=0; exp[i] != '\0'; i++){
        
        if(exp[i] == '(')
        push(&p, '(');
        
        else if(exp[i] == ')'){
            
            if(p.topo == -1){
                printf("Parenteses incorretos\n");
                return 0;
            }
            
            pop(&p);
        }
        
    }
    
    if(p.topo == -1)
    printf("Parenteses corretos\n");
    
    else 
    printf("Parenteses incorretos\n");
    
	return 0;
}
