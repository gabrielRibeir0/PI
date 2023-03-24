#include <string.h>
char *strstr (char s1[], char s2[]){
    int i, igual = 1;
    for(i = 0; i < strlen(s1); i++){
        igual = 1;
        for(int j = 0; j < strlen(s2); j++){
            if(s1[i+j] != s2[j]){
                igual = 0;
                break;  
            }
        }

        if(igual)
            return s1 + i;
    }
    if(igual)
        return s1 + i;
    return NULL;
}