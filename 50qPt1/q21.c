int contaVogais (char s[]){
    int r = 0;

    for(int i = 0; s[i] != '\0'; i++){
        if(s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U' || 
           s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
            r++;
    }

    return r;
}