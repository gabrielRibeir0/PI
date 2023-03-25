#include <string.h>

void strrev (char s[]){
    int c = strlen(s);
    char aux;

    for(int i = 0; i < c/2 ; i++){
        aux = s[i];
        s[i] = s[c - i - 1];
        s[c - i - 1] = aux;
    }
}