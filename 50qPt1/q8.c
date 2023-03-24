#include <string.h>
char *strcpy (char *dest, char source[]){
    int i;

    for(i = 0; i < strlen(source); i++){
     *(dest + i)= source[i];
    }

    *(dest + i)  = '\0';
    
    return dest;
}