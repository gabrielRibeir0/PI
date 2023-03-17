int trailingZ (unsigned int n){
    int r = 0;

    while(n % 2 != 1){
        if(n == 0)
            return 32;
        n /= 2;
        r++;
    }
    
    return r;
}