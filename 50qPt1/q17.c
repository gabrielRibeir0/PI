int maiorPrefixo (char s1 [], char s2 []){
    int pref = 0;

    for(int i = 0; s1[i] != '\0' && s2[i] != '\0'; i++){
        if(s1[i] == s2[i])
            pref++;
        else
            break;
    }

    return pref;
}