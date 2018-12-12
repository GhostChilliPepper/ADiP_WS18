#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct {
    int Matrikelnummer;
    char Vorname[30];
    char Nachname[30];
} student;
void print_Student(student *s) {
    if (s != NULL) {
        printf("%s %s %d\n", s->Vorname, s->Nachname, s->Matrikelnummer);
    }
}
void print_Students(student *array[]) {
    int i;
    for (i = 0; i < 20; i++) {
        print_Student(array[i]);
    }
}
void clear_Students(student *array[]) {
    int i;
    for (i = 0; i < 20; i++) {
        if (array[i] != NULL) {
            free(array[i]);
            array[i] = NULL;
        }
    }
}
void get_Name(student *array[], int pMatrikelnummer) {
    int i;
    for (i = 0; i < 20; i++) {
        if (array[i] != NULL) {
            if (array[i]->Matrikelnummer == pMatrikelnummer) {
                printf("%s %s \n", array[i]->Vorname, array[i]->Nachname);
            }
        }
    }
}
int add_Student(student *array[], int pMatrikelnummer, char pVorname[], char pNachname[]) {
    int i;
    student *s;
    for (i = 0; i < 20; i++) {
        if (array[i] == NULL) {
            s = (student *)malloc(sizeof(student));
            s->Matrikelnummer = pMatrikelnummer;
            strncpy(s->Nachname, pNachname, 30);
            strncpy(s->Vorname, pVorname, 30);
            array[i] = s;
            return 1;
        }
    }
}
void remove_Student(student *Array[], int pMatrikelnummer) {
    int i;
    for (i = 0; i < 20; i++) {
        if (Array[i] != NULL) {
            if (Array[i]->Matrikelnummer == pMatrikelnummer) {
                free(Array[i]);
                Array[i] = NULL;
            }
        }
    }
}
int main() {
    int i;
    student *Array[20];
    for (i = 0; i < 20; i++) {
        Array[i] = NULL;
    }
    //Tests
    add_Student(Array, 42, "Ich", "BinSuper");
    get_Name(Array, 42);
    add_Student(Array, 30, "Ich", "Auch");
    remove_Student(Array, 42);
    print_Students(Array);
    clear_Students(Array);
    print_Students(Array);
    return 0;
}