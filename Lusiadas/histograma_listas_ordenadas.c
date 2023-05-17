#include "histograma.h"
#include <string.h>
#include <stdlib.h>

typedef struct nodo {
    char *pal;
    int ocorr;
    struct nodo *prox;
} *Lista;

struct histograma {
    Lista cabeca;
};

Histograma *init() {
    Histograma *h = malloc(sizeof(struct histograma));
    h->cabeca = NULL;
    return h;
}

int insere(Histograma *h, char *p) {
    Lista *aux = &(h->cabeca);
    while ((*aux != NULL) && (strcmp((*aux)->pal,p) < 0)) {
        aux = &((*aux)->prox);
    }
    if (*aux == NULL || (strcmp((*aux)->pal,p) != 0)) {
        Lista new = malloc(sizeof(struct nodo));
        if (new == NULL) return 1;
        new->pal = strdup(p);
        new->ocorr = 1;
        new->prox = *aux;
        *aux = new;
    } else {
        (*aux)->ocorr++;
    }
    return 0;
}
int maisFrequente(Histograma *h, char *p) {
    Lista aux = h->cabeca;
    Lista max = h->cabeca;
    if (aux == NULL) return 0;
    while (aux != NULL) {
        if (aux->ocorr > max->ocorr) max = aux;
        aux = aux->prox;
    }
    strcpy(p,max->pal);
    return max->ocorr;
}

void liberta(Histograma *h) {
    Lista aux = h->cabeca;
    while (aux != NULL) {
        Lista tmp = aux;
        aux = aux->prox;
        free(tmp->pal);
        free(tmp);
    }
    free(h);
}
