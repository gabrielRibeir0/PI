#include <stdlib.h>

typedef struct lligada {
    int valor;
    struct lligada *prox;
} *LInt;

LInt cloneL (LInt l){
    if(l == NULL)
        return NULL;
    
    LInt novo = malloc(sizeof(struct lligada));
    novo->valor = l->valor;
    novo->prox = clone(l->prox);

    return novo;
}