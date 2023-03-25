int iguaisConsecutivos (char s[]){
    int max = 0, seq = 1;

    for(int i = 0; s[i] != '\0'; i++){
        if(s[i] == s[i+1])
            seq++;
        else{
            if(seq > max){
                max = seq;
                seq = 1;
            }   
        }
    }

    return max;
}