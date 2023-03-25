char charMaisfreq (char s[]){
    int freq, max = 0;
    char maxFreqChar;

    for(int i = 0; s[i] != '\0'; i++){
        freq = 0;
        
        for(int j = 0; s[j] != '\0'; j++){
            if(s[j] == s[i])
                freq++;
        }

        if(freq > max){
            max = freq;
            maxFreqChar = s[i];
        }
    }

    return maxFreqChar;
}