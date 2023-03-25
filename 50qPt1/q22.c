int contida (char a[], char b[]){
    int existe, estaContida = 1;
    for(int i = 0; a[i] != '\0' && estaContida; i++){
        existe = 0;
        for(int j = 0; b[j] != '\0' && !existe; j++){
            if(b[j] == a[i])
                existe = 1;
        }

        estaContida = existe;
    }

    return estaContida;
}