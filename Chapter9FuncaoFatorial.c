#include <stdio.h>
#include <stdlib.h>

int fatorial (int n){
    int a, b;
    a = b = 1;
    int i = 1;
    while (i<=n){
        a=i*a;
        i++;
    }

    return a;
}

int main(){
    int valor=-7;
    while (valor<0){
    printf("Escreva o numero que se quer calcular fatorial: ");
    scanf("%d",&valor);
    if (valor<0){
        printf("Valor negativo\n");
    }
    }
    int resultado = fatorial(valor);
    printf("o valor de fatorial de '%d': '%d'",valor,resultado);
}