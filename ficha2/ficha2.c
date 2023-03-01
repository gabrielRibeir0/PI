//Ex 1
float multInt1(int n, float m){
    float r = 0;
    for(int i = 1; i <= n; i++){
        r += m;
    }
    return r;
}

//Ex 2
float multInt2(int n, float m){
    float r = 0;
    while(n >= 1){
        if (n % 2 != 0)
            r += m;
        n /= 2;
        m *= 2;
    }
    return r;
}

//Ex 3
int mdc(int a, int b){
    int min;
    
    if (a > b)
        min = b;
    else 
        min = a;
    
    for(int i = min; i > 0 ; i--){
        if (a % i == 0 && b % i == 0)
            return i;
    }
}
