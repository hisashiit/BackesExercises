/*4) Leia uma matriz de tamanho 4 × 4. Em seguida, conte e escreva na tela
quantos valores maiores do que 10 ela possui.
5) Leia uma matriz de tamanho 4 × 4. Em seguida, conte e escreva na tela
quantos valores negativos ela possui.*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    float matrix[4][4];
    int i = 0; int j = 0;
    while (i<4){
        while (j<4){
            printf("Digite o numero da matriz no index '%d': ", i);
            scanf("%f", &matrix[i][j]);
            j++;
        }
        j = 0;
        i++;
    }
    i = 0;
    j = 0;
    int count10 = 0;
    int countnega = 0;
    while (i<4){
        while (j<4){
            if (matrix[i][j] > 10){
                count10 = count10 + 1;
            }
            if (matrix[i][j]<0){
                countnega=countnega+1;
            }
            j++;
        }
        j = 0;
        i++;
    }

    i = j = 0;
    while (i<4){
        while (j<4){
            printf("%.2f\t",matrix[i][j]);
            j++;
        }
        printf("\n");
        j=0;
        i++;
    }

    printf("A quantidade de numeros negativos: '%d'\nA quantidade de numeros acima de dez: '%d'",countnega,count10);
    return 0;
}