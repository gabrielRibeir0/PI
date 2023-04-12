#include <stdio.h>
#include <string.h>

int eVogal(char c){
    return(c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U' || 
           c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

//1)
int contaVogais(char *s){
    int r = 0;

    for(int i = 0; i < strlen(s); i++){
        if(eVogal(s[i]))
            r++;
    }

    return r;
}

//2)
int retiraVogaisRep(char *s){
    int r = 0;
    char cAnterior = '\0';

    for(int i = 0; i < strlen(s); i++){
        if(eVogal(s[i])){
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

//3)
int duplicaVogais(char *s){
    char aux[strlen(s)*2+1];
    int i, j, count = 0;

    for(i = j =0; s[i] != '\0'; i++){
        if(eVogal(s[i])){
            count++;
            aux[j++] = s[i];
            aux[j] = s[i];
        }
        else{
            aux[j] = s[i];
        }
        j++;
    }
    aux[j] = '\0';
    strcpy(s, aux);

    return count;
}