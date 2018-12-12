/* * * * * * * * * * * * * * * * * * * * * *
 * Project: ADiP_WS18
 * Program: students.c
 * Autohor: lasse
 * Date: 12/12/18
 * Purpose: 
 * * * * * * * * * * * * * * * * * * * * * */

#include <stdio.h>
#include <malloc.h>

typedef struct {
    char nachname[30];
    float note;
} student;

student * newStudent(char pNachname[], float pNote);

void clearBuffer() {
    char c;
    while ((c = getchar()) != '\n' && c != EOF) {}
}
int main() {
    char name[30];
    float note;
    int Anzahl;
    printf("Gib die Anzahl der Studenten an!\n");
    scanf("%d",&Anzahl);
    clearBuffer();
    for (int i = 0; i < Anzahl; ++i) {
        printf("Gib einen Nachnamen ein!\n");
        scanf("%c",name);
        clearBuffer();
        printf("Gib eine Note von 1.0 bis 5.0 ein!\n");
        scanf("%f",&note);
        while(note<1.0||note>5.0){
            printf("Gib eine Note von 1.0 bis 5.0 ein!\n");
            clearBuffer();
            scanf("%f",&note);
        }
        clearBuffer();
        newStudent(name,note);
    }

    return 0;
}

student * newStudent(char pNachname[30], float pNote) {
    student *output = malloc(sizeof(student));
    for (int i = 0; i < 30; ++i) {
        output->nachname[i]=pNachname[i];
    }
    output->note = pNote;
    return output;

}