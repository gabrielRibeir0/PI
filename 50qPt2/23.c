#include <stdlib.h>

typedef struct lligada {
    int valor;
    struct lligada *prox;
} *LInt;

LInt arrayToList (int v[], int N){
    if(N == 0)
        return NULL;
    
    LInt novo = malloc(sizeof(struct lligada));

    if(novo == NULL)
        return NULL;
        
    novo->valor = (*v);
    novo->prox = arrayToList(v + 1, N - 1);

    return novo;
}