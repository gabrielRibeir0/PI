typedef struct aluno {
    int numero;
    char nome[100];
    int miniT [6];
    float teste;
} Aluno;

//1)
int nota (Aluno a){
    float notaMiniTestes = 0;
    for(int i = 0; i < 6; i++){
        notaMiniTestes += a.miniT[i];
    }
    notaMiniTestes = (notaMiniTestes / 6) * 10;

    if(notaMiniTestes < 5)
        return 0;
    
    float notaFinal = 0.8 * a.teste + 0.20 * notaMiniTestes;
    
    if(notaFinal >= 9.5)
        return notaFinal;
    return 0;
}

//2)
int procuraNum(int num, Aluno t[], int N){
    int l = 0, u = N-1, m;
    while (l <= u){
        m = (l+u) / 2;
        if (t[m].numero == num) return m;
        if (t[m].numero < num) l = m+1;
        else u = m-1;
    }
    return -1;
}

//3)
void insert(int num, Aluno t [], int n) {
    while (n > 0 && t[n-1].numero > num) {
        t[n].numero = t[n-1].numero;
        n--;
    }
    t[n].numero = num;
}

void ordenaPorNum (Aluno t [], int N){
    for (int i = 0; i < N; i++)
        insert(t[i].numero, t, i);
}

//4)
void criaIndPorNum (Aluno t [], int N, int ind[]){
    int maxIndice, max = 0;
    for(int i = 0; i < N; i++){
        max = 0; 
        for(int j = 0; j < N; j++){
            if(t[j].numero > max){
                max = t[j].numero;
                maxIndice = j;
            }
            
            ind[i] = maxIndice;
        } 
    }
}

//5)
void imprimeTurma (int ind[], Aluno t[], int N){

}

//6)
int procuraNum2 (int num, Aluno t[], int N){
    return 0;
}

//7)
void criaIndPorNome2 (Aluno t [], int N, int ind[]){

}