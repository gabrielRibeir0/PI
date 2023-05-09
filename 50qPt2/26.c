#include <stdlib.h>

typedef struct lligada {
    int valor;
    struct lligada *prox;
} *LInt;

LInt rotateL (LInt l){
    if(l == NULL || l->prox == NULL)
        return l;
    
    LInt prim = l;
    l = l->prox;
    prim->prox = NULL;

    LInt aux = l;
    while(aux->prox != NULL){
        aux = aux->prox;
    }

    aux->prox = prim;

    return l;
}