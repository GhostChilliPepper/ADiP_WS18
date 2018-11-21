/***********************************************\
 * Author: Susi Gentsch                         *
 * Date: 16.11.2018                             *
 * Description: Rekursiv                        *
 * File: 2iterativ.c                            *
 * Compile: gcc -o 2i -Wall 2.c                 *
 \**********************************************/ 

#include<stdio.h>

int succ(int x);
int pree(int x);
int add(int x, int y);
int sub(int x, int y);
int mult(int x, int y);

int main(void)
{
    int x = 0;
    int y = 0;

    printf("Bitte geben sie die Zahl x ein: ");
    scanf("%i", &x);
    
    printf("Bitte geben sie die Zahl y ein: ");
    scanf("%i", &y);

    printf("Die Summe ist: %i\n", add(x, y));

    printf("Die Differenz zwische x und y ist: %i\n", sub(x, y));

    printf("Das Produkt von x und y ist: %i\n", mult(x, y));

    return 0;
}


/*
 * Description: Gibt den Nacholger des üergebenen Wertes zurück
 * Input: Integer
 * Output: Integer
 */

int succ(int x)
{
    return ++x;
}


/*
 * Description: Gibt den Vorgänger des übergebenen Wertes zurück
 * Input: Integer
 *Output: Integer
 */

int pre(int x)
{
    return --x;
}


/*
 * Description: Gibt die Summe von x und y zurück
 * Input: Integer
 * Output: Integer 
 */

int add(int x, int y)         
{
    if(x > 0) {
        y = add(succ(y), pre(x));
    } 
} 


/*
 * Description: Gibt die Differenz zwischen x und y zurück
 * Input: Integer
 * Output: Integer
 */

int sub(int x, int y)
{
    if(y == 0) {
    eturn x;
    }
    
    return pre(sub(x,pre(y)));
}


/*
 * Description: Gibt Produkt von x und y zurück
 * Input: Integer
 * Output: Integer
 */

int mult(int x, int y)
{ 
    int result = 0;

    if((y == 0) || (x == 0)) {
        return 0;
    } else if(y == 1) {
        return x;
    }
    
    return add(y,mult(y, pre(x)));
}
