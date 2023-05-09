#include <stdlib.h>

typedef struct lligada {
    int valor;
    struct lligada *prox;
} *LInt;

int maximo (LInt l){
    int max = l->valor;

    while(l != NULL){
        if(l->valor > max)
            max = l->valor;
        
        l = l->prox;
    }

    return max;
}