/*15) Leia um vetor com 10 números de ponto flutuante. Em seguida, ordene os
elementos desse vetor e imprima o vetor na tela.*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int i = 0;
    float vetor[10];
    while (i<10){
    printf("Digite um numero na posicao '%d': ",i);
    scanf("%f",&vetor[i]);
    i++;
    }
    i = 0;

    float troca;
    int j = 1;
    while(i<10){
        while(j<10){
            if (vetor[i] > vetor[j]){
                troca = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = troca;
            }
            j++;
        }
        i++;
        j = i + 1;
    }
    i = 0;
    j = 0;

    printf("O vetor ordenado: ");
    while (i<10){
        printf("%.2f\t", vetor[i]);
        i++;
    }

    return 0;
}