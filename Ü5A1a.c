#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char tupni (char, int, int);
int main()
{
    char input[100];
    int i;
    scanf("%s",input);
    int x=strlen(input);
    for (i=x-1; i>=0;i--){
    printf("%c",input[i]);
    }
    return 0;
}
