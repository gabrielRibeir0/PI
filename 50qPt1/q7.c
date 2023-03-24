#include <string.h>
char *strcat(char s1[], char s2[]){
    int i = strlen(s1);
    int j = 0;

    for(; s2[j] != '\0'; i++, j++){
        s1[i] = s2[j];
    }

    s1[i] = '\0';

    return s1;
}