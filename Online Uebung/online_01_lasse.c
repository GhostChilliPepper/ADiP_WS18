//
// Created by lasse on 11/29/18.
//

#include <stdio.h>
#include <stdlib.h>

double evaluate(double a,double b,double c,double d,double x);
double min(double a,double b,double c,double d);
double max(double a,double b,double c,double d);
int monotone(double a,double b,double c,double d);
double derivation(double a,double b,double c,double d,double x);

int main() {
    double a, b, c, d, x;
    start:
    printf("a:");
    if (scanf("%lf", &a) != 1) { goto error; }
    printf("b:");
    scanf("%lf", &b);
    printf("c:");
    scanf("%lf", &c);
    printf("d:");
    scanf("%lf", &d);
    printf("=INIT===========================================================\n");
    printf("a: %lf, b: %lf, c: %lf, d: %lf\n",a,b,c,d);
    printf("=EVALUATE=======================================================\n");
    printf("x: 2\n");
    printf("-> %lf\n", evaluate(a,b,c,d,2));
    printf("=MIN============================================================\n");
    printf("Interval: [-5, 5]\n");
    printf("-> %lf\n", min(a,b,c,d));
    printf("=MAX============================================================\n");
    printf("Interval: [-5, 5]\n");
    printf("-> %lf\n", max(a,b,c,d));
    printf("=MONOTONE=======================================================\n");
    printf("Interval: [0, 5]\n");
    printf("-> %s\n", monotone(a,b,c,d) == 1 ? "True" : "False");
    printf("================================================================\n");
    printf("=DERIVATION=====================================================\n");
    printf("x: 1\n");
    printf("-> %lf\n", derivation(a,b,c,d, 1));
    printf("================================================================\n");
    return 0;
    error:
    printf("=ERROR==========================================================\n");
    printf("Someting went wrong! Please try again\n");
    printf("Press any key\n");
    char e;
    scanf("%c", &e);
    printf("================================================================\n");
    goto start;
    //return 1;
}

double evaluate(double a,double b,double c,double d,double x) {
    return a*x*x*x+b*x*x+c*x+d;
}

double min(double a,double b,double c,double d) {
    double interval[] = {-5, 5};
    double min = evaluate(a,b,c,d,interval[0]);
    for (int i = interval[0]; i <= interval[1]; i++) {
        if (evaluate(a,b,c,d,i) < min) {
            min = evaluate(a,b,c,d,i);
        }
    }
    return min;
}

double max(double a,double b,double c,double d) {
    double interval[] = {-5, 5};
    double max = evaluate(a,b,c,d,interval[0]);
    for (int i = interval[0]; i <= interval[1]; i++) {
        if (evaluate(a,b,c,d,i) > max) {
            max = evaluate(a,b,c,d,i);
        }
    }
    return max;
}

int monotone(double a,double b,double c,double d) {
    double interval[] = {0, 5};
    double mon = evaluate(a,b,c,d,interval[0]);
    for (int i = interval[0]; i <= interval[1]; i++) {
        if (evaluate(a,b,c,d,i) < mon) {
            return 0;
        }
        mon = evaluate(a,b,c,d,i);
    }
    return 1;
}

double derivation(double a,double b,double c,double d,double x) {
    return 3*a*x*x+2*b*x+c;
}
