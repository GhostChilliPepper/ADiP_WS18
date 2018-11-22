#include <stdio.h>
int succ(int x);
int pre(int x);

int main() {
    int x=0;            //Set x Element der ganzen Zahlen
     int a=x;
     int b=x;
    int y=8;           //Set y Element der natürlichen Zahlen (mit 0)
     int c=y;

    while (y>1) {
        y=pre(y);
        a=b;
        if (x>0) {
            while (a>0) {
            x=succ(x);
            a=pre(a);
            }
        }

         if (x<0) {
            while (a<0) {
            x=pre(x);
            a=succ(a);
            }
        }

    }
    if (y==0)
    x=0;

    printf ("%d * %d = %d",b,c,x);
    return 0;
    }


int succ(int x) {
    return ++x;}

int pre(int x) {
    return --x;}

