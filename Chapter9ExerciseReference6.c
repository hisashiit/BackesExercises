/*6) Crie uma função que receba uma matriz A contendo cinco
linhas e cinco colunas. Calcule na própria matriz A a sua
transposta (se B é a matriz transposta de A, então A[i][j] = B[j]
[i]).*/
#include <stdio.h>
#include <stdlib.h>
void matrizTransposta(int m[][5], int n){
    int i, j;
    int A[5][5];
    for (i=0; i<n; i++){
        for (j=0; j<5; j++){
            A[i][j] = m[i][j];
        }
    }
    
    for (i=0; i<n; i++){
        for (j=0; j<5; j++){
            m[j][i] = A[i][j];
        }
    }
}

int main(){
    int A[5][5]= { {1, 2, 3, 4, 5}, {1, 2, 3, 4, 5}, {1, 2, 3, 4, 5}, {1, 2, 3, 4, 5}, {1, 2, 3, 4, 5}};
    int i = 0;
    int j = 0;
    while (i<5){
        while (j<5){
            printf("%d\t",A[i][j]);
            j++;
        }
        printf("\n");
        j=0;
        i++;
    }
    matrizTransposta(A, 5);
    printf("Matriz transposta: \n");
    i = 0;
    j = 0;
    while (i<5){
        while (j<5){
            printf("%d\t",A[i][j]);
            j++;
        }
        printf("\n");
        j=0;
        i++;
    }

    return 0;
}