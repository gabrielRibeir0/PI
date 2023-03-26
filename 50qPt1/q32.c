int maxCresc (int v[], int N){
    int maior=1, cont=1;
    for(int i = 1; i<N; i++){
        if(v[i] >= v[i-1]){
            cont++;
        }
        else {
            if(cont>maior) 
                maior = cont;
            cont = 1;
        }
    }
    if(cont>maior) 
        maior = cont;

    return maior;
}