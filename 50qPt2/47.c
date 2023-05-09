#include <stdlib.h>

typedef struct nodo {
    int valor;
    struct nodo *esq, *dir;
} *ABin;

int maiorAB (ABin a){
    while(a->dir != NULL){
        a = a->dir;
    }

    return a->valor;
}