#include <stdlib.h>

typedef struct lligada {
    int valor;
    struct lligada *prox;
} *LInt;

void insertOrd (LInt *l, int x){
    LInt novo = malloc(sizeof(struct lligada));
    novo->valor = x;

    LInt atual = *l;
    LInt ant = NULL;

    while (atual != NULL && atual->valor < x){
        ant = atual;
        atual = atual->prox;
    }

    if (ant == NULL){
        novo->prox = *l;
        *l = novo;
    }
    else{
        novo->prox = atual;
        ant->prox = novo;
    }
}