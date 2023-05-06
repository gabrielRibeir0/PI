#include <stdlib.h>

typedef struct lligada {
    int valor;
    struct lligada *prox;
} *LInt;

int removeAll (LInt *l, int x){
    LInt atual = *l;
    LInt ant = NULL;
    int cont = 0;

    while(atual != NULL){
        if(atual->valor == x){
            cont++;

            if(ant == NULL){
                *l = atual->prox;
            }
            else{
                ant->prox = atual->prox;
            }
        }
        else{
            ant = atual;
        }
        
        atual = atual->prox;
    }

    return cont;
}