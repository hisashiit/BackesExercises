/*15) Faça um programa que leia uma matriz A de tamanho 5 × 5. Em seguida,
calcule e imprima a matriz B, sendo que B = A2.*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    float matrix[5][5];
    int i, j;
    i = j = 0;
    while (i<5){
        while(j<5){
            printf("Digite o elemento no index '%d', '%d': ",i,j);
            scanf("%f",&matrix[i][j]);
            j++;
        }
        j = 0;
        i++;
    }
    float matrixB[5][5];
    i = j = 0;

    while (i<5){
        while (j<5){
            matrixB[i][j] = matrix[i][j]*matrix[i][j];
            j++;
        }
        j = 0;
        i++;
    }

    i = j = 0;

    printf("Matriz A: \n");
    while (i<5){
        while (j<5){
            printf("%.2f\t",matrix[i][j]);
            j++;
        }
        printf("\n");
        j = 0;
        i++;
    }

    i = j = 0;
    printf("Matriz B: \n");
    while (i<5){
        while (j<5){
            printf("%.2f\t",matrixB[i][j]);
            j++;
        }
        printf("\n");
        j = 0;
        i++;
    }


    return 0;
}