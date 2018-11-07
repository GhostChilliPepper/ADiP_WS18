/*=======================================================
 *Author: Prof. Dr. A. Weber 
 *Date: 29.10.2018
 *Description: Addition von kleinen Zahlen
 *File: 1.c
 *Compile: gcc -o 1 -Wall 1.c
 *Explanation: Das Porgramm zeigt einen buffer overfolw, 
 *             weil die Zahlen negativ werden
 * ======================================================
 */


#include<stdio.h>

int main() {
    char x1,x2,result;

    //Beispiel 1:
    x1 = 35;
    x2 = 85;
    result = x1 + x2;
    printf("Beispiel 1: %hi + %hi = %hi\n",x1 ,x2, result);

    //Beispiel 2:
    x1 = 85;
    x2 = 85;
    result = x1 + x2;
    printf("Beispiel 2: %hi + %hi = %hi\n",x1 ,x2, result);

    return 0;
}
