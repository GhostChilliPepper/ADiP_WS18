#include <stdio.h>

int main(void)
{
    int i; /* integer varianle (whole number) */
    printf("Bitte geben Sie eine positive ganze Zahl ein: ");
    scanf("%d",&i); /* Eingabefunktion. */
    printf("\nDie Summe aller ganzen Zahlen 0 bis %d ist %d.\n",i, i*(i+1)/2); /* Gaußsche Summenformel */
    return 0;
}
