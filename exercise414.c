/*14) Faça um programa para verificar se determinado número
inteiro lido é divisível por 3 ou 5, mas não simultaneamente
pelos dois.*/


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int input;
    printf("Digite um numero: ");
    scanf("%d",&input);
    if (input%3 == 0 && input%5 != 0)
    {
        printf("O %d eh divisivel por '3', mas nao por '5'",input);
    }
    if (input%5 == 0 && input%3 != 0)
    {
        printf("O %d eh divisivel por '5', mas nao por '3'",input);
    }
    return 0;
}