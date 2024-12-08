/*11) Faça um programa que leia uma matriz de tamanho 5 × 5. Calcule e
imprima a soma dos elementos dessa matriz que estão acima da diagonal
principal.*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int matrix[5][5];
    int i = 0;
    int j = 0;
    while (i<5){
        while (j<5){
            printf("Digite elemento da matriz na posicao '%d','%d'",i,j);
            scanf("%d",&matrix[i][j]);
            j++;
        }
        j = 0;
        i++;
    }

    i = j = 0;
    while (i<5){
        while (j<5){
            printf("%d\t",matrix[i][j]);
            j++;
        }
        printf("\n");
        j = 0;
        i++;
    }
    i = 0;
    j = 1;
    int count = 0;
    int soma = 0;
    while (i<5){
        while (j<5){
            soma = matrix[i][j] + soma;
            j++;
        }
        count = count + 1;
        j = count+1;
        i++;
    }

    printf("\nSoma: '%d'",soma);


    return 0;
}