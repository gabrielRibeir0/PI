#include <stdio.h>

int main(){
    int n, max, sMax;
    sMax = max = 0;

    scanf("%d", &n);
    
    if(n != 0){
        sMax = max = n;
        while(1){
            scanf("%d", &n);
            
            if(n == 0)
                break;  
            if(n > max){
                sMax = max;
                max = n;
            }
            else if(n > sMax)
                sMax = n;
        }
    }
    
    printf("Segundo Maior: %d\n", sMax);
    return 0;
}