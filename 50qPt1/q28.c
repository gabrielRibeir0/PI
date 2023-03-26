int crescente (int a[], int i, int j){
    for(int n = i+1; n <= j; n++){
        if(a[n-1] > a[n])
            return 0;
    }

    return 1;
}