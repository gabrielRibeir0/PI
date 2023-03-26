void addTo (int N, int M, int a [N][M], int b[N][M]){
    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            a[i][j] += b[i][j];
        }
    }
}