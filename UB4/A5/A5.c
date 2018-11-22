#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int zerlegung (int x);
int main() {

    int muenzwerte[6]={50,20,10,5,2,1};
    srand(time(NULL));
    int wert=rand()%200;
    int input;
    int n;
    int scheine [6];
    printf ("Zahlen Sie %d Euro.\n",wert);
    printf ("Sie geben dem Verkäufer Euro ");
    scanf("%d",&input);

    int diff=input-wert;
    printf("Die Differenz %d Euro bekommen Sie in:\n",diff);

    for(n=0;n<=6;n++) {
        scheine[n]=diff/muenzwerte[n];
        diff=diff -(scheine[n]*muenzwerte[n]);
    }
    for (n=0;n<=6;n++) {
        printf ("%d x %d Euro \n", scheine[n], muenzwerte[n]);
    }

    return 0;
}

