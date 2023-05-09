#include <stdlib.h>

typedef struct nodo {
    int valor;
    struct nodo *esq, *dir;
} *ABin;

void mirror (ABin *a){
    if((*a) == NULL)
        return;

    ABin aux = (*a)->esq;
    (*a)->esq = (*a)->dir;
    (*a)->dir = aux;
    
    mirror(&((*a)->dir));
    mirror(&((*a)->esq));
}