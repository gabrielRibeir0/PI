#include <stdlib.h>

typedef struct lligada {
    int valor;
    struct lligada *prox;
} *LInt;

int drop(int n, LInt *l){
    LInt aux;
    int rem = 0;

    while((*l) != NULL && n > 0){
        aux = (*l);
        (*l) = (*l)->prox;
        free(aux);
        n--;
        rem++;
    }

    return rem;
}