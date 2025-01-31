/*16) Escreva uma função que receba como parâmetro uma matriz A contendo
N linhas e N colunas, e um vetor B de tamanho N. A função deve retornar
o ponteiro para um vetor C de tamanho N alocado dinamicamente, em que
C é o produto da matriz A pelo vetor B.*/

#include <stdio.h>
#include <stdlib.h>
int **pontairo(int **A, int *B, int N){
    int **C = malloc(N*sizeof(int *));
    for (int i=0;i<N;i++){
    C[i] = malloc(N*sizeof(int));
    }
    //calculo do produto matricial
    for (int i=0;i<N;i++){
        for (int j=0;j<N;j++){
            C[i][j] = A[i][j]*B[i];
        }
    }
    return C;
}
int main(){
    int N = 3;
    int **A = malloc(N*sizeof(int *));
    for (int i=0;i<N;i++){
        A[i] = malloc(N*sizeof(int));
        for (int j=0;j<N;j++){
            A[i][j] = 3;
        }
    }
    int *B = malloc(N*sizeof(int));
    for (int i=0;i<N;i++){
        B[i] = 2;
    }
    int **C = pontairo(A,B,N);
    for (int i=0;i<N;i++){
        for (int j=0;j<N;j++){
            printf("%d\t",C[i][j]);
        }
        printf("\n");
    }
    return 0;
}