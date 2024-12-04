#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    float altura,peso;
    printf("Digite o 'peso' e a 'altura' ");
    scanf("%f %f", &peso,&altura);
    if (peso<60){
        if (altura<=1.20){
            printf("A");
        }
        if (altura>=1.2 && altura<=1.7){
            printf("B");
        }
        if (altura>=1.7){
            printf("C");
        }
    }

    if (peso>=60 && peso<=90){
        if (altura<=1.20){
            printf("D");
        }
        if (altura>=1.2 && altura<=1.7){
            printf("E");
        }
        if (altura>=1.7){
            printf("F");
        }
    }

    if (peso>90){
        if (altura<=1.20){
            printf("G");
        }
        if (altura>=1.2 && altura<=1.7){
            printf("H");
        }
        if (altura>=1.7){
            printf("I");
        }
    }
    
    return 0;
}