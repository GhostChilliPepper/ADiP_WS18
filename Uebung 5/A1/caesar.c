//
// Created by lasse on 12/5/18.
//

#include <stdio.h>
#include <string.h>

char *encryptROT13(char *s);
char *decryptROT13(char *s);

char *encrypt(char *s, int k);
char *decrypt(char *s, int k);

void clearBuffer() {
    char c;
    while ((c = getchar()) != '\n' && c != EOF) {}
}

int main() {
    char string[100];
    int k;
    start:
    printf("Enter string: ");
    fgets(string, 100, stdin);
    if (ferror(stdin)) { clearerr(stdin); goto error; }
    printf("Enter ROT value: ");
    if (scanf("%i", &k) != 1) { goto error; }
    printf("=ROT13==========================================================\n");
    printf("string: %s\n", string);
    printf("Encript: %s\n", encryptROT13(string));
    printf("Decript: %s\n", decryptROT13(string));
    printf("=ROT k==========================================================\n");
    printf("string: %s\n", string);
    printf("Encript: %s\n", encrypt(string, k));
    printf("Decript: %s\n", decrypt(string, k));
    printf("================================================================\n");
    return 0;
    error:
    printf("=ERROR==========================================================\n");
    printf("Someting went wrong! Please try again.\n");
    clearBuffer();
    printf("================================================================\n");
    goto start;
}

char *encryptROT13(char *s) {
    return encrypt(s, 13);
}

char *decryptROT13(char *s) {
    return decrypt(s, 13);
}

char *encrypt(char  *s, int k) {

    if (k < 0 || k >= 27) {                                 //k nicht im shiftbaren Bereich
        return 0;
    }

    for (int i = 0; i < strlen(s); i++) {
        if ((int)s[i] >= 65 && (int)s[i] <= 90) {           //Großbuchstaben
            if ((int)s[i]+k > 90) {                         //Überschreitet Grenze
                s[i] =  64+((int)s[i]+k-90);
            } else {
                s[i] = (int)s[i]+k;
            }
        } else if ((int)s[i] >= 97 && (int)s[i] <= 122) {   //Kleinbuchstaben
            if ((int)s[i]+k > 122) {                        //Überschreitet Grenze
                s[i] =  96+((int)s[i]+k-122);
            } else {
                s[i] = (int)s[i]+k;
            }
        }
    }
    return s;
}

char *decrypt(char *s, int k) {

    if (k < 0 || k >= 27) {                                 //k nicht im shiftbaren Bereich
        return 0;
    }

    for (int i = 0; i < strlen(s); i++) {
        if ((int)s[i] >= 65 && (int)s[i] <= 90) {           //Großbuchstaben
            if ((int)s[i]-k < 65) {                         //Unterschreitet Grenze
                s[i] = 91-(65-((int)s[i]-k));
            } else {
                s[i] = (int)s[i]-k;
            }
        } else if ((int)s[i] >= 97 && (int)s[i] <= 122) {   //Kleinbuchstaben
            if ((int)s[i]-k < 97) {                         //Unterschreitet Grenze
                s[i] = 123-(97-((int)s[i]-k));
            } else {
                s[i] = (int)s[i]-k;
            }
        }
    }
    return s;
}