#include <stdio.h>
#include <stdlib.h>

typedef struct IntNode{
    struct IntNode *next;
    int data;
}IntNode;

void *insertFirst (IntNode *head, int d) {
    IntNode *tmp;
    tmp=malloc(sizeof(IntNode));
    (*tmp).data=d;
    tmp->next=head;
    return tmp;
    }

void printList (IntNode *head){
    IntNode *tmp=head;

    while (tmp!=NULL){
        printf("%d-> ",tmp->data);
        tmp=(*tmp).next;}
    printf("NULL\n");
}

struct IntNode*insertLast (IntNode *head, int d){
    IntNode *cursor;
    IntNode *tmp;
    //trivialcase: empty list
    if (head==NULL){return insertFirst(head,d);}
    else {
        cursor=head;
        while (cursor->next!=NULL) {
            cursor=cursor->next;
        }
        tmp=malloc(sizeof(IntNode));
        tmp->data=d;
        tmp->next=NULL;
        cursor->next=tmp;
        return head;
        }
}

void getFirst(IntNode *head) {
    IntNode *cursor=head;
    IntNode *previous;
    while (cursor->next!=NULL) {
        previous=cursor;
        cursor=cursor->next;
        }
    printf("\nFirst Entry is: %d\n\n",(*cursor).data);
    previous->next=NULL;
    free(cursor);
}

int main(){
IntNode *head=NULL;
head=insertFirst(head, 5);
head=insertLast (head,7);
head=insertFirst(head,9);
printList(head);
getFirst(head);
printList(head);
return 0;
}
