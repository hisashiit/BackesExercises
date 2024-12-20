/*1) Escreva uma função que receba por parâmetro dois números e
retorne o maior deles.*/
#include <stdio.h>
#include <stdlib.h>

int maior(int a, int b){
    int z;
    if (a>b){
        z = a;
    }
    else{
        z = b;
    }
    return z;
}

int main(){
    int a, b;
    printf("Escreva numero 1: ");
    scanf("%d",&a);
    printf("Escreva numero 2: ");
    scanf("%d",&b);
    int maiorNumero = maior(a,b);
    printf("O maior numero: '%d'",maiorNumero);
    return 0;
}