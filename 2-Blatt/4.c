/*================================================
*Author: Susanne Gentsch
*Date: 30.10.2018
*Description: Kleines Einmaleins
*File: 4.c
*Compile: gcc -o 4 -Wall 4.c
* ================================================
*/

#include<stdio.h>

int main(void)
{
    for(int rechts = 1; rechts <= 10; rechts++) {
        for(int links = 1; links<= 10; links++) {
            printf("%i x %i = %i\n", links, rechts, links * rechts);
        }
    }
    return 0;
}

