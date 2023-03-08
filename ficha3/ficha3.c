//Ex 1
/* a)
int main () {
    int x [15] = {1, 2, 3, 4, 5,
                 6, 7, 8, 9,10,
                11,12,13,14,15};
    int *y, *z, i;
    y = x;
    z = x+3;
    for (i=0; i<5; i++) {
        printf ("%d %d %d\n", x[i], *y, *z);
        y = y+1; z = z+2;
    }
}

Output:
1 1 4
2 2 6
3 3 8
4 4 10
5 5 12

x é um array de tamanho 15 com números de 1 a 15 ordenados 
y é o endereço de x[0], logo *y = 1
z é o endereço de x[3], logo *z = 4

no ciclo for com 5 iterações, é imprimido x[i] e os valores de *y e *z 
também y passa a referir-se ao endereço da próxima 'casa' de x e z 'salta 2 casas', logo na próxima iteração *y = 2 e *z = 6
*/

/*b)
int main () {
  int i, j, *a, *b;
    
  i=3; j=5;
  a = b = 42;
  a = &i; b = &j;                  *a = 3 , *b = 5
  i++;                              i = 4 , *a = 4
  j = i + *b;                       j = 4 + 5 = 9
  b = a;                            *b = *a = 4
  j = j + *b;                       j = 9 + 4 = 13
  printf ("%d\n", j);               13

  return 0;
}

Output: 13
*/

//Ex 2
void swapM(int *x, int *y){
    int aux = *x;
    *x = *y;
    *y = aux;
}

//Ex 3
void swap (int v[], int i, int j){
    int aux = v[i];
    v[i] = v[j];
    v[j] = aux;
}

//Ex 4
int soma (int v[], int N){
    int soma = 0;
    for(int i = 0; i < N; i++){
        soma += v[i];
    }
    return soma;
}

//Ex 5
void inverteArray1 (int v[], int N){        // A usar a função do Ex 3
    int i = 0, j = N - 1;
    
    while(i < j){
        swap(v, i, j);
        i++;
        j--;
    }
}

void inverteArray2 (int v[], int N){        // A usar a função do Ex 2
    int i = 0, j = N - 1;
    
    while(i < j){
        swapM(&v[i], &v[j]);
        i++;
        j--;
    }
}