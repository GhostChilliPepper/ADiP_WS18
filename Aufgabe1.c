// #include <stdlib.h>
#include <stdio.h>
#include "Primzahl.h"


int main(void) {
    int Ausgang=0;
    int Zustand=0;
    int Teiler=0;
    int aTeiler=2;
    int Zahl=0;
   
        printf("Zahl der Primfaktorzerlegung... \n");
        scanf("%i",& Ausgang);
        printf ("Zahl der Primfaktorzerlegung: %i \n\n\n",Ausgang);
        
     int Aktuell=Ausgang;
        
        while(Zustand==0){
            Teiler=Primzahl(aTeiler);
        
        if (Aktuell%Teiler==0) {
            Aktuell=Aktuell/Teiler;
            Zahl=Zahl+1;
            printf("Faktor %i: ",Zahl);
            printf("%i \n",Teiler);
            aTeiler=2;
        }

        if (Aktuell%Teiler!=0) {
            aTeiler=aTeiler+1;
        }

        if (Teiler==Aktuell){
            Zustand=1;
            break;
        };
        };

        Zahl=Zahl+1;
        printf("Faktor %i: ",Zahl);
        printf("%i \n",Teiler);
        

      //  if (Ausgang%Teiler==0){

      //  };
    
      
    


   // printf("%i",Ergebnis);
    
    return 0;
}
