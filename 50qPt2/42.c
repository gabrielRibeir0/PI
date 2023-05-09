#include <stdlib.h>

typedef struct nodo {
    int valor;
    struct nodo *esq, *dir;
} *ABin;

int contaFolhas (ABin a){
    if(a == NULL)
        return 0;
    
    if(a->esq == NULL && a->dir == NULL)
        return 1;
    
    return contaFolhas(a->esq) + contaFolhas(a->dir);
}