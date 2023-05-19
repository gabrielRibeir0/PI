#include <stdlib.h>

typedef struct nodo {
    int valor;
    struct nodo *esq, *dir;
} *ABin;

//1)
//a)
ABin removeMenor (ABin *a) {
    if(*a == NULL)
        return NULL;

    ABin menor;

    while((*a)->esq != NULL){
        a = &((*a)->esq);
    }

    menor = *a;
    *a = (*a)->dir;

    return menor;
}

//b)
void removeRaiz (ABin *a){
    ABin menor = removeMenor(&((*a)->dir));
    menor->dir = (*a)->dir;
    menor->esq = (*a)->esq;
    free(*a);
    *a = menor;
    //ou só trocar os valores
        //(*a)->valor = menor->valor; free(menor);
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