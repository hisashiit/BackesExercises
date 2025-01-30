/*14) Elabore uma função que receba por parâmetros os
coeficientes de uma equação do segundo grau. Em seguida,
calcule e mostre as raízes dessa equação. Lembre-se de que as
raízes são calculadas como
em que Δ = b2 – 4 * a * c e ax2 +bx + c= 0 representa
uma equação do segundo grau. A variável a
tem de ser diferente de zero. Caso seja igual,
imprima a mensagem “Não é equação de
segundo grau” e retorne o valor −1. Do
contrário, retorne o número de raízes e as raízes
(por referência) se elas existirem:
• Se Δ < 0, não existe real. Número de
raízes: 0.
• Se Δ = 0, existe uma raiz real. Número de
raízes: 1.
• Se Δ > 0, existem duas raízes*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int raizes(double a, double b, double c, double *raiz1, double *raiz2, int *numeroRaizes){
    double delta = b*b - 4*a*c;
    if (a==0){
        printf("Nao eh raiz do segundo grau");
        return -1;
    }
    if (delta > 0){
        *numeroRaizes = 2;
        *raiz2= (-b + sqrt(delta))/(2*a);
        *raiz1= (-b - sqrt(delta))/(2*a);
    }
    if (delta == 0){
        *numeroRaizes = 1;
        *raiz2=*raiz1 = (-b + sqrt(delta))/(2*a);
    }
    if (delta < 0){
        *numeroRaizes = 0;
    }
}

int main(){
    double raiz1;
    double raiz2;
    int numeroRaizes;
    double a,b,c;
    printf("Qual o valor de 'a': ");
    scanf("%lf",&a);
    printf("Qual o valor de 'b': ");
    scanf("%lf",&b);
    printf("Qual o valor de 'c': ");
    scanf("%lf",&c);

    raizes(a,b,c,&raiz1,&raiz2,&numeroRaizes);
    printf("O numero de raizes: '%d'\nO valor da raiz 1: '%.2lf'\nO valor da raiz 2: '%.2lf'",numeroRaizes,raiz1, raiz2);
    return 0;
}