#include <stdlib.h>

typedef struct lligada {
    int valor;
    struct lligada *prox;
} *LInt;

int removeDups(LInt *l) {
    int cont = 0;
    
    for(; *l; l = &((*l)->prox)) {
        LInt prevAux = (*l), aux = (*l)->prox;
        for(; aux; aux = prevAux->prox) {
            if(aux->valor == (*l)->valor) {
                prevAux->prox = aux->prox;
                cont++;
            }
            else 
                prevAux = aux;
        }
    }

    return cont;
}