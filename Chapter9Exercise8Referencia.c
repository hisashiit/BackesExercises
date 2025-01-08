/*8) Faça uma função que receba, por parâmetro, uma matriz A
contendo seis linhas e seis colunas. Essa função deve retornar,
por referência, a soma dos elementos da sua diagonal principal
e da sua diagonal secundária.*/
#include <stdio.h>
#include <stdlib.h>
void somaDiagPrincSec(int matriz[][6], int n, int *somaprin, int *somasec){
    int i = 0;
    int j = 0;
    while (i<6){
        *somaprin = *somaprin + matriz[i][i];
        i++;
    }
    j=1;
    while (j<=6){
        *somasec = *somasec + matriz[n-j][n-j];
        j++;
    }
}

int main(){
    int soma = 0;
    int somasec=0;
    int matriz[6][6] = { {1, 2, 3, 4, 5,6}, {1, 2, 3, 4, 5,6}, {1, 2, 3, 4, 5,6}, {1, 2, 3, 4, 5,6}, {1, 2, 3, 4, 5,6}, {1, 2, 3, 4, 5,6} };
    int i = 0;
    int j = 0;
    while (i<6){
        while (j<6){
            printf("%d\t",matriz[i][j]);
            j++;
        }
        printf("\n");
        j=0;
        i++;
    }
    somaDiagPrincSec(matriz,6,&soma,&somasec);
    printf("Soma da diagonal principal: '%d' e soma da diagonal secundaria: %d",soma,somasec);
}