#include <stdlib.h>

typedef struct nodo {
    int valor;
    struct nodo *esq, *dir;
} *ABin;

int altura (ABin a){
    if(a == NULL)
        return 0;
    
    int altEsq = altura(a->esq);
    int altDir = altura(a->dir);
    return 1 + (altEsq > altDir ? altEsq : altDir);
}