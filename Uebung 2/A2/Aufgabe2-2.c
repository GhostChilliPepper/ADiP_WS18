//
// Created by lasse on 11/1/18.
//

#include <stdio.h>

long fib_rec(long n){

    if(n >= 2) {
        return fib_rec(n-1) + fib_rec(n-2);
    } else if(n == 0) {
        return 0;
    } else if(n == 1) {
        return 1;
    } else {
        printf("%li ist negativ!\n\n", n);
        return -1;
    }
}

int main(int argc, char *argv[]) {
    int i = 1;
    long fib;
    long n = 0;

    printf("\n");

    while(i <= 50) {
        fib = fib_rec(n);
        if(fib % 2 == 0 && fib != 0) {
            printf("%i. Die %li. Fibonacci-Zahl ist %li\n", i, n, fib);
            i++;
        }
        n++;
    }
    return 0;
}