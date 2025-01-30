/*8) Crie uma função que receba dois parâmetros: um vetor e um valor do
mesmo tipo do vetor. A função deverá preencher os elementos de vetor
com esse valor. Não utilize índices para percorrer o vetor, apenas aritmética
de ponteiros.*/

#include <stdio.h>
#include <stdlib.h>
void preenchaVetor(int vector1[], int tamanho, int valorPreencher){
    int i = 0;
    int *u = vector1;
    int *p = &(vector1[tamanho-1]);
    while (u<=p){
        vector1[i] = valorPreencher;
        u++;
    }
}
int main(){
    int vector1[5] = {1,2,3,4,5};
    int tamanho = 5;
    int valorPreencher = 2;
    printf("Escreva o valor a ser preenchido no vector1: ");
    scanf("%d",&valorPreencher);
    preenchaVetor(vector1,tamanho,valorPreencher);
    printf("O vector1: ");
    int i = 0;
    int *u = vector1;
    int *p = &vector1[tamanho-1];
    while (u<=p){
        printf("%3d\t",vector1[i]);
        u++;
    }


    return 0;
}