/***********************************************\
 * Author: Susi Gentsch                         *
 * Date: 15.11.2018                             *
 * Description: Löst das modifizierte           * 
 *              Lottoproblem                    *
 * File: 1.c                                    *
 * Compile: gcc -o 1 -Wall 1.c                  *
 \**********************************************/ 

#include<stdio.h>

int fakultaet(int input);
int b_effizienz(int input_1, int input_2);
int m_lottoproblem(int input_1, int input_2);


int main(void)
{
    int n = 0;
    int k = 0;

    printf("Bitte geben sie eine Zahl n ein: ");
    scanf("%i", &n);
    if(n > 25) {
        printf("NEIN NEIN NEIN, zu groß\n");
        return 0;
    }
    printf("Bitte geben sie eine Zahl k ein: ");
    scanf("%i", &k);
    if(k > 25) {
        printf("NEIN NEIN NEIN, zu groß\n");
        return 0;
    }
   
    printf("Die Lösung des modifizierten Lottoptoproblems lautet: %i\n", m_lottoproblem(n, k));

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
 * Description: Berechnet die Binominalekoeffizienz
 * Input: Integer
 * Output: Integer
 */

int b_effizienz(int input_1, int input_2)
{
    int result = 0;

    if((0 <= input_2) <= input_1) {
        result = fakultaet(input_1) / (fakultaet(input_2) * (fakultaet(input_1 - input_2)));
    } else if((0 <= input_1) < input_2) {
        result = 0;
  }

    return result;
}


/*
 * Description: Löst das modifizierte Lottoproblem
 * Input: Intger
 * Output: Integer
 */

int m_lottoproblem(int input_1, int input_2)
{
    int result = 0;
    int k_e = 0;
    int f_k = 0;

    k_e = b_effizienz(input_1, input_2);
    f_k = fakultaet(input_2);
    result = k_e * f_k;

    return result;
}
