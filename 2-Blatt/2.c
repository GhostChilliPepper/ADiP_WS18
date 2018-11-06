/*================================================
 *Author: Susanne Gentsch
 *Date: 29.10.2018
 *Description: Fibonacci Zahlen
 *File: 2.c
 *Compile: gcc -o 2 -Wall 2.c
 * ==============================================
 */

#include<stdio.h>

long fib_rec(long n);
void fib_zahlen(long n);

int main(void)
{
    printf("Die 3. Fibonacci Zahl ist:\t%ld\n", fib_rec(3));
    printf("Die 10. Fibonacci Zahl ist:\t%ld\n", fib_rec(10));
    printf("Die 42. Fibonacci Zahl ist:\t%ld\n", fib_rec(42));
    
    fib_zahlen(50);
    return 0;
}

long fib_rec(long n) {
    long a = 1; // f(n-1)
    long b = 0; // f(n-2)
    long output = 3;
    if(n == 0) {
        return 0;
    } else if(n == 1) {
        return 1;
    }
    for(int iter = 2;iter <= n;iter++) {
        output = a + b;
        b = a;
        a = output;
    }
    return output;
}

void fib_zahlen(long n) {
    long a = 1; // f(n-1)
    long b = 0; // f(n-2)
    long output = 3;
    if(n == 0) {
        printf("%ld\n",n);
    } else if(n == 1) {
        printf("%ld\n",n);
    }
    printf("0:\t0\n");
    for(int iter = 2;iter <= n;iter++) {
        output = a + b;
        b = a;
        a = output;
        if(output % 2 == 0) {
            printf("%d:\t%ld\n",iter,output);
        }
    }
}
