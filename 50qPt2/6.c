#include <stdlib.h>

typedef struct lligada {
    int valor;
    struct lligada *prox;
} *LInt;

int removeOneOrd (LInt *l, int x){
    LInt atual = *l;
    LInt ant = NULL;

    while (atual != NULL && atual->valor != x){
        ant = atual;
        atual = atual->prox;
    }

    if(atual == NULL){
        return 1;
    }
    
    if(ant == NULL)
        *l = atual->prox;
    else
        ant->prox = atual->prox;

    return 0;
}