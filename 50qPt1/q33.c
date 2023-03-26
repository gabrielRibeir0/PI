int elimRep (int v[], int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < i; j++){
            if(v[i] == v[j]){
                for(int k = i; k < n; k++){
                    v[k] = v[k+1];
                }
                i--;
                n--;
            }
        }
    }

    return n;
}