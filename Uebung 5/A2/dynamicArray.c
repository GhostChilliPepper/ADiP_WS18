//
// Created by lasse on 12/6/18.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int *content;
    int size;
    int size_max;
} DynArray;

/*
typedef struct {
    int *content;
    int size;
    int size_max;
} DynArrayMin;
*/

DynArray newDynArray(int size);
void dyn_array_add(DynArray *array, int value);
DynArray newDynArrayMin(int size);
void dyn_array_min_add(DynArray *array, int value);
void dyn_array_print(DynArray *array);

void clearBuffer() {
    char c;
    while ((c = getchar()) != '\n' && c != EOF) {}
}

int main() {
    int c;
    setup:
    printf("Chose method: \n[1] normal \n[2] min\nInput: "); // Menu
    if (scanf("%i", &c) != 1) { goto setup_error; }
    switch (c) {
        case 1 :
            break;
        case 2 :
            break;
        default:
            goto setup_error;
    }
    int i;
    DynArray test;
    test = newDynArray(1);
    start:
    printf("Enter int: ");
    if (scanf("%i", &i) != 1) { goto error; }
    if (c == 1) { // Prüft, was im Menü gewählt wurde
        dyn_array_add(&test, i);
    } else if (c == 2) {
        dyn_array_min_add(&test, i);
    } else {
        goto setup_error;
    }
    dyn_array_print(&test);
    printf("================================================================\n");
    goto start;
    //return 0;
    error: // error handling
    printf("=ERROR==========================================================\n");
    printf("Someting went wrong! Please try again.\n");
    clearBuffer();
    printf("================================================================\n");
    goto start;
    setup_error: // menu-error handling
    printf("=ERROR==========================================================\n");
    printf("Someting went wrong! Please try again.\n");
    clearBuffer();
    printf("================================================================\n");
    goto setup;
}

/* DynArray
 * Vorteil: Weniger Laufzeit.
 * Nachteil: reserviert unnötig Speicher.
 */
DynArray newDynArray(int size) { // wie ein constructor
    DynArray output;

    output.size_max = size;
    output.size = 0;

    int *array;
    array = (int *)malloc(size * sizeof(int)); // Speicher reservieren (es wird für 'size' int Objekte Speicher reserviert)
    output.content = array;
    return output;
}

void dyn_array_add(DynArray *array, int value) {
    array->size++;
    if(array->size >= array->size_max) { // prüft, ob mehr Speicher reserviert weren muss
        DynArray tmpArray = newDynArray(array->size_max * 2); // Array, das über doppelt so viel Speicher verfügt wird erstellt
        tmpArray.size = array->size;
        memcpy(tmpArray.content, array->content, array->size_max * sizeof(int)); // Inhalt von altem auf neues Array kopieren
        free(array->content); // Speicher von altem Array freigeben

        *array = tmpArray;
    }
    array->content[array->size-1] = value; // neuen Wert in array eintragen.
}

/* DynArray
 * Vorteil: Größere Laufzeit
 * Nachteil: reserviert effizient Speicher.
 */
/*
DynArray newDynArrayMin(int size) {
    DynArray output;

    output.size_max = size;
    output.size = 0;

    int *array;
    array = (int *)malloc(size * sizeof(int));
    output.content = array;
    return output;
}
*/

void dyn_array_min_add(DynArray *array, int value) { // wie dyn_array_min, nur andere Speicher Freigabe
    array->size++;
    if(array->size >= array->size_max) {
        DynArray tmpArray = newDynArray(array->size_max + 1); // neues Array mit Speicher für ein int object mehr als beim alten wird erstellt
        tmpArray.size = array->size;
        memcpy(tmpArray.content, array->content, array->size_max * sizeof(int));
        free(array->content);

        *array = tmpArray;
    }
    array->content[array->size-1] = value;
}

// Print Array
void dyn_array_print(DynArray *array) { // gibt Array aus
    printf("Arraysize: %i\nArraysize_max: %i\n", array->size, array->size_max);
    printf("[");
    for (int i = 0; i < array->size; i++) {
        printf("%i", array->content[i]);
        if (i != array->size-1) {
            printf(", ");
        }
    }
    printf("]\n");
}