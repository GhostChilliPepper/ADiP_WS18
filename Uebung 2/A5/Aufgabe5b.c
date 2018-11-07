//
// Created by lasse on 11/7/18.
//

#include <stdio.h>

int count = 0;

int exponent(double a, int n) {
    double ergebniss = a;
    if (n==0) {
        ergebniss = 1;
    } else if (n > 1) {
        for (int i = 1; i < n; i++) {
            ergebniss = ergebniss * a;
            count++;
        }
    }
    return ergebniss;
}

int exponential(double a, int n) {
    double ergebniss = a;
    if (n==0) {
        ergebniss = 1;
    } else if (n%2==0) {
        ergebniss = exponent(a, n/2) * exponent(a, n/2);
    } else if (n%2!=0) {
        ergebniss = a * exponent(a, (n-1)/2) * exponent(a, (n-1)/2);
    }
    return ergebniss;
}

int main(void) {
    double z;
    int e;
    printf("Geben sie eine Zahl an: ");
    scanf("%le", &z);
    printf("Geben sie einen Exponenten an: ");
    scanf("%i", &e);
    printf("Ergebniss: %i\n", exponential(z, e));
    printf("Schritte: %i\n", count);
}