//
// Created by lasse on 11/1/18.
//

#include <stdio.h>
int main(){
    char x1,x2,result;
// Beispiel 1:
    x1 = 35;    //x1 wird auf 35 gesetzt
    x2 = 85;    //x2 wird auf 85 gesetzt
    result = x1 + x2;   //x1(35) wird mit x2(85) addiert und in der Variable result gespeichert
    printf("Beispiel 1: %hi + %hi = %hi\n",x1 ,x2, result); //x1(35) + x2(85) = result(120) wird als text ausgegeben
// Beispiel 2:
    x1 = 85;    //x1 wird auf 85 gesetzt
    x2 = 85;    //x2 wird auf 85 gesetzt
    result = x1 + x2;   //x1(85) wird mit x2(85) addiert und in der Variable result gespeichert - Es gibt einen overflow, da die Variablen vom Typ char sind und dieser Typ ASCII Zeichen darstellt, Bereich geht also nur von -128 bis 127
    printf("Beispiel 2: %hi + %hi = %hi\n",x1 ,x2, result); //x1(85) + x2(85) = result(-86) wird als text ausgegeben
    return 0;
}