#include <stdlib.h>

typedef struct lligada {
    int valor;
    struct lligada *prox;
} *LInt;

void merge (LInt *r, LInt a, LInt b){
    if(a == NULL){
        *r = b;
    }
    else if(b == NULL){
        *r = a;
    }
    else if(a->valor <= b->valor){
        *r = a;
        a = a->prox;
        merge(&(*r)->prox, a, b);
    }
    else{
        *r = b;
        b = b->prox;
        merge(&(*r)->prox, a, b);
    }
}