#include <stdlib.h>

typedef struct lligada {
    int valor;
    struct lligada *prox;
} *LInt;

LInt Nforward (LInt l, int N){
    if(l == NULL)
        return NULL;

    while(N > 0){
        N--;
        l = l->prox;
    }

    return l;
}