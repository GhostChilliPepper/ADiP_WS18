#include<stdio.h>
#include<stdlib.h>
typedef struct intNode{
    int data;
    struct intNode* next;
} intNode;

void insertFirst(intNode** head_ref, int new_data) {
    intNode* new_node = (intNode*) malloc(sizeof(struct intNode));
    new_node->data  = new_data;
    new_node->next = (*head_ref);
    (*head_ref)    = new_node;
}

void printList(intNode *head)
{
    intNode *temp = head;
	printf ("( ");

    while(temp != NULL)
    {
        printf("%d  ", temp->data);    
        temp = temp->next;  
    }
	printf(")");

	printf("\n");
}    
 
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
int main(){
	intNode* head = NULL;
    insertFirst(&head, 15);
    insertFirst(&head, 3);
    insertFirst(&head, 1);
	printList(head);  
    reverseList(&head);	
	printf("reverse list \n");
    printList(head); 
	printf ("insert 14, 18 \n");
    insertFirst(&head, 14); 
    insertFirst(&head, 18); 
    printList(head);
	printf("reverse list \n");
    reverseList(&head); 
	printList(head);   
}