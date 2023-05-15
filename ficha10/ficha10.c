#include <stdlib.h>

typedef struct nodo {
    int valor;
    struct nodo *esq, *dir;
} *ABin;

//1)
//a)
ABin removeMaiorA (ABin *a) {
    if(*a == NULL)
        return NULL;
    
    if((*a)->esq == NULL){
        ABin temp = *a;
        *a = (*a)->dir;
        return temp;
    } 
    else
        return removeMenor(&((*a)->esq));
}

//b)
void removeRaiz (ABin *a){
}

//c)
int removeElem (ABin *a, int x){
    ABin temp = *a;
    ABin ant = NULL;
    ABin atual = *a;

    while (atual != NULL) {
        if(atual->valor == x)
            break;
        
        ant = atual;

        if (x < atual->valor)
            atual = atual->esq; 
        else
            atual = atual->dir;
    }

    if(atual == NULL)
        return 1;

    if(ant == NULL)
        *a = NULL;
    else if(atual == ant->esq)
        ant->esq = NULL;
    else
        ant->dir = NULL;

    free(atual);

    return 0;
}