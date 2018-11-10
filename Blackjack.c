#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void initializegenerator() {
    srand(time(NULL));
}
int karteziehen() {
    int zufall = rand()%8+2;
}

int Phase3(int Spielerpunkte,int Hauspunkte){
    while(Hauspunkte<Spielerpunkte&&Hauspunkte<16)
        Hauspunkte=Hauspunkte+karteziehen();
    printf("Das Haus hat %i Punkte!\n", Hauspunkte);
    if(Hauspunkte>21){
        printf("Das Haus hat sich verzockt!\nSpieler gewinnt!");
        return 0;
    }
    if(Hauspunkte<Spielerpunkte){
        printf("Der Spieler war besser!\nSpieler gewinnt!");
        return 0;
    }
    else{
        printf("Haus gewinnt!");
        return 0;
    }
}

int Phase2(int Spielerpunkte, int Hauspunkte){
    int Eingabe;

    Spielerpunkte=Spielerpunkte+karteziehen();
    printf("Der Spieler hat %i Punkte!\n", Spielerpunkte);
    if(Spielerpunkte>21){
        printf("Der Spieler hat sich verzockt!\nHaus gewinnt!");
        return 0;
    }
    if(Spielerpunkte==21){
        printf("Volltreffer!\nSpieler gewinnt!");
        return 0;
    }
    else{
        printf("Gib eine Zahl ein.\nWeiterspielen: 1\nStay: 0\n");
        scanf("%i",&Eingabe);
        if(Eingabe==1){
            Phase2(Spielerpunkte,Hauspunkte);
        }
        if(Eingabe==0){
            Phase3(Spielerpunkte,Hauspunkte);
        }
    }
}


int main() {
    initializegenerator();
    // Code fuer den Spielablauf
    int SpielerPunkte=0;
    int Gegnerpunktzahl=0;
    int Eingabe;

    //Phase 1
    SpielerPunkte=karteziehen();
    printf("Der Spieler hat %i Punkte!\n", SpielerPunkte);
    printf("Gib eine Zahl ein.\nWeiterspielen: 1\nStay: 0\n");
    scanf("%i",&Eingabe);
    if(Eingabe==0){
        Phase3(SpielerPunkte,Gegnerpunktzahl);
    }
    if(Eingabe==1){
        Phase2(SpielerPunkte,Gegnerpunktzahl);
    }
    else{
        printf("Cheater!");
        return 0;
    }
    return 0;
}