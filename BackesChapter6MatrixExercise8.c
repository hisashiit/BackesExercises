/*8) Calcular e imprimir na tela uma matriz de tamanho 10 × 10, em que seus
elementos são da forma:*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    float matrix[10][10];
    int i = 0;
    int j = 0;
    while(i<10){
        while (j<10){
            if (i<j){
                matrix[i][j] = 2*i + 7*j - 2;
            }
            if (i==j){
                matrix[i][j] = 3*i*i - 1;
            }
            if (i>j){
                matrix[i][j] = 4*i*i*i + 5*j*j + 1;
            }
            j++;
        }
        j = 0;
        i++;
    }
    i = j = 0;
    int linha = 0;
    int coluna = 0;
    printf("\t");
    while (coluna<10){
        printf("%d\t",coluna);
        coluna++;
    }
    printf("\n");
    i=0;
    while (i<10){
        while (j<10){
            if (j==0){
                printf("%d\t",linha);
            }
            printf("%.2f\t",matrix[i][j]);
            j++;
        }
        j = 0;
        i++;
        linha++;
        printf("\n");
    }
    return 0;
}