#include <stdio.h>
#include <stdlib.h>
 int main (int argc , char ** argv ) {
int n=0;
int s=0;
int z=1;
   printf("Geben Sie n ein...");
   scanf("%i",&n);
   
    while ((z<n+1)){
    s=s+(z*z);
    z++;
    }
    printf("Die Summe der Quadratzahlen von 1 bis n ergeben aufadiert %i \n",s);
 
    return 0;
 }

