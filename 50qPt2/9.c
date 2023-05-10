#include <stdlib.h>

typedef struct lligada {
    int valor;
    struct lligada *prox;
} *LInt;

LInt parteAmeio (LInt *l){
    LInt nova = malloc(sizeof(struct lligada));
    
    if(nova == NULL)
        return NULL;
    
    nova = *l;
    LInt atual = *l;

    int tamanho = 0;

    while(atual != NULL) {
        tamanho++;
        atual = atual->prox;
    }

    if(tamanho == 1)
        return NULL;
    
    atual = *l;

    for(int i = 0; i < tamanho/2 - 1; i++){
        atual = atual->prox;
    }

    *l = atual->prox;
    atual->prox = NULL;

    return nova;
}