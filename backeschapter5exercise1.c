/*1) Faça um programa que leia um número inteiro positivo N e
imprima todos os números naturais de 0 até N em ordem
crescente.*/
/*2) Faça um programa que leia um número inteiro positivo N e
imprima todos os números naturais de 0 até N em ordem
decrescente.*/

/*3) Faça um programa que leia um número inteiro N e depois
imprima os N primeiros números naturais ímpares.
*/
#include <stdio.h>

int main() { 
    int N, i=0;
    printf("Digite o valor de N:");
    scanf("%d",&N);
    printf("Todos os numeros naturais de 0 ate N em crescente: \n");
    while(i<=N){
    printf("%d\t",i);
    i++;
    }
    printf("\nTodos os numeros naturais de 0 ate N em ordem decrescente:\n");
    i = N;
    while(i>=0)
    {
        printf("%d\t",i);
        i = i -1;
    }
    printf("\nFaca um programa que leia um numero inteiro N e depois imprima os N primeiros numeros naturais impares\n");
    printf("\nEscreva 'N' numeros naturais impares\n");
    scanf("%d",&N);
    int j = 0;
    int impar = 1;
    while(j<N)
    {
        printf("%d\t",impar);
        impar = impar+2;
        j = j + 1;
    }

    return 0;
}