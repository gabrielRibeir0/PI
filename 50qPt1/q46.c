int cardinalMSet (int N, int v[N]){
    int num = 0;
    for(int i = 0; i < N; i++){
        num += v[i];
    }

    return num;
}