/***********************************************\
 * Author: Susi Gentsch                         *
 * Date: 15.11.2018                             *
 * Description: Sinus, Cosinus, Exponential     *
 * File: 3.c                                    *
 * Compile: gcc -o 3 -Wall 3.c -lm              *
 \**********************************************/ 

#include<stdio.h>
#include<math.h>

double sinus(double x);
double cosinus(double x);
double exponential(double x);

int main(void)
{
    double x = 0;

    printf("Bitte geben sie eine Gleitkommazahl ein: ");
    scanf("%lf", &x);

    printf("Der Sinus Wert lautet: %lf\n", sinus(x));

    printf("Der Cosinus Wert lautet: %lf\n", cosinus(x));

    printf("Der Exponentialwert lautet: %lf\n", exponential(x));

    return 0;
}


/*
 * Description: Berechnet die Fakultät von input (n) 
 * Input: Integer
 * Output: Integer
 */

int fakultaet(int input)
{
    int product = 1;
    for(int iter = input; iter > 0; iter--) {
        product *= iter;
    }
   
    return product;
}


/*
 * Description: Berechnet Sinus 
 * Input: double number
 * Output: double nummber
 */

double sinus(double x)
{
    double result = 0;
    double klammer = 0;

    for(int iter = 0; iter <= 5; iter ++) {
        klammer = 2 * iter + 1;
        result += pow((-1), iter) * (pow(x, klammer) / fakultaet(klammer));
    }

    return result;
}


/*
 * Description: Rechnet den Cosinus aus
 * Input: double nummber
 * Output: double nummber
 */

double cosinus(double x)
{
    double result = 0;
    double klammer = 0;

    for(int iter = 0; iter < 5; iter++) {
        klammer = 2 *iter;
        result += pow(-1, iter) * (pow(x, klammer) / fakultaet(klammer));
    }

    return result;
}

/*
 * Description: Berechnet den exponentailwert
 * Input: double nummber
 * Output: double nummber
 */

double exponential(double x)
{
    double result = 0;

    for(int iter = 0; iter <= 10; iter++) {
        result += (pow(x, iter) / fakultaet(iter));
    }

    return result;
}
