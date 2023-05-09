#include <stdlib.h>

typedef struct lligada {
    int valor;
    struct lligada *prox;
} *LInt;

int take (int n, LInt *l){
    LInt aux = (*l), ant = NULL;
    int tamanho = 0;
    while(aux != NULL && n > 0){
        ant = aux;
        aux = aux->prox;
        tamanho++;
        n--;
    }

    if(aux == NULL)
        return tamanho;
    
    LInt temp;
    ant->prox = NULL;

    while(aux != NULL){
        temp = aux;
        aux = aux->prox;
        free(temp);
    }

    return tamanho;
}