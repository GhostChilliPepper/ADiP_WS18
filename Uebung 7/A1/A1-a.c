/* * * * * * * * * * * * * * * * * * * * * *
 * Project: ADiP_WS18
 * Program: A1-a.c
 * Autohor: lasse
 * Date: 12/19/18
 * Purpose: 
 * * * * * * * * * * * * * * * * * * * * * */

#include <stdio.h>

int main(int argc, char *argv[]) {
    IntNode *L2, *L1 = NULL;
    L1 = insertFirst( L1, 3);
    L1 = insertFirst( L1, 7);
    L1 = insertFirst( L1, 11);
    L2 = L1;
    L2 = insertFirst( L2, 5);
    L2 = insertFirst( L2, 14);
    \\ Stelle 1
    printList(L1);
    printList(L2);
    return 0;
}