/* * * * * * * * * * * * * * * * * * * * * *
 * Project: ADiP_WS18
 * Program: students.c
 * Autohor: lasse
 * Date: 12/12/18
 * Purpose: 
 * * * * * * * * * * * * * * * * * * * * * */

#include <stdio.h>
#include <string.h>

typedef struct {
    char nachname[30];
    float note;
} student;

student newStudent(char pNachname[], float pNote);

int main() {
    char name[30] = "bla";
    float note = 5.0;
    student s = newStudent(name, note);
    printf("%s,%f", s.nachname, s.note);
    return 0;
}

student newStudent(char pNachname[30], float pNote) {
    student output;
    for (int i = 0; i < 30; i++) {
        output.nachname[i] = pNachname[i];
    }
    output.note = pNote;
    return output;
}