#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
    int valor;
    struct node *ante;
    struct node *prox;
}node;

typedef struct Lista{
    node *comeco;
    node *fim;
}lista;

void criarLista(lista *lista){
    lista->comeco = NULL;
    lista->fim = NULL;
}

void inserirListaPrimeiro(lista *lista, int valor){
    lista->comeco = malloc(sizeof(node));
    lista->comeco->valor=valor;
    lista->comeco->ante=NULL;
    lista->comeco->prox=NULL;
}

void inserirListaFim(lista *lista, int valor){
    if(lista->comeco==NULL){
        inserirListaPrimeiro(lista, valor);
    }else{
        node *nod = malloc(sizeof(node));
        nod->valor = valor;
        node *aux = lista->comeco;
        while(aux->prox!=NULL){
            aux=aux->prox;
        }
        aux->prox=nod;
        nod->ante=aux;
        nod->prox=NULL;
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
    criarLista(&lista);
    inserirListaPrimeiro(&lista, 5);
    inserirListaFim(&lista, 2);
    inserirListaFim(&lista, 18);
    inserirListaFim(&lista, 15);
    imprimirLista(lista);
    return 0;
}
