/*=====================================================
 *Author: Susanne Gentsch
 *Date: 30.10.2018
 *Description: Berechnet perfekte und defiziente zahlen
 *File: 3.c
 *Compile: gcc -o 5 -Wall 3.c
 * ====================================================
 */

#include<stdio.h>
#include<stdbool.h>

bool vollkommen(int n);

int main(void)
{
    int r = 499; //wie auf dem Übungsblatt festgellegt
    int anzahl = 0;
//
//    if (vollkommen(14) {
//            printf("true\n");
//    } else {
//        printf('false\n");
//    }
    printf("Ist 14 eine vollkommene Zahl: %s\n",vollkommen(14) ? "true" : "false"); 
    printf("Ist 18 eine vollkommene Zahl: %s\n",vollkommen(18) ? "true" : "false"); 
    printf("Ist 25 eine vollkommene Zahl: %s\n",vollkommen(25) ? "true" : "false"); 
    printf("Ist 28 eine vollkommene Zahl: %s\n",vollkommen(28) ? "true" : "false"); 
    printf("Ist 51 eine vollkommene Zahl: %s\n",vollkommen(51) ? "true" : "false"); 

    printf("Ist 14 eine defiziente Zahl: %s\n",vollkommen(14) ? "false" : "true"); 
    printf("Ist 18 eine defiziente Zahl: %s\n",vollkommen(18) ? "false" : "true"); 
    printf("Ist 25 eine defiziente Zahl: %s\n",vollkommen(25) ? "false" : "true"); 
    printf("Ist 28 eine defiziente Zahl: %s\n",vollkommen(28) ? "false" : "true"); 
    printf("Ist 51 eine defiziente Zahl: %s\n",vollkommen(51) ? "false" : "true"); 

    printf("Ausgabe aller vollkommenen Zahlen, die kleiner als 499 sind\n");
    for(int iter = 1; iter < r; iter++) {
        if(vollkommen(iter)) {
            printf("%i\t",iter);
        } else {
           anzahl++; 
        }

    }

    printf("\nEs gibt %i defiziente Zahlen. \n", anzahl);

    return 0;
}
/*
 * Description: Test ob die Zahl vollkommen ist
 * Input: integer
 * Output: bool
 */ 
bool vollkommen(int n)
{
    // wir setzen sum auf 1 sodas 0 und negative Zahlen ausgeschlossen werden
    int sum = 1;
    int i = 2;
    if(n == 1) {
        return false;
    }
    while(i*i <= n) {
        if(n % i == 0) {
            sum = sum + i + n / i;
        }
        i += 1;
    }
    if(sum == n) {
        return true;
    } else {
        return false;
    }
}
