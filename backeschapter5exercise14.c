/*14) Escreva um programa que leia um número inteiro, maior ou
igual a zero, do usuário. Imprima o enésimo termo da
sequência de Fibonacci. Essa sequência começa no termo de
ordem zero, e, a partir do segundo termo, seu valor é dado
pela soma dos dois termos anteriores. Alguns termos dessa
sequência são: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34.*/
#include <stdio.h>
#include <math.h>

int main(){
    int number=-2;
    while (number<=0){
        printf("Digite numero inteiro: ");
        scanf(" %d",&number);
        if (number<0){
        printf("\nNumero negativo\n");
        }
    printf("numero = '%d'\n",number);
    }
    double a0=0, a1=1, a2=0;
    int i = 2;
    while (i<=number){
        a2=a0+a1;
        a0=a1;
        a1=a2;
        i=i+1;
    }

    if (number == 0)
        {
            printf("O valor do termo [0] = '%d'",0);
        }
        if (number == 1)
        {
            printf("O valor do termo [1] = '%d'",1);
        }

    printf("O valor do termo [%d] = '%e'",i-1,a2);



    return 0;
}