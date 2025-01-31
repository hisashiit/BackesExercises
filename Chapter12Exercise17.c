/*17) Escreva uma função que receba como parâmetro uma matriz A contendo
N linhas e N colunas. A função deve retornar o ponteiro para um vetor B
de tamanho N alocado dinamicamente, em que cada posição de B é a soma
dos números daquela coluna da matriz.*/

#include <stdio.h>
#include <stdlib.h>
int *matricsi(int **A, int N){
int var=0;
int *B = malloc(N*sizeof(int));
for (int i=0;i<N;i++){
    for (int j=0;j<N;j++){
        var = A[i][j] + var;
    }
    B[i] = var;
    var=0;
}
    return B;
}
int main(){
    int N=5;
    int **A = malloc(N*sizeof(int *));
    for (int i=0;i<N;i++){
        A[i] = malloc(N*sizeof(int));
        for (int j=0;j<N;j++){
            A[i][j] = 2;
        }
    }
    int *C = matricsi(A,N);

    for (int i=0;i<N;i++){
        printf("%d\t",C[i]);
    }
    return 0;
}