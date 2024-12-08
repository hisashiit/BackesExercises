/*13) Faça um programa que leia uma matriz de tamanho 5 × 5. Calcule e
imprima a soma dos elementos dessa matriz que não pertencem à diagonal
principal nem à diagonal secundária.*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    float matrix[5][5];
    int i, j;
    i = j = 0;
    while (i<5){
        while (j<5){
            printf("Digite o elemento no index '%d', '%d': ",i,j);
            scanf("%f",&matrix[i][j]);
            j++;
        }
        j=0;
        i++;
    }
    
    i = j = 0;
    //Printando todos os elementos
    while (i<5){
        while (j<5){
            printf("%.2f\t",matrix[i][j]);
            j++;
        }
        printf("\n");
        j=0;
        i++;
    }
    float somaDiagonalPrincipal=0.0;
    i = j = 0;
    //Soma diagonal principal
    while(i<5){
        somaDiagonalPrincipal = somaDiagonalPrincipal + matrix[i][j];
        j++;
        i++;
    }

    i = 0;
    j = 4;
    float somaDiagonalSecundaria=0.0;
    //Soma diagonal secundaria
     while(i<5){
        somaDiagonalSecundaria = somaDiagonalSecundaria + matrix[i][j];
        j = j-1;
        i++;
    }
    i = j = 0;
    float somaTotal = 0.0;
    //Soma de todos os termos
    while (i<5){
        while (j<5){
            somaTotal = somaTotal + matrix[i][j];
            j++;
        }
        j = 0;
        i++;
    }

    printf("A soma dos termos exclusivos da diagonal principal e secundaria: '%.2f' ",somaTotal-somaDiagonalPrincipal-somaDiagonalSecundaria+matrix[2][2]);
    return 0;
}