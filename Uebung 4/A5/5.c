/***********************************************\
 * Author: Susi Gentsch                         *
 * Date: 18.11.2018                             *
 * Description: Berechnet Wechselgeld           *
 * File: 5.c                                    *
 * Compile: gcc -o 5 -Wall 5.c                  *
 \**********************************************/ 

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void)
{
    int muenzwerte[6] = {50, 20, 10, 5, 2, 1};
    //Anzahl der Münzen die Ausgegeben werden
    int anzahl[6];
   
    int input = 0;
    int value = 0;
    int diff = 0;
    int multiplier = 0;

    srand(time(0)); 
    value = rand() % 200;  
    printf("Zu zahlender Betrag ist: %i\n", value);

    printf("Bitte geben sie einen größeren1 Betrag ein: ");
    scanf("%i", &input);
    while(input < value) {
        printf("Bitte geben sie einen größeren Betrag ein: ");
        scanf("%i", &input);
    }

    //Berechnet die Differenz
    diff = input - value;     

    //Gibt die Differenz in Münzwerten aus
    for(int iter = 0; iter < 6; iter++) {
        multiplier = diff / muenzwerte[iter];
        diff %= muenzwerte[iter]; 
        anzahl[iter] = multiplier; 
    }
    
    for(int iter = 0; iter < 6; iter++) {
        printf("%d x  %i Euro\n", anzahl[iter], muenzwerte[iter]);
    } 
    return 0;
}
