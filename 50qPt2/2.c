#include <stdlib.h>

typedef struct lligada {
    int valor;
    struct lligada *prox;
} *LInt;

void freeL (LInt l){
    LInt aux = l;
    LInt temp;
    
    while (aux != NULL){
        temp = aux;
        aux = aux ->prox;
        free(temp);
    }
}