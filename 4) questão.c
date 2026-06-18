#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX 100

//estrutura da pilha
typedef struct {
    int dados[MAX];
    int topo;
} Pilha;

//função de inicialização da Pilha
void inicializar(Pilha *p){
    p->topo = -1;
}

//função push (Empilhar) -- Adiciona um novo elemento no topo da pilha
void push(Pilha*p, int valor){
    if(p->topo<MAX - 1){
        p->dados[++(p->topo)] = valor;
    } else {
        printf("Erro: Pilha cehia\n");
    }
}

//função pop (remover) --  Remove o elemento que está no topo da pilha
int pop(Pilha *p){
    if(p->topo>=0){
        return p->dados[(p->topo)--];
    } else {
        printf("Erro: Pilha vazia\n");
        exit(1);
    }
}


int main(){
    char exp[MAX];
    Pilha p;
    inicializar(&p);
    
    
printf("Digite a expressao de Notacao Polonesa Inversa (ex: 53 + 9*):");
fgets(exp, MAX, stdin);
exp[strcspn(exp, "\n")] = 0;//remove a quebra de linha do fgets

for(int i=0; exp[i] != '\0'; i++){
    char caractere = exp[i];
    
    if (caractere == ' ')continue;//ignora espaços
    
    //Se for um operando (0 a 9)
    if (caractere>='0' && caractere <= '9'){
        push(&p, caractere - '0');//converte char para int
    } else {
        //se for um operador, desempilha os dois últimos
        int b = pop(&p);
        int a = pop(&p);
        
        switch(caractere){
            case '+': push(&p, a + b); break;
            case '-': push(&p, a - b); break;
            case '*': push(&p, a * b); break;
            case '/':
            if(b == 0){
                printf("Erro: Divisao por zero\n");
                return 1;
            }
            push(&p, a/b);
            break;
            default:
            printf("Erro:Operador invalido (%c)\n", caractere);
            return 1;
        }
} 

}
    printf("Resultado: %d\n", pop(&p));
    return 0;
}
