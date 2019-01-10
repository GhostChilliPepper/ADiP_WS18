/* * * * * * * * * * * * * * * * * * * * * *
 * Project: Lasse-Uni                      *
 * Program: online_02.c                    *
 * Autohor: lasse                          *
 * Date: 1/10/19                           *
 * Purpose: FIFO - List                    *
 * * * * * * * * * * * * * * * * * * * * * */

#include <stdio.h>
#include <stdlib.h>

struct node *insertLast(struct node *head, int c);
void printList(struct node *head);
int getFirst(struct node **head);

typedef struct node {
    struct node *next;
    int data;
} node;

int main() {
    struct node *head = NULL;
    printList(head);
    head = insertLast(head, 1);
    head = insertLast(head, 2);
    head = insertLast(head, 3);
    head = insertLast(head, 4);
    head = insertLast(head, 5);
    head = insertLast(head, 6);
    printList(head);

    printf("First data: %i\n", getFirst(&head));
    printList(head);
    printf("First data: %i\n", getFirst(&head));
    printList(head);
    printf("First data: %i\n", getFirst(&head));
    printList(head);
    printf("First data: %i\n", getFirst(&head));
    printList(head);

    return 0;
}

void printList(struct node *head) {
    if (head == NULL) {
        printf("[EMPTY LIST]\n");
    } else {
        while (head != NULL) {
            printf("[");
            printf("%i", head->data);
            printf("]");
            if (head->next != NULL) {
                printf(" -> ");
            } else {
                printf("\n");
            }
            head = head->next;
        }
    }
}

struct node *insertLast(struct node *head, int c) {
    if (head == NULL) {
        head = malloc(sizeof(head));
        if (head == NULL) {
            printf("ERROR: malloc failed");
            return NULL;
        }
        head->data = c;
        head->next = NULL;
    } else {
        struct node *ptr = head;
        while(ptr->next != NULL) {
            ptr = ptr->next;
        }
        ptr->next = malloc(sizeof(ptr));
        if (ptr == NULL) {
            printf("ERROR: malloc failed");
            return NULL;
        }
        ptr->next->data = c;
        ptr->next->next = NULL;
    }
    return head;
}

int getFirst(struct node **head) {
    int output;
    if (head == NULL || (*head) == NULL) {
        printf("ERROR: empty list\n");
        return 0;
    }
    output = (*head)->data;
    struct node *new_head = (*head)->next;
    free(*head);
    *head = new_head;
    return output;
}