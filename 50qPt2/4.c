#include <stdio.h>

typedef struct lligada {
    int valor;
    struct lligada *prox;
} *LInt;

LInt reverseL (LInt l){
    LInt atual = l;
    LInt ant = NULL;
    LInt prox = NULL;

    while (atual != NULL){
        prox = atual->prox;
        atual->prox = ant;
        ant = atual;
        atual = prox;
    }

    return ant;
}