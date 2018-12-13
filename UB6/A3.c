#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int matNr;
    char vorname[30];
    char nachname[30];
}student;
//Drucken von Studenteninformationen
void print_Student(student *s) {
    if (s!=NULL) {
        printf("%d, %s, %s\n",(*s).matNr, (*s).vorname, (*s).nachname);
    }
    else if(s==NULL) {
            printf("\nN/A\n");
    }
}

void print_students (student *array[]){
    int i;
    for (i=0;i<20;i++)
    {
        print_Student (array[i]);
    }
}

void clear_students (student *array[]) {
    int i;
    for (i=0;i<20;i++) {
        free(array[i]);
        array[i]=NULL;
    }
}

void get_name (student *array[], int m) {
    int i=0;
    for (i=0;i<20;i++) {
        if ((*array[i]).matNr==m){
            printf("%s %s",(*array[i]).vorname, (*array[i]).nachname);
        break;
        }
    }
}

void add_student (student *array[], int m, char vname[], char nname[]){
    int i;
    for (i=0; i<20; i++) {
        if (array[i]==NULL) {
            (*array[i]).matNr=m;
            strcpy((*array[i]).nachname,nname);
            strcpy((*array[i]).vorname,vname);
            break;
        }
    }
}

void remove_student (student *array[], int m) {
    int i;
    for (i=0;i<20;i++) {
        if((*array[i]).matNr==m) {
            array[i]=NULL;
        break;
        }
    }
}


int main()
{
    /* Beispielstudent 1*/
    student beispiel;
    beispiel.matNr = 2742380;
    strcpy(beispiel.vorname,"Bruce");
    strcpy(beispiel.nachname, "Lee");
    print_Student(&beispiel);
    /*Array von Studenten*/
    int i;
    int arraySize=20;
    student *array[arraySize];
    //Elemente auf Null setzen
    for (i=0;i<20;i++){
        array[i]=NULL;
    }
    //Test
    print_Student(array[2]);            //WARUM hier kein &?
    add_student(array,42,"Chuck", "Norris");
    get_name(array, 42);
    add_student(array, 30, "Silvester", "Stallone");
    remove_student(array, 42);
    print_students(array);
    clear_students(array);
    print_students(array);
    return 0;
}
