/*3) Faça um programa que declare uma matriz de tamanho 5 × 5. Preencha
com 1 a diagonal principal e com 0 os demais elementos. Ao final, escreva a
matriz obtida na tela.*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    float matrix[5][5];
    int i = 0; int j = 0;
    while (i<5){
        while(j<5){
            if (i == j){
                matrix[i][j] = 1;
            }
            else{
            matrix[i][j] = 0;}
            j++;
        }
        j=0;
        i++;
    }

    i = j = 0;
    while (i<5){
        while (j<5){
            printf("%.2f\t",matrix[i][j]);
            j++;
        }
        printf("\n");
        j=0;
        i++;
    }

    return 0;
}