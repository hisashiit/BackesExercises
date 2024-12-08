/*12) Faça um programa que leia uma matriz de tamanho 6 × 6. Calcule e
imprima a soma dos elementos dessa matriz que estão abaixo da diagonal
principal.*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int matrix[6][6];
    int i, j;
    i = j = 0;
    while (i<6){
        while (j<6){
            printf("Digite o elemento no index '%d','%d': ",i,j);
            scanf("%d",&matrix[i][j]);
            j++;
        }
        j = 0;
        i++;
    }
    //Printando todos os resultados da matrix escrita
    i = j = 0;
    while (i<6){
        while (j<6){
            printf("%d\t",matrix[i][j]);
            j++;
        }
        printf("\n");
        j = 0;
        i++;
    }

    int soma = 0;
    i = 0;
    j = 6;
    int variavelj = 6;
    int z = 0;
    while (i<6){
        while (j<6){
            soma = soma + matrix[i][z];
            j++;
            z++;
        }
        z = 0;
        if (j==1){
            break;
        }
        variavelj = variavelj - 1;
        j = variavelj;
        i++;
    }

    printf("Soma: '%d'",soma);

}