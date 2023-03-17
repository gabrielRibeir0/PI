int qDig (unsigned int n){
    int r = 0;

    while(n > 0){
        r++;
        n /= 10;
    }
    
    return r;
}