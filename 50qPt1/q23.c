#include <string.h>
int palindorome (char s[]){
    int c = strlen(s);
    int palindromo = 1;

    for(int i = 0; i < c/2 ; i++){
        if(s[i] != s[c-i-1])
            palindromo = 0;
    }

    return palindromo;
}