#include <stdlib.h>

typedef struct lligada {
    int valor;
    struct lligada *prox;
} *LInt;

int listToArray (LInt l, int v[], int N){
    int cont = 0;
    while(N>0 && l != NULL){
        v[cont] = l->valor;
        l = l->prox;
        cont++;
        N--;
    }

    return cont;
}