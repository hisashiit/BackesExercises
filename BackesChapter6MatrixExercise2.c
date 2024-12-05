/*2) Faça um programa que leia uma matriz de tamanho 4 × 4. Imprima na tela
o maior valor contido nessa matriz e a sua localização (linha e coluna).*/
#include <stdio.h>
#include <stdlib.h>

int main(){

    float matrix[4][4];
    int i = 0, j =0;
    while (i<4){
        while (j<4){
            printf("Escreva o numero no index '%d':'%d'",i,j);
            scanf(" %f",&matrix[i][j]);
            j++;
        }
        j = 0;
        i++;
    }
    i = 0, j = 0;
    int l, c;
    int z = 1;
    float maior = matrix[0][0];
    while (i<4){
        while (z<4){
            if (maior<matrix[i][z]){
                maior = matrix[i][z];
                l = i;
                c = z;
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
    while (i<4){
        while (j<4){
            printf("%f\t",matrix[i][j]);
            j++;
        }
        printf("\n");
        j=0;
        i++;
    }

    printf("Maior valor: '%f', posicao '%d' e '%d'", maior,l,c);


    return 0;
}