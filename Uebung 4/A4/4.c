/***********************************************\
 * Author: Susi Gentsch                         *
 * Date: 17.11.2018                             *
 * Description: Test auf Pythagoras-Triplet     *
 * File: 4.c                                    *
 * Compile: gcc -o 4 -Wall 4.c -lm              *
 \**********************************************/ 

#include<stdio.h>
#include<stdbool.h>
#include<math.h>
#include<stdlib.h>

void falsch(int input); 
bool pythagoras(int a, int b, int c);

int main(void)
{
    int a = 0;
    int b = 0;
    int c = 0;

    printf("Bitte geben sie eine Zahl a ein: ");
    scanf("%i", &a);
    falsch(a);
    printf("Bitte geben sie eine Zahl b ein: ");
    scanf("%i", &b);
    falsch(b);
    printf("Bitte geben sie eine Zahl c ein: ");
    scanf("%i", &c);
    falsch(c);
    
    printf("Geben die gegebenen Zahlen ein Pythagoras-Triplet?\t%s\n", pythagoras(a, b, c) ? "true" : "false");

    return 0;
}

void falsch(int input) 
{
    if(input < 0) {
        printf("ERROR - negative Zahl!\n");
        exit(0);
    }
}

/*
 * Description: Erechnet den Satz des Pythagoras
 * Input: Integer
 * Output: Integer
 */

bool pythagoras(int a, int b, int c)
{
    if((a < b) < c) {
        if(pow(c, 2) == (pow(b, 2) + pow(a, 2))) {
        return true;
        } else {
        return false;
        }
    } else {
        return false;
    }
}
