/*1) Faça um programa que leia uma matriz de tamanho 3 × 3. Imprima na tela
o menor valor contido nessa matriz.*/
#include <stdio.h>
#include <stdlib.h>

int main(){

    float matrix[3][3];
    int i = 0, j =0;
    while (i<3){
        while (j<3){
            printf("Escreva o numero no index '%d':'%d'",i,j);
            scanf(" %f",&matrix[i][j]);
            j++;
        }
        j = 0;
        i++;
    }
    i = 0, j = 0;
    int z = 1;
    float menor = matrix[0][0];
    while (i<3){
        while (z<3){
            if (menor>matrix[i][z]){
                menor = matrix[i][z];
            }
            j++;
            z++;
        }
        j = 0;
        i = i + 1;
        z = 1;
    }
    //printando os valores da matriz
    i = 0, j = 0;
    printf("Valores da matriz: \n");
    while (i<3){
        while (j<3){
            printf("%f\t",matrix[i][j]);
            j++;
        }
        printf("\n");
        j=0;
        i++;
    }

    printf("Menor valor: '%f'", menor);


    return 0;
}