/*2) Escreva uma função para o cálculo do volume e da área de uma esfera
em que π = 3.1414592. O valor do raio r deve ser
passado por parâmetro, e os valores calculados
devem ser retornados por referência.*/


#include <stdio.h>
#include <stdlib.h>
const double PI = 3.1414592;
void VolumeAreaEsfera (double r, double *volume, double *area){
    *volume = (4.0/3.0)*(PI*r*r*r);
    *area = 4.0*PI*r*r;
}
int main() {   
    double r;
    printf("Escreva o raio da esfera: ");
    scanf("%lf",&r);
    double v;
    double a;
    VolumeAreaEsfera(r,&v,&a);
    printf("Raio:'%.3lf'\nVolume:'%.3lf'\nArea:'%.3lf'",r,v,a);
    return 0;
}