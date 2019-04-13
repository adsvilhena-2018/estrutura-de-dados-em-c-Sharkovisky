#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
    int valor;
    struct node *prox;
}node;

typedef struct Lista{
    node *comeco;
    node *fim;
}lista;

void comecarLista(lista *lista){
    lista->comeco = NULL;
    lista->fim = NULL;
}

void inserirPrimeiro(lista *lista, int valor){
    lista->comeco = malloc(sizeof(node));
    lista->comeco->prox=NULL;
    lista->comeco->valor=valor;
    lista->fim = lista->comeco;
}

void inserirFim(lista *lista, int valor){
    if(lista->comeco==NULL){
        inserirPrimeiro(lista, valor);
    }else{
        node *nod = malloc(sizeof(node));
        nod->prox=NULL;
        nod->valor=valor;

        node *aux = lista->comeco;
        while(aux->prox!=NULL){
            aux = aux->prox;
        }
        aux->prox=nod;
        nod->prox=NULL;
    }
}

void inserirMeio(lista *lista, int num, int valor){
        int tamanho=0;
        if(lista->comeco==NULL) {
            inserirPrimeiro(lista, valor);
        }else {
            node *nod = lista->comeco;
            while(tamanho<num-1){
                nod = nod->prox;
                tamanho++;
            }
            

        }
    }


void imprimirLista(lista lista){
    node *aux = lista.comeco;
    while(aux!=NULL){
        printf("%d\n", aux->valor);
        aux=aux->prox;

    }
}

int main() {
    lista lista;
    comecarLista(&lista);
    inserirPrimeiro(&lista, 35);
    inserirFim(&lista, 60);
    inserirFim(&lista, 65);
    inserirFim(&lista, 70);
    inserirMeio(&lista, 1, 50);
    imprimirLista(lista);
    return 0;
}
