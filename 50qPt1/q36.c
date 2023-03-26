int comuns (int a[], int na, int b[], int nb){
    int count = 0;
    for(int i = 0; i < na; i++){
        for(int j = 0; j <nb ; j++){
            if(a[i] == b[j]){
                count++;
                break;
            }
        }
    }
    
    return count;
}