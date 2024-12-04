//15) Faça um programa para ler um número inteiro positivo de três dígitos. Em seguida, calcule e mostre o número formado
//pelos dígitos invertidos do número lido. Exemplo: Número lido = 123 Número gerado = 321
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
    int number;
    int milha,centena,dezena,unidade;
    milha=centena=dezena=unidade=0;
    int newNumber;
    int multiplicaUnidade, multiplicaDezena, multiplicaCentena, multiplicaMilha;
    printf("Escreve um numero: ");
    scanf("%d", &number);
    if (number>=1000)
    {
        multiplicaUnidade = 1000;
        multiplicaDezena = 100;
        multiplicaCentena = 10;
        multiplicaMilha=1;
    }
    if (number<=999 && number >= 100)
    {
        multiplicaUnidade = 100;
        multiplicaDezena = 10;
        multiplicaCentena = 1;
        multiplicaMilha=0;
    }
    while (number >= 1000 && number <= 9999)
    {
        number = number - 1000;
        milha = milha + 1;
    }
    while (number >= 100 && number <= 999)
    {
        number = number - 100;
        centena = centena + 1;
    }
    while (number >= 10 && number <= 99)
    {
        number = number - 10;
        dezena=dezena + 1;
    }
    while (number >= 1 && number <= 9)
    {
        number = number - 1;
        unidade=unidade + 1;
    }
    newNumber = multiplicaMilha*milha+multiplicaCentena*centena+dezena*multiplicaDezena+unidade*multiplicaUnidade;
    printf("\nO numero ao contrario: '%d'", newNumber);
    return 0;
}