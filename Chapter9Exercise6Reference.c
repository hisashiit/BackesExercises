/*6) Crie uma função que receba uma matriz A contendo cinco
linhas e cinco colunas. Calcule na própria matriz A a sua
transposta (se B é a matriz transposta de A, então A[i][j] = B[j][i]).*/

#include <stdio.h>
#include <stdlib.h>
void transpostaMatriz(double A[][5], double n){
    double B[5][5];
    int i = 0;
    int j = 0;
    while (i<5){
        while (j<5){
            B[i][j] = 0;
            j++;
        }
        j=0;
        i++;
    }
    i = j = 0;

    while (i<5){
        while (j<5){
            B[i][j] = A[j][i];
            j++;
        }
        j=0;
        i++;
    }
    i = j = 0;
    while (i<5){
        while (j<5){
            A[i][j] = B[i][j];
            j++;
        }
        j = 0;
        i++;
    }

}

int main(){
    double A[5][5] = {{41, 22, 11, 76, 64},{31, 42, 51, 74, 47},{43, 22, 74, 12, 10},{7, 97, 42, 23, 71},{61, 21, 77, 88, 12}};
    transpostaMatriz(A,5);
    int i, j;
    i = j = 0;
    while (i<5){
        while (j<5){
        printf("%lf\t",A[i][j]);
        j++;
        }
        printf("\n");
        j =0;
    i++;
    }
    return 0;
}