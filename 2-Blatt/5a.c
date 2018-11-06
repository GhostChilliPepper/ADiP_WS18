/*=================================================
 *Author: Susanne Gentsch
 *Date: 29.10.2018
 *Description: Potenzierungen
 *File: 5a.c
 *Compile: gcc -o 5a .Wall 5a.c
 *=================================================
 */

#include<stdio.h>

int exponent(int a, int n);

int main(void)
{
    int n = 17; // exponent
    int a = 2;  // test nummer

    printf("%d\n",exponent(a, n));
    return 0;
}

int exponent(int a, int n)
{
    int a_n = 1;

    while ( n > 0 ) {
        if (n % 2 == 1) {
            a_n *= a;
        }
        n /= 2;
        a *= a;
    }
    return a_n;
}
