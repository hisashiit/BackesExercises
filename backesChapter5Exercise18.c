/*18) Faça um programa que receba um número inteiro maior do que 1 e
verifique se o número fornecido é primo ou não.*/

#include <stdio.h>
#include <stdlib.h>
int main(){
    int number=-1;
    while(number<1){
        printf("Digite um numero maior que 1: ");
        scanf("%d",&number);
        if (number<1){
            printf("\nNumero digitado menor do que 1\n");
        }
    }

    int i = 2;
    int count = 0;
    while(i<=number){
        if (number%i==0){
            count = count+1;
        }
        i=i+1;
    }

    if (count==1){
        printf("O numero '%d' eh um numero primo",number);
    }
    if (count>1){
        printf("O numero '%d' nao eh um numero primo", number);
    }

    return 0;
}