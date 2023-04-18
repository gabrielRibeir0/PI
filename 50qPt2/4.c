#include <stdio.h>

typedef struct lligada {
    int valor;
    struct lligada *prox;
} *LInt;

LInt reverseL (LInt l){
    LInt aux = l;
    LInt anterior = NULL;

    while (aux->prox != NULL){
        LInt new = malloc(sizeof(struct lligada));
        new->valor = aux->valor;
        new->prox = NULL;
    }
}