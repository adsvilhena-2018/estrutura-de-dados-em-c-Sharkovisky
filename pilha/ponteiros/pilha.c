#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
    int valor;
    struct node *prox;
}node;

typedef struct Pilha{
    node *comeco;
}pilha;

void criarPilha(pilha *pilha){
    pilha->comeco = NULL;
}

void comecarPilha(pilha *pilha, int valor){
    pilha->comeco = malloc(sizeof(node));
    pilha->comeco->valor = valor;
    pilha->comeco->prox = NULL;
}

void inserirPilhaComeco(pilha *pilha, int valor){
    if(pilha->comeco==NULL){
        comecarPilha(pilha, valor);
    }else{
        node *nod = malloc(sizeof(node));
        nod->prox=NULL;
        nod->valor=valor;
        
        node *aux = pilha->comeco;
        while(aux->prox!=NULL){
            aux=aux->prox;
        }
        aux->prox=nod;
        nod->prox=NULL;
        
       // node *aux = pilha->comeco;
        //while(aux->prox!=NULL){
        //    aux=aux->prox;
       // }
       // aux->prox=nod;
       // nod->prox=NULL;
    }
}

void imprimirPilha(pilha pilha){
    node *aux = pilha.comeco;
    while(aux!=NULL){
        printf("%d\n", aux->valor);
        aux=aux->prox;
    }
}

void removerPrimeiro(pilha *pilha){
    node *aux = pilha->comeco;
    for(int i=0;i<1;i++){
        //aux=aux->prox;
        
    }
    printf("2o: %d\n", aux->valor);
    
}


int main()
{
    pilha pilha;
    criarPilha(&pilha);
    comecarPilha(&pilha, 5);
    inserirPilhaComeco(&pilha, 15);
    inserirPilhaComeco(&pilha, 1);
    imprimirPilha(pilha);
    removerPrimeiro(&pilha);
    imprimirPilha(pilha);
    return 0;
}
