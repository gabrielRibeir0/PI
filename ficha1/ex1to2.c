#include <stdio.h>

void f (int n) {
    while (n>0) {
        if (n%2 == 0) putchar ('0');
        else putchar ('1');
        n = n/2;
    }
    putchar ('\n');
}

int main(){
    //1.1
    int x, y;
    x = 3; y = x+1;
    x = x*y; y = x + y;
    printf("Ex 1.1: x = %d y = %d\n\n", x, y);

    //1.2
    /*int x, y;
      x = 0;
      printf ("%d %d\n", x, y); */
    printf("Ex 1.2: Não compila pois y não foi inicializado \n\n");

    //1.3
    printf("Ex 1.3:\n");
    char a, b, c;
    a = 'A'; b = ' '; c = '0';
    printf ("Char a: %c Int a:%d\n", a, a);
    a = a+1; c = c+2;
    printf ("Char a: %c Int a: %d Char c: %c Int c: %d\n", a, a, c, c);
    c = a + b;
    printf ("Char c: %c Int c: %d\n\n", c, c);

    //1.4
    x = 200; y = 100;
    x = x+y; y = x-y; x = x-y;
    printf ("Ex 1.4: x = %d y = %d\n\n", x, y);

    //2.1
    x = 3; y = 5;
    if (x > y)
        y = 6;
    printf ("Ex 2.1: x = %d y = %d\n\n", x, y);

    //2.2
    x = y = 0;
    while (x != 11) {
        x = x+1; y += x;
    }
    printf ("Ex 2.2: x = %d y = %d\n\n", x, y);

    //2.3
    printf("Ex 2.3: ");
    int i;
    for (i=0; (i<20) ; i++)
        if (i%2 == 0) putchar ('_');
        else putchar ('#');

    //2.4
    printf("\n\nEx 2.4: ");
    int j;
    for (j=0;(j<16);j++)
        f(j);

    return 0;
}