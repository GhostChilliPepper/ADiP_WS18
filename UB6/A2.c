#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char nachname [30];
    float note;
    }student;



int main()
{
    int n,i;
    student *array;
    float bestNote=5.0;
    float durchschnitt=0;
    printf ("Wieviele Studenten gibt es?\n");
    scanf("%d", &n);

//Dynamischer Speicher für array. array enthält daten zu n Studenten
    array= (student*) malloc(n*(sizeof(student)));
        if(array!=NULL) {
            printf("*****Speicher wurde bereitgestellt*****\n");
        }
        else {
            printf("*****Speicher wurde nicht bereitgestellt*****\n");
        }
//Einlesen von Daten
for (i=0; i<n;i++) {
    printf("\nWie heißt %d.Student\n", i+1);
    scanf ("%s", &array[i].nachname);
    printf("\nWelche Note hat dieser Student?\n");
    scanf ("%f",&array[i].note);
    while (array[i].note<1.0||array[i].note>5.0) {
        printf("Die eingegebene Note ist nicht gültig.\nGebe eine neue Note ein.\n");
        scanf("%f",&array[i].note);
        }
    if (array[i].note<bestNote) {
        bestNote=array[i].note;
        }
    }
// Ausgabe der Bestnote
printf("\nDiese Studenten haben die Bestnote %0.1f\n",bestNote);
for (i=0;i<n;i++) {
    if (array[i].note==bestNote){
        printf("%d. %s\n",i+1,array[i].nachname);
    }
}
//Durchschnittsnote
for (i=0;i<n;i++) {
    durchschnitt+=array[i].note;
}
durchschnitt=durchschnitt/n;
printf("\nDie Durschnittsnote aller Studenten ist %0.1f.\n\n",durchschnitt);
    return 0;
}
