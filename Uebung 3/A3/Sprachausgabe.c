//
// Created by Niklas Steffen on 13.11.18.
//
// Date: 13.11.2018
// Description: Zahlen zwischen 20 und 69 als Wort ausgeben
// File: Sprachausgabe.c
// Compile: clang -o A3 Sprachausgabe.c
// Explanation: Das Porgramm zeigt einen buffer overfolw,
// weil die Zahlen negativ werden
//======================================================


#include<stdio.h>



int main(void) {
   int Zahl1=0;
   int Zahl2=0;
   int Kontrolle1=0;
   int Kontrolle2=0;

    printf("\n \n \nDieses Programm konvertiert eine Zahl zwischen 20 und 69 in Text. \n ... \n ... \n ... \n");

    printf("Geben sie die erste Ziffer ein... \n");
    scanf("%i",& Zahl1);

    printf("Geben sie die zweite Ziffer ein... \n");
    scanf("%i",& Zahl2);

    printf("Zu konvertierende Zahl: %i", Zahl1);
    printf("%i \n \n \n ... \n ... \n ... \n \n", Zahl2);


    // Ausgabe des zweiten Zeichens in Text Form
    if(Zahl2==0){
        Kontrolle2=1;
    }

    if(Zahl2==1){
        printf("ein-und-");
        Kontrolle2=1;
    }

    if(Zahl2==2){
        printf("zwei-und-");
        Kontrolle2=1;
    }

    if(Zahl2==3){
        printf("drei-und-");
        Kontrolle2=1;
    }

    if(Zahl2==4){
        printf("vier-und-");
        Kontrolle2=1;
    }

    if(Zahl2==5){
        printf("fünf-und-");
        Kontrolle2=1;
    }

    if(Zahl2==6){
        printf("sechs-und-");
        Kontrolle2=1;
    }

    if(Zahl2==7){
        printf("sieben-und-");
        Kontrolle2=1;
    }

    if(Zahl2==8){
        printf("acht-und-");
        Kontrolle2=1;
    }

    if(Zahl2==9){
        printf("neun-und-");
        Kontrolle2=1;
    }



    // Ausgabe des zweiten Zeichens in Text Form

    if(Zahl1==2){
        printf("zwanzig");
        Kontrolle1=1;
    }

    if(Zahl1==3){
        printf("dreißig");
        Kontrolle1=1;
    }

    if(Zahl1==4){
        printf("vierzig");
        Kontrolle1=1;
    }

    if(Zahl1==5){
        printf("fünfzig");
        Kontrolle1=1;
    }

    if(Zahl1==6){
        printf("sechszig");
        Kontrolle1=1;
    }

    printf("\n...\n...\n");
    if (Kontrolle1==0 || Kontrolle2==0) {
        printf("\n...\n...\n...\nDie eingegebene Zahl liegt nicht im Gültigkeitsbereich...\n");
    }


}
