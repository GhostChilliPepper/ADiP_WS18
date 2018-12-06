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

DynArray newDynArray(int size);
void dyn_array_add(DynArray *array, int value);
void dyn_array_print(DynArray *array);

void clearBuffer() {
    char c;
    while ((c = getchar()) != '\n' && c != EOF) {}
}

int main() {
    int i;
    DynArray test;
    test = newDynArray(1);
    start:
    printf("Enter int: ");
    if (scanf("%i", &i) != 1) { goto error; }
    dyn_array_add(&test, i);
    dyn_array_print(&test);
    printf("=========================================\n");
    goto start;
    //return 0;
    error:
    printf("=ERROR==========================================================\n");
    printf("Someting went wrong! Please try again.\n");
    clearBuffer();
    printf("================================================================\n");
    goto start;
}

DynArray newDynArray(int size) {
    DynArray output;

    output.size_max = size;
    output.size = 0;

    int *array;
    array = (int *)malloc(size * sizeof(int));
    output.content = array;
    return output;
}

void dyn_array_add(DynArray *array, int value) {
    array->size++;
    if(array->size >= array->size_max) {
        DynArray tmpArray = newDynArray(array->size_max * 2);
        tmpArray.size = array->size;
        memcpy(tmpArray.content, array->content, array->size_max * sizeof(int));
        free(array->content);

        *array = tmpArray;
    }
    array->content[array->size-1] = value;
}

void dyn_array_print(DynArray *array) {
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