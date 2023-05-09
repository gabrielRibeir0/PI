#include <stdlib.h>

typedef struct lligada {
    int valor;
    struct lligada *prox;
} *LInt;

void init (LInt *l){
    if((*l) == NULL)
        return;
    
    LInt aux = (*l);
    LInt ant = NULL;
    
    while(aux->prox != NULL){
        ant = aux;
        aux = aux->prox;
    }

    if(ant != NULL)
        ant->prox = NULL;
    else
        (*l) = NULL;
    free(aux);
}