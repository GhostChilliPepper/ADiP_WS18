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
    printf("Palindrome? %s\n", isPalindrome(string) == 1 ? "True" : "False");
    return 0;
}

char *turn(char output[]) {
    char tmp;
    for (int i = 0; i <= (strlen(output)/2)-2; i++) {
        tmp = output[i];
        output[i] = output[strlen(output)-2-i];
        output[strlen(output)-2-i] = tmp;
    }
    return output;
}

int isPalindrome(char *input) {
    char str[100];
    strcpy(str, input);

    if (strcmp(input, turn(str)) == 0) {
        return 1;
    }
    return 0;
}