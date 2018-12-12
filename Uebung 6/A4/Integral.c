#include <math.h>
#include <stdio.h>
#include <stdlib.h>

double f(double x) {
    return 0.4 * pow(x, 5) + pow(x, 3);
}

double integrate(double (*fnct)(double), double left, double right,double stepsize) {
    double hilfsvariable;
    double integral;
    integral = 0;
    for (hilfsvariable = left; hilfsvariable < right; hilfsvariable += stepsize) {
        integral += stepsize * (*fnct)(hilfsvariable);
    }
    return integral;
}
int main(int argc, char**argv) {
    printf("Integral von Sinus [0, pi]: %f\n",integrate(&sin, 0, M_PI, 0.0001)); // 2
    printf("Integral von Sinus [0, 2pi]: %f\n",integrate(&sin, 0, 2 * M_PI, 0.0001)); // 0
    printf("Integral von f(x)=0.4x^5+x^3 [0, 3]: %f\n",integrate(&f, 0, 3, 0.0001)); // ca. 68,84
    return 0;
}