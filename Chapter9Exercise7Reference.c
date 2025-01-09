/*7) Crie uma função que receba uma matriz A contendo 10 linhas
e 10 colunas e retorne a soma dos seus elementos.*/
#include <stdio.h>
#include <stdlib.h>
double somaMatriz(double A[][10], int n){
double soma = 0;
int i, j;
i = j = 0;
while (i<10){
    while (j<10){
        soma = A[i][j] + soma;
        j++;
    }
    j = 0;
    i++;
}
    return soma;
}
int main(){
    double A[10][10] = {{41, 22, 11, 76, 64},{31, 42, 51, 74, 47},{43, 22, 74, 12, 10},{7, 97, 42, 23, 71},{61, 21, 77, 88, 12},
    {41, 22, 11, 76, 64},{41, 22, 11, 76, 64},{41, 22, 11, 76, 64},{41, 22, 11, 76, 64},{41, 22, 11, 76, 64}};
    printf("A soma da matriz A: '%lf'",somaMatriz(A,10));
    return 0;
}