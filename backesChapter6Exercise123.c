#include <stdio.h>
#include <stdlib.h>

int main() {
    int i = 0;
    int vetor[6];
    while (i<6){
    printf("Digite o numero: '%d':  ", i+1);
    scanf(" %d", &vetor[5-i]);
    i++;
    }
    i = 0;
    int soma=0;
    while (i<6){
    printf("%d\t",vetor[i]);
    soma = vetor[i] + soma;
    i++;
    }

    printf("\nMedia = %d", soma/5);
    return 0;
}