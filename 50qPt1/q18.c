#include <string.h>
int maiorSufixo (char s1 [], char s2 []){
    int suf = 0;

    for(int i = strlen(s1) - 1, j = strlen(s2) - 1; i >= 0 && j >= 0 && s1[i--] == s2[j--]; suf++);

    return suf;
}