#include <string.h>

//1)
int ordenado(int *v, int N){
    for(int i = 1; i < N; i++){
        if(v[i-1] > v[i])
            return 0;
    }
    return 1;
}

//2)
void merge (int a[], int na, int b[], int nb, int r[]){

}

//3)
int partition (int v[], int N, int x){
    return 0;
}