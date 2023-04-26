#include <stdio.h>
#include <stdlib.h>

typedef struct slist {
    int valor;
    struct slist * prox;
} *LInt;

LInt newLInt (int x, LInt xs) {
    LInt r = malloc (sizeof(struct slist));

    if (r!=NULL) {
        r->valor = x; r->prox = xs;
    }

    return r;
}

typedef LInt Stack;

typedef struct{
    LInt inicio, fim;
} Queue;

//1
void initStack(Stack *s){
    *s = NULL;
}

int SisEmpty(Stack s){
    return(s == NULL);
}

int push(Stack *s, int x){
    Stack new = newLInt(x, *s);
    if(new == NULL)
        return 1;

    *s = new;

    return 0;
}

int pop(Stack *s, int *x){
    if(*s == NULL)
        return 1;
    Stack aux;
    *x = (*s)->valor;
    aux = (*s)->prox;
    free(*s);
    *s = aux;

    return 0;
}