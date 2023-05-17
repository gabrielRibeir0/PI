#include "histograma.h"
#include <string.h>
#include <stdlib.h>

typedef struct nodo {
    char *pal;
    int ocorr;
    struct nodo *esq, *dir;
} *Arvore;

struct histograma {
    Arvore raiz;
};

Histograma *init() {
    Histograma *h = malloc(sizeof(struct histograma));
    h->raiz = NULL;
    return h;
}

int insere(Histograma *h, char *p) {
    Arvore *aux = &(h->raiz);
    while ((*aux != NULL) && (strcmp((*aux)->pal,p) != 0)) {
        if (strcmp((*aux)->pal,p) < 0) aux = &((*aux)->dir);
        else aux = &((*aux)->esq);
    }
    if (*aux == NULL) {
        *aux = malloc(sizeof(struct nodo));
        if (*aux == NULL) return 1;
        (*aux)->pal = strdup(p);
        (*aux)->ocorr = 1;
        (*aux)->esq = NULL;
        (*aux)->dir = NULL;
    } else {
        (*aux)->ocorr++;
    }
    return 0;
}

Arvore maisFrequenteAux(Arvore h) {
    if (h == NULL) return NULL;
    Arvore max = h;
    Arvore maxe = maisFrequenteAux(h->esq);
    Arvore maxd = maisFrequenteAux(h->dir);
    if (maxe && maxe->ocorr > max->ocorr) max = maxe;
    if (maxd && maxd->ocorr > max->ocorr) max = maxd;
    return max;
}

int maisFrequente(Histograma *h, char *p) {
    if (h->raiz == NULL) return 0;
    Arvore max = maisFrequenteAux(h->raiz);
    strcpy(p,max->pal);
    return max->ocorr;
}

void libertaAux(Arvore h) {
    if (h == NULL) return;
    libertaAux(h->esq);
    libertaAux(h->dir);
    free(h->pal);
    free(h);
}

void liberta(Histograma *h) {
    libertaAux(h->raiz);
    free(h);
}
