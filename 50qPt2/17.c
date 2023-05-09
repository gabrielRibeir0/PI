#include <stdlib.h>

typedef struct lligada {
    int valor;
    struct lligada *prox;
} *LInt;

LInt cloneRev (LInt l){
    LInt lista = NULL;

    while(l != NULL){
        LInt novo = malloc(sizeof(struct lligada));
        novo->valor = l->valor;
        novo->prox = lista;
        lista = novo;

        l = l->prox;
    }

    return lista;
}