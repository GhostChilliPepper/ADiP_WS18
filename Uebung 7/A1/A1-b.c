/* * * * * * * * * * * * * * * * * * * * * *
 * Project: ADiP_WS18
 * Program: A1-b.c
 * Autohor: lasse
 * Date: 12/20/18
 * Purpose: 
 * * * * * * * * * * * * * * * * * * * * * */

#include<stdio.h>
#include<stdlib.h>

typedef struct DoubleNode{
    double data;
    struct DoubleNode* next;
} DoubleNode;

void printList(DoubleNode *head);
void insertFirst(DoubleNode** head_ref, double new_data);
void insertLast(DoubleNode** head_ref, double new_data);
double get(DoubleNode *head,int index);

int main(){
    DoubleNode* output = NULL;
    for(int i = 1; i <= 10; i++) {
        insertFirst(&output, i);
    }
    insertLast(&output, 10.12);
    printList(output);
    printf("\n");
    printf("Index: 5 - %lf\n", get(output, 5));
    return 0;
}

double get(DoubleNode *head, int index) {
    int counter = 1;
    while(head != NULL && counter < index) {
        counter++;
        head = head->next;
    }
    if(counter == index) {
        return head->data;
    } else {
        return -1;
    }
}

void insertFirst(DoubleNode** head_ref, double new_data) {
    DoubleNode* new_node = (DoubleNode*) malloc(sizeof(struct DoubleNode));
    new_node->data  = new_data;
    new_node->next = (*head_ref);
    (*head_ref)    = new_node;
}

void insertLast(DoubleNode** head_ref, double new_data) {
    DoubleNode* new_node = (DoubleNode*) malloc(sizeof(struct DoubleNode));
    DoubleNode* vorher;
    DoubleNode* ende = NULL;
    DoubleNode *temp = *head_ref;

    new_node->data  = new_data;
    while(temp != NULL) {
        vorher = temp;
        temp = temp->next;
    }
    vorher->next = new_node;
    new_node->next = ende;
}

void printList(DoubleNode *head) {
    DoubleNode *temp = head;

    while(temp != NULL)
    {
        printf ("[");
        printf("%lf", temp->data);
        printf("]");
        if(temp->next != NULL){
            printf(" -> ");
        }
        temp = temp->next;
    }
}
/*
void reverseList(intNode** head_ref)
{
    intNode* prev   = NULL;
    intNode* current = *head_ref;
    intNode* next;
    while (current != NULL)
    {
        next  = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    *head_ref = prev;
}
 */
