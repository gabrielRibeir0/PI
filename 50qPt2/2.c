#include <stdlib.h>

typedef struct lligada {
    int valor;
    struct lligada *prox;
} *LInt;

void freeL (LInt l){
    LInt aux = l->prox;
    LInt temp;
    while (l->prox != NULL){
        temp = aux->prox;
        free(aux);
        aux = temp;
    }
    free(l); 
}