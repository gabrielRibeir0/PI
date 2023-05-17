#include <stdio.h>
#include <ctype.h>
#include "histograma.h"

int processa(char s[]) {
    int o,d;
    o = d = 0;
    while (s[o] != '\0' && (isdigit(s[o]) || ispunct(s[o]))) o++;
    while (s[o] != '\0' && (s[o] == '-' || !ispunct(s[o]))) {
        s[d] = tolower(s[o]);
        d++;
        o++;
    }
    s[d] = '\0';
    return d;
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("O programa deve ser invocado da seguinte forma:\n%s nomedoficheiro\n", argv[0]);
        return 1;
    }
    FILE *f = fopen(argv[1],"r");
    if (f == NULL) {
        printf("O ficheiro não existe.\n");
        return 2;
    }
    char pal[100];
    Histograma *h = init();
    while (fscanf(f,"%s",pal) == 1) {
        if (processa(pal) > 0) {
            insere(h,pal);
        }
    } 
    fclose(f);
    int c = maisFrequente(h,pal);
    printf("%s %d\n",pal,c);
    liberta(h);
    return 0;
}