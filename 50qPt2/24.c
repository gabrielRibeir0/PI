#include <stdlib.h>

typedef struct lligada {
    int valor;
    struct lligada *prox;
} *LInt;

LInt somasAcL (LInt l){
    int soma = 0;
    LInt lista = NULL, aux = NULL;

    while(l != NULL){
        soma += l->valor;
        
        LInt novo = malloc(sizeof(struct lligada));
        novo->valor = soma;
        novo->prox = NULL;

        if(lista == NULL)
            lista = aux = novo;
        else{
            aux->prox = novo;
            aux = novo;
        }

        l = l->prox;
    }

    return lista;
}