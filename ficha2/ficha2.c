#include <stdio.h>

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

//Ex 4
int mdc2(int a, int b){
    int i = 0;
    while(a > 0 && b > 0){
        if (a>b){
            a -= b;
        }
        else{
            b -= a;
        }
        i++;
    }
    printf("%d\n", i);       
    return a+b;   
}

//Ex 5
int mdc3(int a, int b){
    int i = 0;
    while(a > 0 && b > 0){
        if (a>b){
            a %= b;
        }
        else{
            b %= a;
        }
        i++;
    }
    printf("%d\n", i);       
    return a+b;   
}

//Ex 6
//a)
int fib1(int n){
    if(n < 2){
        return n;
    }
    else{
        return (fib1(n-1) + fib1(n-2));
    }
}

//b)
int fib2(int n){
    int a = 0, b = 1, i = 2,r;
    if (n < 2)
        return n;
    while(i <=  n){ 
        r = a + b;
        a = b;
        b = r;
        i++;
    }
    return r;
}

int main(){
    return 0;
}