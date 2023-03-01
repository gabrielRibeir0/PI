#include <math.h>
#include <stdio.h>

int main(){
    int nCardinal = 0,raio,i,j;
    scanf("%d",&raio);

    for(i = 0; i < 2*raio+1;i++){
        for(j=0; j < 2*raio+1;j++){
            float x = raio - i;
            float y = raio - j;
            float dist = sqrt(x*x + y*y);

            if(dist <= raio){
                putchar('#');
                nCardinal++;
            } 
            else{
                putchar(' ');
            }
        }
        putchar('\n');
    }
    printf("%d\n",nCardinal);
    return 0;
}