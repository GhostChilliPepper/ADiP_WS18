/*=============================================================
 * Author: Susanne Gentsch
 * Date: 23.10.2018
 * Description: Liefert eine Fehlermeldung, falls n negativ ist
 * File: 3.c
 * Compile: gcc -o 3 -Wall 3.c -lm
 * =========================================================0==
 */

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<stdbool.h>

void positiv_pruefung(int input);
bool prime_pruefung(int input);


int main(void)
{
    int input = 0;

    // Benutze scanf um input zu bekommen
    printf("Bitte gib eine positive Zahl ein:\n");
    scanf("%i", &input);


    positiv_pruefung(input);

    if(prime_pruefung(input)) {
        printf("Es ist eine Primzahl!\n");
    } else {
        printf("Es ist keine Primzahl!\n");
    }

    return 0;
}


/*
 * Details: Test ob input positiv ist
 * Input: Integer Zahl
 * Output: printf gibt an ob input negativ ist
 */
void positiv_pruefung(int input) {
    if(input<0) {
        printf("Fehlermeldung: Zahl ist negativ\n");
        exit(1);
    }   
}

/*
 * Details: Test ob input eine Primzahl ist
 * Input: Positive integer Zahl
 * Output: Wahrheitswert
 */
bool prime_pruefung(int input) {
    int n = 2;
    double wurzel = sqrt(input);

    while(n < wurzel) {
        if( input % n == 0) {
            return false;    
        }
        n++;
    }
    return true;
}
