/*10) Faça um programa que preencha um vetor de tamanho 100 com os 100
primeiros números naturais que não são múltiplos de 7. Ao final, imprima
esse vetor na tela.*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int vetor[100];
    int i = 0;
    int j = 0;
    while (i<100){
        if (j%7!=0){
            vetor[i] = j;
            i++;
        }
        j++;
    }

    i = 0;
    while(i<100){
        printf("%d\t",vetor[i]);
        if ((i+1)%10==0){
            printf("\n");
        }
        i++;
    }
    return 0;
}