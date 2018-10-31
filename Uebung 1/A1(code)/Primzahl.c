// #include <stdlib.h>
#include <stdio.h>
#include "Primzahl.h"


int Primzahl(int x) {
 /*int v=x;
 int p=v;
 int the=p;
 int Teiler=2;
 int z=0;
while (z==0){
    if (the/2)%Teiler==0{
        Teiler=Teiler
}
    return p; */


    int c = x;
    int n = 2;
    int z = 0;
    int p = 0;

    for (int i = c ; 1  ; i++){
        n = 2;                                                    
        for (int i = 1 ; i <= c ; i++){                             

                if (n > (c/2)) {                                    //n größer als die Hälfte
                    z = 1;                                          // Indikator Z wird auf 1 gesetzt
                    p = c;                                          // p auf c
                    break;
                    }
                if (((c % n) == 0)) {
                   
                    break;
                    }
            n = n + 1;
            }
        if (z == 1) {
            
            z = 0;
            c = p + 1;
            break;
        }
        c = c + 1;
    }

    
    
    return p;
}






