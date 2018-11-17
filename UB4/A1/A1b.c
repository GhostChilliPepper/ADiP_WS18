#include <stdio.h>
long ffunktion (long eingabe);
void bfunktion (int n, int k);
int main () {
    long n,k;
    long ergebnis;
    printf ("Geben Sie eine natuerliche Zahl n und k an: \n");
    scanf ("%ld%ld",&n,&k);
    bfunktion (n,k);
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

void bfunktion (int n, int k)
{
    if (n<k) {
        printf ("Ergebnis = 0");
    }
    else if (n==k || k==0) {
        printf ("Ergebnis = 1");
    }
    else {
        long z=ffunktion(n)/(ffunktion(k)*ffunktion(n-k));
        printf ("Ergebnis = %ld", z);
    }
}
