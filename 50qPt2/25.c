#include <stdlib.h>

typedef struct lligada {
    int valor;
    struct lligada *prox;
} *LInt;

void remreps (LInt l){
    if(l != NULL){
        while(l->prox){
            if(l->prox->valor == l->valor){
                LInt temp = l->prox;
                l->prox = temp->prox;
                free(temp);
            }
            else
                l = l->prox;
        }
    }
}