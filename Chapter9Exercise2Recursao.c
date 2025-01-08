/*2) Crie uma função recursiva que receba um número inteiro N e
retorne o somatório dos números de 1 a N.*/

#include <stdio.h>
#include <stdlib.h>

int somaNtermos(int n){

    if (n == 0){
        return 0;
    }
    else
    {
        return somaNtermos(n-1) + n;
    }
}
int main(){
    int N;
    printf("Escreva quantos numeros deseja somar de 1 a N: ");
    scanf("%d",&N);
    printf("O resultado de 0 a '%d': '%d'",N,somaNtermos(N));
    return 0;
}