void somasAc (int v[], int Ac [], int N){
    int soma;
    for(int i = 0; i < N; i++){
        soma = 0;
        for(int j = 0; j <= i; j++){
            soma += v[j];
        }
        Ac[i] = soma;
    }
}