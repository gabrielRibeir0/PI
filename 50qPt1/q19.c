int sufPref (char s1[], char s2[]){
    int size = 0;
    for(int i = 0; s1[i] != '\0'; i++){
        if(s1[i] == s2[size])
            size++;
        else
            size = 0;
    }

    return size;
}