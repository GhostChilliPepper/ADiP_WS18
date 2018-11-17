#include <stdio.h>
long ffunktion (long eingabe);

int main () {
    long n;
    long ergebnis;
    printf ("Geben Sie eine natuerliche Zahl ein: \n");
    scanf ("%ld",&n);
    ergebnis=ffunktion(n);
    printf("Die Fakultaet von %d ist %ld",n,ergebnis);
    return 0;
}


long ffunktion(long eingabe) {
    long i, x=eingabe;
    for (i=1; i<eingabe;i++)
    {
     long  f;
     f=x*(eingabe-i);
     x=f;
    }

    return (x);
}
