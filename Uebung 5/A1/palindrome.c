//
// Created by lasse on 12/4/18.
//

#include <stdio.h>
#include <string.h>

char *turn(char *str);
int isPalindrome(char *str);

int main() {
    char string[100];
    printf("Enter String: ");
    fgets(string, 100, stdin);
    printf("%s \n", turn(string));
    printf("Palindrome? %s\n", isPalindrome(string) ? "True" : "False");
    return 0;
}

char *turn(char output[]) {
    char tmp;
    for (int i = 0; i < (strlen(output)/2)-1; i++) { // Wird so oft wiederholt, bis die Zähl-Variable die hälfte der Stringlänge erreicht (hälft, weil immer 2 chars getauscht werden). -1 am Ende, damit \n nicht mitgetauscht wird.
        // tauschen
        tmp = output[i];
        output[i] = output[strlen(output)-2-i];
        output[strlen(output)-2-i] = tmp;
    }
    return output;
}

int isPalindrome(char *input) {
    char str[100];
    strcpy(str, input); // string muss kopiert werden, weil man sonst den poniter vergleicht.

    if (strcmp(input, turn(str)) == 0) {
        return 1;
    }
    return 0;
}