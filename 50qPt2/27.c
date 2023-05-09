#include <stdlib.h>

typedef struct lligada {
    int valor;
    struct lligada *prox;
} *LInt;

LInt parte (LInt l){
    if(l == NULL || l->prox == NULL)
        return NULL;
    
    LInt novo = l->prox;
    l->prox = l->prox->prox;
    novo->prox = parte(l->prox);
    
    return novo;
}