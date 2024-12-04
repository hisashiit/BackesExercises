/*11) Faça um algoritmo que leia um número positivo e imprima
seus divisores. Exemplo: Os divisores do número 66 são: 1, 2,
3, 6, 11, 22, 33 e 66.
12) Escreva um programa que leia um número inteiro e calcule a
soma de todos os divisores desse número, com exceção dele
próprio. Exemplo: A soma dos divisores do número 66 é 1 + 2
+ 3 + 6 + 11 + 22 + 33 = 78.*/
#include <stdio.h>
#include <math.h>
int main(){
    int number;
    numeronegativo:
    printf("Escreva um numero positivo: ");
    scanf("%d", &number);
    if (number<0){
        printf("O numero informado eh negativo\n");
        goto numeronegativo;
    }

    int i = 1;

    while (i<=number){
        if (number%i == 0)
        {
            printf("%d\t",i);
        }
        i++;
    }
    i = 1;
    int total = 0;
    while (i<number){
        if (number%i == 0)
        {
            total = total + i;
        }
        i++;
    }
    printf("\nSoma de todos os divisores '%d'",total);

    return 0;
}