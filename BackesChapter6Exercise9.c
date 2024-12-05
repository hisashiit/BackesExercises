/*9) Faça um programa que receba do usuário dois arrays, A e B, com 10
números inteiros cada. Crie um novo array C calculando C = A – B. Mostre
na tela os dados do array C.*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int arrayA[10];
    int arrayB[10];
    int arrayC[10];
    int i = 0;
    while (i<10){
        printf("Digite o numero do vetorA no index '%d': ",i);
        scanf("%d",&arrayA[i]);
        i++;
    }

    i = 0;

    while (i<10){
        printf("Digite o numero do vetorB no index '%d': ",i);
        scanf("%d",&arrayB[i]);
        i++;
    }

    i = 0;

    while (i<10){
        arrayC[i] = arrayA[i] - arrayB[i];
        i++;
    }

    i = 0;

    while (i<10){
        printf("%d\t",arrayC[i]);
        i++;
    }


    return 0;
}