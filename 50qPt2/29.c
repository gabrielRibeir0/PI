#include <stdlib.h>

typedef struct nodo {
    int valor;
    struct nodo *esq, *dir;
} *ABin;

ABin cloneAB (ABin a){
    if(a == NULL)
        return NULL;

    ABin novo = malloc(sizeof(struct nodo));
    novo->valor = a->valor;
    novo->esq = cloneAB(a->esq);
    novo->dir = cloneAB(a->dir);

    return novo;
}