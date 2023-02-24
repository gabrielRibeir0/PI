#include <stdio.h>

void quadrado(int n){
    for(int i = 0; i < n; i++){
        for(int i = 0; i < n; i++){
            putchar ('#');
        }
        putchar ('\n');
    }

    /* versão com ciclo while
    void linha(int n){
        int i = 0;
        while (i < n){
            putchar ('#');
            i++;
        }
    }

    void quadrado(int n){
        int i = 0;
        while (i < n){
            linha(n);
            i++;
            putchar ('\n');
        }
    }*/
}

/* versão com ciclo while
void linha(int n){
    int i = 0;
    while (i < n){
        putchar ('#');
        i++;
    }
}

void quadrado(int n){
    int i = 0;
    while (i < n){
        linha(n);
        i++;
        putchar ('\n');
    }
}*/

void xadrez(int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if (i % 2 == j % 2)
                putchar ('#');
            else putchar ('_');
        }
        putchar ('\n');
    }
}


int main(){
    printf ("Ex 3.1:\n");
    quadrado(5);

    printf ("\nEx 3.2:\n");
    xadrez(5);

    printf ("\nEx 3.3: triangulo.c\n");

    printf ("\nEx 3.4:\n");

    printf ("\nEx 3.5:\n");


    return 0;
}