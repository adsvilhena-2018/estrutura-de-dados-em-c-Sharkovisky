#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
    int valor;
    struct node *prox;
}node;

typedef struct Fila{
    node *comeco;
    node *fim;
}fila;

void criarFila(fila *fila){
    fila->comeco=NULL;
}

void inserirPrimeiroFila(fila *fila, int valor){
    fila->comeco = malloc(sizeof(node));
    fila->comeco->valor = valor;
    fila->comeco->prox = NULL;
}

void inserirFilaFim(fila *fila, int valor){
    if(fila->comeco==NULL){
        inserirPrimeiroFila(fila, valor);
    }else{
        node *nod = malloc(sizeof(node));
        nod->prox = NULL;
        nod->valor=valor;
        
        node *aux = fila->comeco;
        while(aux->prox!=NULL){
            aux=aux->prox;
        }
        aux->prox=nod;
        nod->prox=NULL;
    }
}

void imprimirFila(fila fila){
    node *aux = fila.comeco;
    while(aux!=NULL){
        printf("%d\n", aux->valor);
        aux=aux->prox;
    }
}

void retirarFila(fila *fila){
    node *aux = fila->comeco;
    for(int i=0;i<1;i++){
        aux=aux->prox;
        
    }
    printf("2o: %d\n", aux->valor);
    fila->comeco = aux;
    fila->comeco->prox = aux->prox;
    
    
    
}

int main()
{
    fila fila;
    criarFila(&fila);
    inserirPrimeiroFila(&fila, 5);
    inserirFilaFim(&fila, 2);
    inserirFilaFim(&fila, 15);
    imprimirFila(fila);
    retirarFila(&fila);
    imprimirFila(fila);

    return 0;
}
