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
DoubleNode insertFirst(DoubleNode* head_ref, double new_data);


int main(){
    for(int i = 1; int i <= 10; i++) {
        DoubleNode output = NULL;
        DoubleNode insertFirst(*output, i);
        printList(*output);
    }
    return 0;
}

DoubleNode insertFirst(DoubleNode* head_ref, double new_data) {
    DoubleNode new_node = (DoubleNode) malloc(sizeof(struct DoubleNode));
    new_node.data  = new_data;
    new_node.next = *head_ref;
    return new_node;
}

void printList(DoubleNode *head) {
    DoubleNode *temp = head;
    printf ("( ");

    while(temp != NULL)
    {
        printf("%lf  ", temp->data);
        temp = temp->next;
    }
    printf(")");

    printf("\n");
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
