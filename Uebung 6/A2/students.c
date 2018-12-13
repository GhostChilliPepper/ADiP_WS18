/* * * * * * * * * * * * * * * * * * * * * * *
 * Project: ADiP_WS18                        *
 * Program: students.c                       *
 * Autohor: lasse                            *
 * Date: 12/12/18                            *
 * Purpose: Notenschnitt + Studis sortieren  *
 * * * * * * * * * * * * * * * * * * * * * * */

#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char nachname[30];
    float note;
} student;

int main() {
    int Anzahl;
    float sum;
    float Minimum=5.0;
    student *Array;

    printf("Gib die Anzahl der Studenten an!\n");
    scanf("%d",&Anzahl);

    Array = (student*) malloc(Anzahl*(sizeof(student)));
    if(Array == NULL){
        printf("Der Speicher ist leer!\n");
        exit(1);
    }

    for (int i = 0; i < Anzahl; ++i) {
        printf("Gib einen Nachnamen ein!\n");
        scanf("%s",Array[i].nachname);
        printf("Gib eine Note von 1.0 bis 5.0 ein!\n");
        scanf("%f",&Array[i].note);
        while(Array[i].note<1.0||Array[i].note>5.0){
            printf("Gib eine Note von 1.0 bis 5.0 ein!\n");
            scanf("%f",&Array[i].note);
        }
        if(Array[i].note<Minimum){
            Minimum=Array[i].note;
        }
        sum+= Array[i].note;
    }

    printf("Dies sind die besten Studenten!\n");
    for (int j = 0; j < Anzahl; ++j) {
        if (Array[j].note == Minimum){
            printf("%s\n", Array[j].nachname);
        }
    }

    sum=sum/Anzahl;
    printf("Die Durchschnittsnote aller Studenten ist: %f !\n", sum);
    free(Array);
    return 0;
}