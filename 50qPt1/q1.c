int main(){
    int n, max;
    max = 0;

    scanf("%d", &n);
    
    if(n != 0){
        max = n;
        while(1){
            scanf("%d", &n);
            
            if(n == 0)
                break;  
            if(n > max)
                max = n;
        }
    }
    printf("Maior: %d\n", max);
    return 0;
}