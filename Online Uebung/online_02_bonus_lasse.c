/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 * Project: Lasse-Uni                                                    *
 * Program: online_02.c                                                  *
 * Autohor: lasse                                                        *
 * Date: 1/10/19                                                         *
 * Information: Does not work properly (getFirst function is corupted)   *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#include <stdio.h>
#include <stdlib.h>

struct queue *insertLast(struct queue *list, int c);
void printList(struct queue *list);
int getFirst(struct queue **list);

typedef struct queue {
    struct node *head;
    struct node *tail;
} queue;

typedef struct node {
    struct node *next;
    int data;
} node;

int main() {
    struct queue *list;
    list->head = NULL;
    list->tail = NULL;

    printList(list);
    list = insertLast(list, 1);
    printList(list);
    list = insertLast(list, 2);
    list = insertLast(list, 3);
    list = insertLast(list, 4);
    list = insertLast(list, 5);
    list = insertLast(list, 6);
    printList(list);

    printf("First data: %i\n", getFirst(&list));
    printList(list);
    printf("First data: %i\n", getFirst(&list));
    printList(list);
    printf("First data: %i\n", getFirst(&list));
    printList(list);
    printf("First data: %i\n", getFirst(&list));
    printList(list);

    return 0;
}

void printList(struct queue *list) {
    if (list->head == NULL && list->tail == NULL) {
        printf("[EMPTY LIST]\n");
    } else if (list->head == list->tail) {
        printf("[");
        printf("%i", list->head->data);
        printf("]\n");
    } else {
        while (list->head != list->tail) {
            printf("[");
            printf("%i", list->head->data);
            printf("]");
            if (list->head != list->tail) {
                printf(" -> ");
            } else {
                printf("\n");
            }
            list->head = list->head->next;
        }
    }
}

struct queue *insertLast(struct queue *list, int c) {
    if (list->head == NULL && list->tail == NULL) {
        list->head = malloc(sizeof(list->head));
        if (list->head == NULL) {
            printf("ERROR: malloc failed");
            return NULL;
        }
        list->head->data = c;
        list->head->next = NULL;
        list->tail = list->head;
    } else {
        list->tail->next = malloc(sizeof(list->tail));
        if (list->tail->next == NULL) {
            printf("ERROR: malloc failed");
            return NULL;
        }
        list->tail->next->data = c;
        list->tail->next->next = NULL;
        list->tail = list->tail->next;
    }
    return list;
}

int getFirst(struct queue **list) {
    int output;
    if ((*list)->head == NULL && (*list)->tail == NULL) {
        printf("ERROR: empty list\n");
        return 0;
    }
    output = (*list)->head->data;
    struct node *new_head = (*list)->head->next;
    free((*list)->head);
    (*list)->head = new_head;
    return output;
}