#include <stdio.h>
#include <stdlib.h>
int pre(int x);
int succ(int x);


int main()
{
    int x=2;
    int y=5;
    int a=x;                                 //nur nötig fürs printf
    int b=y;                                 //nur nötig fürs printf
    while(y>0){                              //x steigt um 1, solange y um eins sinkt mit y>0
        x=pre(x);
        y=pre(y);}

    printf ("%d - %d = %d",a,b,x);
    return 0;
}


int pre(int x) {
return --x;
}

int succ(int x) {
return ++x;
}
