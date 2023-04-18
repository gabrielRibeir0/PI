#include <stdio.h>

typedef struct lligada {
    int valor;
    struct lligada *prox;
} *LInt;

void imprimeL (LInt l){
    LInt aux = l;

    while (aux != NULL){
        printf("%d\n",aux->valor);
        aux = aux->prox;
    }
}