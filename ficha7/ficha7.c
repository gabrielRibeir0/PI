#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct celula {
    char *palavra;
    int ocorr;
    struct celula *prox;
} *Palavras;

//1)
void libertaLista(Palavras p){
    while (p != NULL){
        Palavras aux = p;
        p = p->prox;
        free(aux->palavra);
        free(aux);

    }
}

//2)
int quantasP (Palavras l){
    int cont = 0;
    Palavras aux = l;

    while (aux != NULL){
        cont++;
        aux = aux->prox;
    }
        
    return cont;
}

//3)
void listaPal(Palavras l){
    Palavras aux = l;

    while(aux != NULL){
        printf("%s %d\n", aux->palavra, aux->ocorr);
        aux = aux->prox;
    }
}

//4)
char *ultima(Palavras l){
    if(l == NULL)
        return NULL;
    
    Palavras aux = l;

    while (aux->prox != NULL){
        aux = aux->prox;
    }

    return aux->palavra;
}

//5)
Palavras acrescentaInicio(Palavras l, char *p){
    Palavras new = malloc(sizeof(struct celula));

    // não pode ser simplesmente new->palavra = p; pois o char *p do argumento está numa zona de memória 'read-only', logo quando tentarmos dar free vai dar erro
    char *aux = malloc(sizeof(char) * (strlen(p) + 1));
    strcpy(aux, p);
    new->palavra = aux;
    //o strdup() faz isto

    new->ocorr = 1;
    new->prox = l;

    return new;
}

//6)
Palavras acrescentaFim(Palavras l, char *p){
    Palavras new = malloc(sizeof(struct celula));
    char *auxChar = malloc(sizeof(char) * (strlen(p) + 1));
    strcpy(auxChar, p);
    new->palavra = auxChar;
    new->ocorr = 1;
    new->prox = NULL;

    if(l == NULL){
        l = new;
        return l;
    }
    
    Palavras aux = l;

    while(aux->prox != NULL){
        aux = aux->prox;
    }

    aux->prox = new;

    return l;
}

//7)
Palavras acrescenta(Palavras l, char *p) {
    Palavras new = malloc(sizeof(struct celula));
    char *auxChar = malloc(sizeof(char)*(strlen(p)+1));
    strcpy(auxChar, p);
    new->palavra = auxChar;
    new->ocorr = 1;
    new->prox = NULL;
    Palavras ant = NULL;
    Palavras aux = l;

    while(aux != NULL && strcmp(aux->palavra, p) < 0){
        ant = aux;
        aux = aux->prox;
    }

    if(aux != NULL && strcmp(aux->palavra, p) == 0){
        aux->ocorr++;
    }
    else{
        new->prox = aux;
        if (ant == NULL)
            l = new;
        else
            ant->prox = new;
    }

    return l;
}


//8)
struct celula *maisFreq (Palavras l){
    Palavras aux = l;
    int max = 0;
    Palavras maxCelula = NULL;
    
    while(aux != NULL){
        if(aux->ocorr > max){
            max = aux->ocorr;
            maxCelula = aux;
        }
        aux = aux->prox;
    }

    return maxCelula;
}