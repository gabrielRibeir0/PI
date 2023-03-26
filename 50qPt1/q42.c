int unionSet (int N, int v1[N], int v2[N], int r[N]){
    for(int i = 0; i < N; i++){
        if(v1[i] || v2[i])
            r[i] = 1;
        else 
            r[i] = 0;
    }

    return 0;
}