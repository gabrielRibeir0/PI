#include <stdlib.h>

typedef struct lligada {
    int valor;
    struct lligada *prox;
} *LInt;

void concatL (LInt *a, LInt b){
    if((*a) == NULL){
        (*a) = b;
        return;
    }

    LInt aux = (*a);

    while(aux->prox != NULL){
        aux = aux->prox;
    }

    aux->prox = b;
}