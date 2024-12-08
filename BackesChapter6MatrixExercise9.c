/*9. Faça um programa que permita ao usuário entrar com uma matriz de
tamanho 3 × 3 de números inteiros. Em seguida, calcule um vetor contendo
três posições, em que cada posição deverá armazenar a soma dos números
de cada coluna da matriz. Exiba na tela esse array.*/


#include <stdio.h>
#include <stdlib.h>

int main(){
    int matrix[3][3];
    int i = 0;
    int j = 0;
    while (i<3){
        while (j<3){
            printf("Digite o numero na posicao '%d','%d' da matriz: ",i,j);
            scanf("%d",&matrix[i][j]);
            j++;
        }
        j = 0;
        i++;
    }
    j = 0;
    i = 0;
    int soma[3];
    soma[0] = soma[1] = soma[2] = 0;
    int somacoluna[] = {0,0,0};
    while (j<3){
        while (i<3){
            somacoluna[j] = matrix[i][j] + somacoluna[j];
            i++;
        }
        i = 0;
        j++;
    }

    printf("Matriz 3x3: \n");
    i = j = 0;
    while (i<3){
        while (j<3){
            printf("%d\t",matrix[i][j]);
            j++;
        }
        printf("\n");
        j = 0;
        i++;
    }

    i = j = 0;

    printf("Total: \n");
    while (i<3){
        printf("%d\t",somacoluna[i]);
        i++;
    }

    return 0;
}