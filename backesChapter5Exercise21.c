/*21) Escreva um programa que leia certa quantidade de números, imprima o
maior deles e quantas vezes o maior número foi lido. A quantidade de
números a serem lidos deve ser fornecida pelo usuário.*/

#include <stdio.h>

int main(){
    int N;
    printf("Quantidade de numeros");
    scanf("%d",&N);
    int vetor[N];
    int i = 0;
    while (i<N){
    printf("Qual o numero posicao '%d': ", i);
    scanf("%d",&vetor[i]);
    i++;
    }
    i = 0;
    int j = 1;
    while(i<N){
        while (j<N){
            if (vetor[i] > vetor[j]){
                int troca = vetor[j];
                vetor[j] = vetor[i];
                vetor[i] = troca;
            }
            j++;
        }
        i = 1 + i;
        j = 1 + i;
    }

    i = 0;
    while (i<N){
        printf("%d\t",vetor[i]);
        i++;
    }

    i = 0;
    int count = 0;
    while (i<N){
        if (vetor[N-1]==vetor[i]){
            count = count + 1;
        }
        i = i + 1;
    }

    printf("\nHouve '%d' ocorrencias do maior numero", count);
    return 0;
}