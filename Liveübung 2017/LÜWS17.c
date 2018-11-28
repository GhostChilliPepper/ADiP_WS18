#include <stdio.h>
#include <stdlib.h>
double fevaluate(double a, double b, double c, double d, double x);
double faMittel(double a, double b, double c, double d);
int monotone (double a, double b, double c, double d);
double derivate(double a, double b, double c, double d, double x);
int main()
{
    double a, b, c, d, x;
    printf ("a)\n");
    printf("Geben Sie einen Wert fuer a ein:\n");
    scanf ("%lf",&a);
    printf("Geben Sie einen Wert fuer b ein:\n");
    scanf ("%lf",&b);
    printf("Geben Sie einen Wert fuer c ein:\n");
    scanf ("%lf",&c);
    printf("Geben Sie einen Wert fuer d ein:\n");
    scanf("%lf",&d);
    printf ("\n%lf %lf %lf %lf\n",a,b,c,d);

    printf("\nb)\nGeben Sie einen Wert fuer x ein:\n");
    scanf ("%lf",&x);
    double Ergebnis=fevaluate(a,b,c,d,x);
    printf("\nDas Ergebnis ist: a*x^3+b*x^2+c*x+d=%lf \n",Ergebnis);




    double aMittel=faMittel(a,b,c,d);
    printf("\nd)\nDas arithmetische Mittel ist: %lf\n",aMittel);

    printf("\ne)\n");
    int k=monotone(a,b,c,d);
    if (k==0) {
        printf("Funktion ist monoton steigend");
    }
    if (k>0) printf("Funktion ist nicht monoton steigend");

    printf("\nf)\n");
    printf("Das Ergebnis der Ableitung der Funktion ist: ");
    int Ableitung=derivate(a,b,c,d,1);                                //x=1
    printf("%lf",Ableitung);
    return 0;
}



double fevaluate(double a, double b, double c, double d, double x) {
    double z=a*x*x*x+b*x*x+c*x+d;
    return z;
}



double faMittel(double a, double b, double c, double d) {
    double x;
    double sum=0;
    for (x=-4;x<=4;x=x+0.1){
         sum=sum+fevaluate(a,b,c,d,x);
    }
    double ari=sum/81;
    return ari;
}


int monotone (double a, double b, double c, double d) {
    double x;
    int truevalue;
    for (x=0.1;x<=5;x=x+0.1) {
        double comp1=fevaluate(a,b,c,d,x-0.1);
        double comp2=fevaluate(a,b,c,d,x);
        if (comp1>comp2) {
                truevalue=1;
                break;}
        else truevalue=0;
        }
    return truevalue;
    }

double derivate(double a, double b, double c, double d, double x) {
    double z=3*a*x*x+2*b*x+c;
    return z;
}
