#include <stdio.h>
#include <stdlib.h>


int main()
{   int i,j,k,l,c,d,e;
    int summe=0;
    int matrixA[10][10],matrixB[10][10], matrixC[10][10];

    printf("Die Matrix A ist eine IxJ Matrix. Geben sie die Groesse von I und J an\n");
    scanf ("%d%d",&i,&j);
    printf("Die Matrix B ist eine KxL Matrix. Geben sie die Groesse von K und L an\n");
    scanf ("%d%d",&k,&l);
//WERTE A
    printf("Geben sei nun die Werte von A an.\n");
        for (int c=0; c<i; c++)
            for (d=0; d<j; d++)
                scanf ("%d", &matrixA[c][d]);


//WERTE B
    printf("Geben Sie nun die Werte von B an.\n");
        for (c=0;c<k;c++) {
            for (d=0;d<l;d++){
                scanf("%d",&matrixB[c][d]);
            }
        }

//ADDITION C
    if (j!=k) {
        printf("Die Matrizen kann nicht miteinander multipliziert werden. Sorry\n");
    }
    else {
        for (c=0; c<i;c++) {
            for (d=0; d<l;d++){
                for (e=0;e<k;e++) {
                  summe= summe + matrixA[c][e]*matrixB[e][d];
                }
            matrixC[c][d]=summe;
            summe=0;
            }
        }
        printf("Produkt der Matrizen:\n");
        for (c=0;c<i;c++) {
            for (d=0;d<l;d++)
                printf("%d\t",matrixC[c][d]);
                printf ("\n");
        }
    }
    return 0;
}


