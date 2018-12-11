/* * * * * * * * * * * * * * * * * * * * * *
 * Project: ADiP_WS18                      *
 * Program: matrixmult.c                   *
 * Autohor: lasse                          *
 * Date: 12/11/18                          *
 * Purpose:                                *
 * * * * * * * * * * * * * * * * * * * * * */

#include <stdio.h>
#include <math.h>

int I,J,K,L;
int matrixA[5][5] = {{1,2,3,4,5},{11,12,13,14,15},{21,22,23,24,25},{31,32,33,34,35},{41,42,43,44,45}};
int matrixB[5][5] = {{1,2,3,4,5},{11,12,13,14,15},{21,22,23,24,25},{31,32,33,34,35},{41,42,43,44,45}};

int main() {
    
    I = sizeof(matrixA) / sizeof(matrixA[0]);
    J = sizeof(matrixA[0]) / sizeof(matrixA[0][0]);
    K = sizeof(matrixB) / sizeof(matrixB[0]);
    L = sizeof(matrixB[0]) / sizeof(matrixB[0][0]);
    
    if(J == K) {
        int matrixC[I][L];
        int sizeCZ = sizeof(matrixC) / sizeof(matrixC[0]);
        int sizeCS = sizeof(matrixC[0]) / sizeof(matrixC[0][0]);
        int sum;

        /* Multiply */
        for(int i = 0; i < I; i++) {
            for(int l = 0; l < L; l++) {
                for (int k = 0; k < K; k++) {
                    sum += matrixA[i][k] * matrixB[k][l];
                }
                matrixC[i][l] = sum;
                sum = 0;
            }
        }

        /* Print */
        printf("Matrix C = Matrix A * Matrix B:\n\n");

        printf("┌");                                            // * Table design
        for (int i = 0; i < sizeCZ; i++) {                      // *
            int d;                                              // *
            if (matrixC[i][0] != 0) {                           // *
                d = floor(log10(matrixC[i][0])) + 1;            // *
            } else {                                            // *
                d = 1;                                          // *
            }                                                   // *
            for (int j = 1; j <= d; j++) {                      // *
                printf("─");                                    // *
            }                                                   // *
            if (i != sizeCZ - 1) {                              // *
                printf("┬");                                    // *
            }                                                   // *
        }                                                       // *
        printf("┐\n");                                          // *

        for (int p = 0; p < sizeCS; p++) {                      // * Print Values
            printf("│");                                        // *
            for (int q = 0; q < sizeCZ; q++) {                  // *
                printf("%i", matrixC[q][p]);                    // *
                if (q != sizeCZ - 1) {                          // *
                    printf("│");                                // *
                }                                               // *
            }                                                   // *
            printf("│\n");                                      // *

            if (p != sizeCZ -1) {                               // * Table design
                printf("├");                                    // *
                for (int i = 0; i < sizeCZ; i++) {              // *
                    int d;                                      // *
                    if (matrixC[i][0] != 0) {                   // *
                        d = floor(log10(matrixC[i][0])) + 1;    // *
                    } else {                                    // *
                        d = 1;                                  // *
                    }                                           // *
                    for (int j = 1; j <= d; j++) {              // *
                        printf("─");                            // *
                    }                                           // *
                    if (i != sizeCZ - 1) {                      // *
                        printf("┼");                            // *
                    }                                           // *
                }                                               // *
                printf("┤\n");                                  // *
            }                                                   // *

        }
        printf("└");                                            // * Table design
        for (int i = 0; i < sizeCZ; i++) {                      // *
            int d;                                              // *
            if (matrixC[i][0] != 0) {                           // *
                d = floor(log10(matrixC[i][0])) + 1;            // *
            } else {                                            // *
                d = 1;                                          // *
            }                                                   // *
            for (int j = 1; j <= d; j++) {                      // *
                printf("─");                                    // *
            }                                                   // *
            if (i != sizeCZ - 1) {                              // *
                printf("┴");                                    // *
            }                                                   // *
        }                                                       // *
        printf("┘\n");                                          // *

        return 0;

        // ├   ┤  ┼ ┴ ┬     ─    └   ┘  ┌   ┐

    } else {
        printf("ERROR: Die Spaltenanzahl der Matrix A stimmt nicht mit der Zeilenanzahl der Matrix B überein!\n");
        return 1;
    }
}