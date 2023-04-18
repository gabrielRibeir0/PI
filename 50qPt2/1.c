#include <stdlib.h>

typedef struct lligada {
    int valor;
    struct lligada *prox;
} *LInt;

int length (LInt l){
    int r = 0;
    LInt aux = l->prox;

    while (aux != NULL){
        r++;
        aux = aux->prox;
    }
    
    return r;
}