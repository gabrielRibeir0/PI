int minInd (int v[], int n){
    int indiceMin = 0;
    for(int i = 1; i < n; i++){
        if(v[i] < v[indiceMin])
            indiceMin = i;
    }

    return indiceMin;
}