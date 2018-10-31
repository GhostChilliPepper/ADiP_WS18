#include <stdio.h>

int main(void) {
int c = 100;
    int n = 2;
    int z = 0;
    int p = 0;
    int w = 0;
    int y = 10;             // Anzahl Primzahlen die gefragt sind.

    printf("Zahl die geprüft werden soll... \n");
    scanf("%i",& c);                                                //C -> Suche beginnt
   
             if (c<0){
                    printf("NEGATIVE ZAHL \n \n");
                    return 0;
                };
             if (c==0){
                    printf("CANT DIVIDE 0 \n \n");
                    return 0;
                };

                                                  //n als 2 zurück gesetzt
        for (int i = 1 ; i <= c ; i++){
            
              
                
                                             //max C Vorgänge
                if (n > (c/2)) {                                    //n größer als die Hälfte
                    printf("JA \n");                      // Bedingung Primzahl
                    p = c;                                          // p auf c
                    break;
                    }
                if (c == 2) {                                    //n größer als die Hälfte
                    printf("Ja \n");                      // Bedingung Primzahl
            
                    break;
            }
                if (((c % n) == 0)) {
                    printf("NEIN \n");             //wenn Teiler gefunden
                    break;
                    }
            n = n + 1;
            }
    

    
    return 0;
}
