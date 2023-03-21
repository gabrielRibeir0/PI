#include <stdio.h>

int main(){
    int n, i = 0;
    float media, soma = 0;
    //Ter em conta se o primeiro núemro é 0 (?)
    while(1){
        scanf("%d", &n);
        if(n == 0)
            break;  
        i++;
        soma += n;
    }

    media = soma / i;
    
    printf("Média: %.2f\n", media);
    return 0;
}