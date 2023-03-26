int comunsOrd (int a[], int na, int b[], int nb){
    int i = 0, j= 0, count = 0;
    while(i < na && j < nb){
        if(a[i] == b[j]){
            count++;
            i++;
            j++;
        }
        else if(a[i] > b[j]) 
            j++;
        else 
            i++;
    }
}