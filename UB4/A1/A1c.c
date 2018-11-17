#include <stdio.h>
long ffunktion (long eingabe);
long bfunktion (int n, int k);
int main () {
    long n,k,z;
    printf ("Geben Sie eine natuerliche Zahl n und k an: \n");
    scanf ("%ld%ld",&n,&k);
    z=bfunktion(n,k)*ffunktion(k);
    printf ("Loesung des Lottoproblems ist %ld",z);
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

long bfunktion (int n, int k)
{
    if (n<k) {
        return 0;
    }
    else if (n==k || k==0) {
        return 1;
    }
    else {
        long z=ffunktion(n)/(ffunktion(k)*ffunktion(n-k));
    return z;}
}
