#include <stdlib.h>

typedef struct lligada {
    int valor;
    struct lligada *prox;
} *LInt;

LInt parteAmeio (LInt *l){
    LInt nova = malloc(sizeof(struct lligada));
    nova = *l;
    LInt atual = *l;
    LInt ant = NULL;
    int tamanho;

    while(atual != NULL) {
        tamanho++;
        atual = atual->prox;
    }

    atual = *l;

    while(tamanho/2 > 0){
        ant = atual;
        atual = atual->prox;
        tamanho--;
    }
    ant->prox = NULL;
    *l = atual;

    return nova;
}