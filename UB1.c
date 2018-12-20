#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 30

struct doppel {
    double data;
    struct doppel *next;
};

typedef struct doppel doubleNode;

doubleNode *next =NULL;
doubleNode *anfang =NULL;

void insertFirst (double d, doubleNode *anfang) {
    doubleNode *zeiger;
    if (anfang==NULL) {
            if ((anfang= malloc(sizeof(struct doppel)))==NULL) {
                printf("Kein Speicher vorhanden fuer anfang");
                return 1;
                }
            anfang->data=d;
            anfang->next=NULL;
            }
    else {  zeiger=anfang;
            anfang=malloc(sizeof(doubleNode));
            anfang->data=d;
            anfang->next=zeiger;

    }
}

void eingabeAnfang (){
    double d;
    printf("\nGeben Sie ein: \n");
    scanf("%lf",&d);
    insertFirst(d,anfang);

}

void printList(){
 doubleNode *zeiger=anfang;
 while(zeiger!= NULL) {
      printf("%lf\n",zeiger->data);
         printf("|-----------------------------------"
                "----------------------|\n");
         zeiger=zeiger->next;
   }
}

void insertLast(double d, doubleNode *anfang){
    doubleNode *zeiger;
    if (anfang==NULL) {
            if ((anfang= malloc(sizeof(struct doppel)))==NULL) {
                printf("Kein Speicher vorhanden fuer anfang");
                return 1;
                }
            anfang->data=d;
            anfang->next=NULL;
            }
    else{
    zeiger=anfang;
    while (zeiger!=NULL) {
        zeiger=zeiger->next;
    }
        if (zeiger->next=malloc(sizeof(doubleNode))==NULL){
            printf("Kein Speicher mehr vorhanden");
            return 1;
        }
    zeiger->data=d;
    zeiger->next=NULL;
    }
}


void eingabeEnde(){
    double d;
    printf("\nGeben Sie ein: \n");
    scanf("%lf",&d);
    insertLast(d,anfang);
}

void get (doubleNode *anfang){
        printf("\nGeben Sie i ein: ");
    int i;
    scanf("%d",&i);
    doubleNode *zeiger;
    zeiger=anfang;
    int k;
    for (k=0; k<i;i++) {
        if (zeiger->next==NULL) {
            printf("Liste hat nur %d Elemente",k+1);
            return 1;
        }
        zeiger=zeiger->next;
    }
    printf ("%lf",zeiger->data);
}

void delete(doubleNode *anfang){
    printf("\nGeben Sie i ein: ");
    int i;
    scanf("%d",&i);
    doubleNode *zeiger,*zeiger1;
    zeiger1=anfang;
    zeiger=anfang;
    int k;
    for (k=0; k<i-1;i++) {
        if (zeiger->next==NULL) {
            printf("Liste hat nur %d Elemente",k+1);
            return 1;
        }
        zeiger=zeiger->next;
    }
    for (k=0; k<i;i++) {
        if (zeiger->next==NULL) {
            printf("Liste hat nur %d Elemente",k+1);
            return 1;
        }
        zeiger1=zeiger1->next;
    }
    if (i==1){
        anfang=zeiger1;
        free(zeiger);
    }
    else{
    zeiger->next=zeiger1->next;
    free(zeiger1);
    }
}


int main () {
    int wahl;
    do {
    printf("Was wollen Sie tun?:\n[1]  Eingabe (Anfang)\n[2]  Eingabe (Ende)\n[3]  Liste ausgeben\n[4]  Element Ausgeben\n[5]  Element Löschen\n\n");
    scanf("%d",&wahl);

    switch(wahl) {
         case 1 : eingabeAnfang();
                  break;
         case 2 : eingabeEnde();
                  break;
         case 3 : printList();
                  break;
         case 4 : get(anfang);
                    break;
         case 5 : delete(anfang);
                    break;
        case 9: break;
         default: printf("Falsche Eingabe!!!\n");
      }
    } while(wahl != 9);

    return 0;

}
