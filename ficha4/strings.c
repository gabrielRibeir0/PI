#include <stdio.h>
#include <string.h>

int contaVogais(char *s){
    int r = 0;

    for(int i = 0; i < strlen(s); i++){
        if(s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U' || 
           s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
            r++;
    }

    return r;
}

int retiraVogaisRep(char *s){
    int r = 0;
    char cAnterior = '\0';

    for(int i = 0; i < strlen(s); i++){
        if(s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U' ||
           s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'){
                if(s[i] == cAnterior)
                    r++;
                else
                    cAnterior = s[i];
        }
        else{
            cAnterior = '\0';
        }

        s[i - r] = s[i];
    }

    s[strlen(s) - r] = '\0';
    return r;
}

int duplicaVogais(char *s){
    int r = 0;
    return r;
}