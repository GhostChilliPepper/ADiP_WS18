
#include <stdio.h>
#include <math.h>
float scanner();
float cosi(float x);
float sini(float x);
float expi(float x);
int fakultaet (int input);


int main () {
    float x=scanner();
    float calc;
    calc=expi(x);
    printf("%f",calc);
return 0;
}



int fakultaet(int input){
    int product = 1;
    for(int iter = input; iter > 0; iter--) {
        product *= iter;
    }

    return product;
}


float scanner() {
float input;
scanf("%f",&input);
return input;
}

float cosi(float x) {
for(int n=0;n<=5;++n) {
        int z=(2*n);
        int term1=pow((-1),n);
        float term2=pow(x,z);
        int term3=fakultaet(z);
        float answ=(term1)*(term2/term3);
        float sum=sum+answ;
        return sum;
    }
}

float sini(float x) {
for(int n=0;n<=5;++n) {
        int z=(2*n)+1;
        int term1=pow((-1),n);
        float term2=pow(x,z);
        int term3=fakultaet(z);
        float answ=(term1)*(term2/term3);
        float sum=sum+answ;
        return sum;
    }
}

float expi(float x) {
for(int n=0;n<=10;++n) {
        float term2=pow(x,n);
        int term3=fakultaet(n);
        float answ=(term2/term3);
        float sum1=sum1+answ;
        return sum1;
    }
}
