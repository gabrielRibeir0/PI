int bitsUm (unsigned int n){
    int r = 0;
    
    while (n != 0){
        r += (n % 2);
        n /= 2;
    }

    return r;
}