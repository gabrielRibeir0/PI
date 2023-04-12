#define Max 10
//1)
typedef struct staticStack {
    int sp;
    int values [Max];
} STACK, *SStack;

//a)
void SinitStack (SStack s){
    s->sp = 0;
}

//b)
int SisEmpty (SStack s){
    return (s->sp == 0);
}

//c)
int Spush (SStack s, int x){
    if(s->sp >= Max)
        return 1;
        
    s->values[s->sp++] = x;

    return 0;
}

//d)
int Spop (SStack s, int *x){
    if(s->sp == 0)
        return 1;
    
    *x = s->values[--s->sp];
    
    return 0;
}

//e)
int Spop (SStack s, int *x){
    if(s->sp == 0)
        return 1;
    
    *x = s->values[s->sp - 1];
    
    return 0;
}

//2)
typedef struct staticQueue {
    int front;
    int length;
    int values [Max];
} QUEUE, *SQueue;

//a)
void SinitQueue (SQueue q){
    q->length = 0;
}

//b)
int SisEmptyQ (SQueue q){
    return(q->length == 0);
}

//c)
int Senqueue (SQueue q, int x){
    if(q->length >= Max)
        return 1;
    
    q->values[(q->front + q->length) % Max] = x;
    q->length++;

    return 0;  
}

//d)
int Sdequeue (SQueue q, int *x){
    if(q->length == 0)
        return 1;
    
    if(q->front < Max - 1)
        q->front++;
    else
        q->front = (q->front + q->length) % Max;

    q->length--;

    return 0;
}