#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
    int valor;
    struct node *prox;
}node;

typedef struct Pilha{
    node *comeco;
    node *fim;
}pilha;

void criarPilha(pilha *pilha){
    pilha->comeco = NULL;
    pilha->fim = NULL;
}

void comecarPilha(pilha *pilha, int valor){
    pilha->comeco = malloc(sizeof(node));
    pilha->comeco->valor = valor;
    pilha->comeco->prox = NULL;
    pilha->fim = pilha->comeco;
}

void inserirPilha(pilha *pilha, int valor){
    if(pilha->comeco==NULL){
        comecarPilha(pilha, valor);
    }else{
        node *nod = malloc(sizeof(node));
        nod->prox = NULL;
        nod->valor = valor;
        
        node *aux = pilha->comeco;
        while(aux->prox!=NULL){
            aux=aux->prox;
        }
        pilha->fim=nod;
        aux->prox=nod;
        
    }
}

void imprimirPilha(pilha pilha){
    node *aux = pilha.comeco;
    while(aux!=NULL){
        printf("%d\n", aux->valor);
        aux=aux->prox;
    }
    printf("\n");
}

void imprimirPilhaFim(pilha pilha){
    node *aux = pilha.fim;
    node *aux2 = pilha.comeco;
    //while(aux)
}

void removerPilha(pilha *pilha){
    node *aux = pilha->comeco;
    while(aux->prox!=pilha->fim){
        aux=aux->prox;
    }
    pilha->fim=aux;
    pilha->fim->prox=NULL;
    
}

void mostrarFim(pilha *pilha){
    printf("Fim da pilha: %d\n", pilha->fim->valor);
}

int main()
{
    pilha pilha;
    criarPilha(&pilha);
    comecarPilha(&pilha, 5);
    inserirPilha(&pilha, 2);
    inserirPilha(&pilha, 1);
    inserirPilha(&pilha, 18);
    imprimirPilha(pilha);
    removerPilha(&pilha);
    imprimirPilha(pilha);
    removerPilha(&pilha);
    imprimirPilha(pilha);
    removerPilha(&pilha);
    imprimirPilha(pilha);
    mostrarFim(&pilha);
    return 0;
}
