/***********************************************\
 * Author: Susi Gentsch                         *
 * Date: 11.11.2018                             *
 * Description: Gleitkomma-Arithmetik           *
 * File: 4.c                                    *
 * Compile: gcc -o 4 -Wall 4.c                  *
 * e: wir speichern die differenzen der kleinen * 
 *  Zahlen, um ein genauers Ergebniss zu        *
 *  bekommen                                    *
 \**********************************************/ 


#include<stdio.h>

void d(float data_float[5]);
void double_d(double data_double[5]);
       
int main(void)
{
    float data_float[5];

    data_float[0] = 10000.0;
    data_float[1] = (-1.0e-3) /9.0;
    data_float[2] = 25.0e2;
    data_float[3] = (1.0e-3) / 7.0;
    data_float[4] = -12.5e3;

    double data_double[5];

    data_double[0] = 10000.0;
    data_double[1] = (-1.0e-3) /9.0;
    data_double[2] = 25.0e2;
    data_double[3] = (1.0e-3) / 7.0;
    data_double[4] = -12.5e3;

    float sum_float = 0;
    double sum_double = 0;

    printf("Die von Hand berechnete Summe beträgt:\t0.000031746\n");

    for(int iter = 0; iter < 5; iter++) {
        sum_float += data_float[iter];
    }
    printf("Die Summe mit float Variablen ergibt:\t%f\n", sum_float);
   
    for(int iter = 0; iter < 5; iter++) {
       sum_double += data_double[iter];
    }
    printf("Die Summe mit double Variablen ergibt:\t%lf\n", sum_double);

    d(data_float);
    double_d(data_double);
    return 0;
}

/*
 * Description: Berechnet die Summe
 * Input: array float
 * Output: printf von der Summe
 */
void d(float data_float[5])
{
    float s = 0;
    float d = 0;
    float s_alt = 0;

    for(int iter = 0; iter < 5; iter++) {
        s_alt = s;
        s += data_float[iter];
        d += data_float[iter] - (s - s_alt); //speichert die differenz zwischen kleinen Zahlen
        s += d;
    }
    printf("Die Summe ergibt, wenn man sie mit dem vorgegebenen Verfahren berechnet: %f\n", s);
}


/*
 * Description: Berechnet die Summe
 * Input: array double
 * Output: printf von der Summe
 */
void double_d(double data_double[5])
{
    double s = 0;
    double d = 0;
    double s_alt = 0;

    for(int iter = 0; iter < 5; iter++) {
        s_alt = s;
        s += data_double[iter];
        d += data_double[iter] - (s - s_alt); //speichert die differenz zwischen kleinen Zahlen
        s += d;
    }
    printf("Die Summe ergibt, wenn man sie mit dem vorgegebenen Verfahren berechnet: %lf\n", s);
}
