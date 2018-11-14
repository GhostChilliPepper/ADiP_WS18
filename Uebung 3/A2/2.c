/*===============================================
 * Author: Susi Gentsch
 * Date: 11.11.2018
 * Description: 
 * File: 2.c
 * Compile: gcc -o 2 -Wall 2.c -lm
 * ==============================================
 */

#include<stdio.h>
#include<math.h>

double amitte(double werte[], int n);
double ksvarianz(double werte[], int n);

int main(void)
{
    int n = 0;
    int i = 0;
    printf("Bitte geben sie an wie groß die Stichprobe seien soll: ");
    scanf("%d", &n);
    
    double werte[n];
    for(i = 0; i < n; i++) {
        printf("Bitte geben sie den Wert ein: ");
        scanf("%lf", &werte[i]);
    }

    printf("Die arithmetische Mitte ist: %lf\n", amitte(werte, n));
    printf("Die korrigierte Stichprobenvarianz ist: : %lf\n", ksvarianz(werte, n)); 

    return 0;
}

/*
 * Description: berechnet die arithmetische Mitte
 * Input: array of double type
 * Output: double
 */
double amitte(double werte[], int n) { 
    int i = 0;
    double sum = 0;
    for(i = 0; i < n; i++) {
        sum += werte[i];
    }
    sum /= n;
    return sum;
}

/*
 * Description: berechnet die korrigierte Stichprobenvarianz
 * Input: double
 * Output:double
 */
double ksvarianz(double werte[], int n) { 
    int i = 0;
    double sum = 0;
    double am = amitte(werte, n);
    for(i = 0; i < n; i++) {
       sum += pow((werte[i] - am),2);
    }
     sum /= (n - 1);
    return sum;
}
