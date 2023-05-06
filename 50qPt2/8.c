#include <stdlib.h>

typedef struct lligada {
    int valor;
    struct lligada *prox;
} *LInt;

void splitQS (LInt l, int x, LInt *mx, LInt *Mx){
    if(l == NULL)
        return;

    if(l->valor < x){
        *mx = l;
        *Mx = NULL;
        splitQS(l->prox, x, &((*mx)->prox), Mx);
    }
    else{
        *Mx = l;
        *mx = NULL;
        splitQS(l->prox, x, mx, &((*Mx)->prox));
    }
}