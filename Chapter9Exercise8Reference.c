/*8) Faça uma função que receba, por parâmetro, uma matriz A
contendo seis linhas e seis colunas. Essa função deve retornar,
por referência, a soma dos elementos da sua diagonal principal
e da sua diagonal secundária.*/
#include <stdio.h>
#include <stdlib.h>
void somaDiagonal(double A[][6], int n, double *soma1, double *soma2){
    int i, j;
    *soma1 = *soma2 = 0.0;
    i = j = 0;
    while (i<n){
        *soma1 = *soma1 + A[i][i];
        i++;
    }
    i = n-1;
    while (j<n){
        *soma2 = *soma2 + A[j][i];
        j++;
        i--;
    }
}
int main(){
    double A[6][6] = { {5, 10, 21, 4131, 535, 31}, {512, 102, 211, 412, 53, 31}, {154, 210, 121, 41, 53, 31}, {15, 25, 21, 41, 53, 31}, 
    {41, 100, 21, 41, 53, 31}, {5, 10, 21, 41, 53, 31} };
    double soma1, soma2;
    somaDiagonal(A,6,&soma1,&soma2);
    int i, j;
    i = j = 0;
    while (i<6){
        while (j<6){
            printf("%lf\t",A[i][j]);
            j++;
        }
        printf("\n");
        j=0;
        i++;
    }
    printf("O valor da soma da diagonal principal: '%lf'\nO valor da soma da diagonal secundaria: '%lf'",soma1,soma2);
    return 0;
}