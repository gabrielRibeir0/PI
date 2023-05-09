#include <stdlib.h>

typedef struct lligada {
    int valor;
    struct lligada *prox;
} *LInt;

int removeMaiorL (LInt *l){
    LInt ant = NULL;
    LInt antMax = NULL;
    LInt maxAux = (*l);
    LInt aux = (*l);

    int maior = aux->valor;

    while(aux != NULL){
        if(aux->valor > maior){
            antMax = ant;
            maxAux = aux;
            maior = aux->valor;
        }
        
        ant = aux;
        aux = aux->prox;
    }

    if(antMax == NULL)
        (*l) = (*l)->prox;
    else
        antMax->prox = maxAux->prox;

    return maior;
}