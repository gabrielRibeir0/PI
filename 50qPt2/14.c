#include <stdlib.h>

typedef struct lligada {
    int valor;
    struct lligada *prox;
} *LInt;

void appendL (LInt *l, int x){
    LInt novo = malloc(sizeof(struct lligada));
    novo->prox = NULL;
    novo->valor = x;

    if((*l) == NULL){
        (*l) = novo;
        return;
    }
    
    LInt aux = (*l);

    while(aux->prox != NULL){
        aux = aux->prox;
    }

    aux->prox = novo;
}