/*5) Faça um programa que leia um número e, caso ele seja
positivo, calcule e mostre:
• O número digitado ao quadrado.
• A raiz quadrada do número digitado.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    float number;
    printf("Digite um numero: ");
    scanf("%f",&number);
    if (number>=0)
    {
        printf("O quadrado do numero: %.2f\n", number*number);
        printf("A raiz quadrada do numero digitado: %.2f\n", sqrt(number));
    }
    return 0;
}