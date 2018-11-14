/*==============================================================
 * Author: Susi Gentsch
 * Date: 11.11.2018
 * Description: Zahl zwischen 20 und 69 in Lautschrift ausgeben
 * File: 3.c
 * Compile: gcc -o 3 -Wall 3.c
 * =============================================================
 */

#include<stdio.h>

void uebersetzer(int num);

int main(void)
{
    int pre_input = 0;
    int check = 0;
    int achtung = -1;

    while(achtung < 0) {
        printf("Bitte geben sie eine Zahl zwischen 20 und 69 ein: ");
        check = scanf("%d", &pre_input);
        if(check != 1) {
            printf("Blitch ist dumm\n");
        }
        if(pre_input < 20) {
            printf("ERROR, die Zahl liegt nicht zwischen 20 und 69.\n");
        } else if (pre_input > 69) {
            printf("ERROR, die Zahl liegt nicht zwischen 20 und 69.\n");
        } else {
            achtung = 4;
        }
    }
    uebersetzer(pre_input);
    return 0;
}

/*
 * Description: Gibt Zahl in Lautschrift aus
 * Input: Integer zwischen 20 und 69
 * Output: printf statement
 */

void uebersetzer(int num)
{
    char *einstellige_ziffern[] = { "ein", "zwei", "drei", "vier", "fünf", "sech", "sieben", "acht", "neun" };
    char *zehner[] = { "zwanzig", "dreizig", "vierzig", "fünfzig", "sechzig" };

    int einstellige = num % 10;
    int zehn = (num - einstellige) / 10;

    if(einstellige == 0) {
        printf("%s\n", zehner[zehn-2]);
    } else {
    printf("%s-und-%s\n",einstellige_ziffern[einstellige - 1], zehner[zehn - 2]);
    }
}
