#include <stdlib.h>

typedef struct lligada {
    int valor;
    struct lligada *prox;
} *LInt;

int length (LInt l){
    int r = 0;

    while (l != NULL){
        r++;
        l = l->prox;
    }
    
    return r;
}