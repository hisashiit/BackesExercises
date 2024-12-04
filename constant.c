#include <stdio.h>
#include <stdlib.h>
#define PI 3.14 //variavel de escopo global
const double euler = 2.73;

int main(){

    double raio, area;

    printf("Calculo da area de um circulo\n Escreva o valor do raio: ");
    scanf("%lf", &raio);

    area = raio*raio*PI;

    printf("O valor da area eh igual a %lf ", area);
    
    return 0;
}