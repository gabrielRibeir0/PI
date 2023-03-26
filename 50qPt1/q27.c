void merge (int r [], int a[], int b[], int na, int nb){
    int i = 0, j = 0;
    while (i + j < na + nb) {
        if(i == na){
            r[i+j] = b[j];
            j++;
            continue;
        }
        else if(j == nb){
            r[i+j] = a[i];
            i++;
            continue;
        }
        
        if(a[i] < b[j]) {
            r[i+j] = a[i];
            i++;
        }
        else {
            r[i+j] = b[j];
            j++;
        }
    }
}