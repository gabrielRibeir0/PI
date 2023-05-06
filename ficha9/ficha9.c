#include <stdlib.h>
#include <stdio.h>

typedef struct nodo {
    int valor;
    struct nodo *esq, *dir;
} *ABin;

ABin newABin (int r, ABin e, ABin d) {
    ABin a = malloc (sizeof(struct nodo));
    if (a != NULL) {
        a->valor = r; a->esq = e; a->dir = d;
    }
    return a;
}

//1)
//a)
int altura(ABin a){
    if (a == NULL)
        return 0;
    
    int altEsq = altura(a->esq);
    int altDir = altura(a->dir);

    return altEsq > altDir ? altEsq + 1 : altDir + 1;
}

//b)
int nFolhas(ABin a){
    if(a == NULL)
        return 0;
    
    if(a->esq == NULL && a->dir == NULL)
        return 1;
    
    return nFolhas(a->esq) + nFolhas(a->dir);
}

//c)
ABin maisEsquerda(ABin a){
    if(a->esq == NULL)
        return a;

    while(a->esq != NULL){
        a = a->esq;
    }

    return a;
}

//d)
void imprimeNivel(ABin a, int l){
    if(l == 0){
        printf("%d\n", a->valor);
        return;
    }

    imprimeNivel(a->esq, l-1);
    imprimeNivel(a->dir, l-1);  
}

//e)
int procuraE(ABin a, int x){
    if(a == NULL)
        return 0;

    if(a->valor == x)
        return 1;
    
    return (procuraE(a->esq, x) || procuraE(a->dir, x));
}

//2)
//f)
struct nodo *procura(ABin a, int x){
    while(a != NULL && a->valor != x){
        a = a->valor > x ? a->esq : a->dir;
    }

    return a;
}

//g)
int nivel(ABin a, int x){
    int cont = 0;

    while(a != NULL && a->valor != x){
        a = a->valor > x ? a->esq : a->dir;
        cont++;
    }

    if(a == NULL)
        return -1;
    
    return cont;
}

//h)
void printArvore(ABin a, int x){
    if(a == NULL)
        return;
    
    printf("%d\n", a->valor);

    printArvore(a->esq, x);
    if(a->dir != NULL && a->dir->valor < x)
        printArvore(a->dir, x);
    else 
        printArvore(a->dir->esq, x);
}

void imprimeAte(ABin a, int x){
    if(a == NULL)
        return;
    
    while(a->valor >= x){
        a = a->esq;
    }

    printArvore(a, x);  
}