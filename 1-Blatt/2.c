/*=====================================
Author: Susanne Gentsch
Date: 24.10.2018
Description: Summe 1 bis n
File: 2.1
Compile: gcc -o 2.1 -Wall 2.1.c
=======================================
*/

#include<stdio.h>

void summe(int n);

void quadratzahlen(int n);

int main(void)
{
    summe(10);
    summe(42);
    summe(111);

    quadratzahlen(10);
    quadratzahlen(42);
    quadratzahlen(111);

    return 0;
}

/*
 *Description: Berechnet die Summe der Zahlen von 1 bis n
 *Input: Integer
 *Output: printf der Summe
 */
void summe(int n)
{
    int iter = 1;
    int summe = 0;

    for(iter = 1;iter <= n; iter++) {
        summe += iter;
    }

    printf("die Summe der Zahlen von 1 bis %d ist: %d\n",n, summe);
}

/*
 *Description: Berechnet die Summe der Quadratzahlen 1 bis n
 *Input: Integer
 *Output: Printf der Summe der Quadratzahlen
 */
void quadratzahlen(int n)
{
    int iter = 1;
    int summe = 0;

    for(iter = 1;iter <= n; iter++) {
        summe += iter*iter;
    }

    printf("die Summe der Quadratzahlen von 1 bis %d ist: %d\n",n, summe);
}
