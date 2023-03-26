int unionMSet (int N, int v1[N], int v2[N], int r[N]){
    for(int i = 0; i < N; i++){
        if(v1[i] > 0 || v2[i] > 0){
            if(v1[i] > v2[i])
                r[i] = v1[i];
            else
                r[i] = v2[i];
        }
        else 
            r[i] = 0;
    }

    return 0;
}