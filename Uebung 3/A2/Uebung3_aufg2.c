#include <stdio.h>


double arithmetischesMittel(double Werte[], int Anzahl){
    double sum;
    for (int i = 0; i <= Anzahl; ++i) {
        sum=sum+Werte[i];
    }
    sum=sum/Anzahl;
    return sum;
}

double Stichprobenvarianz(double Werte[], int Anzahl){
    double sum;
    double AM=arithmetischesMittel(Werte,Anzahl);
    for (int i = 0; i < Anzahl; ++i) {
        sum=sum+(Werte[i] - AM)*(Werte[i] - AM);
    }
    sum=sum/(Anzahl-1);
    return sum;
}

int main() {
    double Werte[20];
    int Anzahl;     //Größe Stichprobe

    printf("Geben sie die Anzahl der Messwerte an!\n");
    scanf("%d",&Anzahl);

    for (int i = 0; i < Anzahl; ++i) {
        printf("Gib deine Messung ein!\n");
        scanf("%lf",&Werte[i]);
        //printf("%lf\n",Werte[i]);
    }


    printf("Das arithmetische Mittel x deiner Messungen ist: %lf\n",arithmetischesMittel(Werte,Anzahl));
    printf("Die Stichprobenvarianz s^2 deiner Messungen ist: %lf\n",Stichprobenvarianz(Werte,Anzahl));


    return 0;
}