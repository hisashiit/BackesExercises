//16) Escreva um programa que leia um número inteiro e mostre a multiplicação e a divisão desse número por dois (utilize os
    //operadores de deslocamento de bits).

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
    int number;
    int number1;
    printf("Digite um numero inteiro: ");
    scanf("%d", &number);
    printf("\nMultiplicacao por dois %d", number<<1);
    printf("\nDivisao por dois %d", number>>1);
    number1=~number;
    //17) Escreva um programa que leia um número inteiro e mostre o seu complemento bit a bit.
    printf("\nComplemento do numero %d", ~number1);
    //18) Elabore um programa que leia dois números inteiros e exiba o deslocamento, à esquerda e à direita, do primeiro número pelo segundo.
    
    //19) Elabore um programa que leia dois números inteiros e exiba o resultado das operações de “ou exclusivo”, “ou bit a bit” e “e
    //bit a bit” entre eles.
    int c1,c2;
    printf("\nDigite dois numeros inteiros: ");
    scanf("%d %d",&c1,&c2);
    printf("Operacao 'ou-exclusivo' '%d'\nOperacao 'ou bit a bit' '%d'\nOperacao 'e bit a bit' '%d'",c1^c2,c1|c2,c1&c2);
    return 0;
}