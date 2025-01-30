/*12) Escreva uma função que receba como parâmetro um valor N e retorne o
ponteiro para uma matriz alocada dinamicamente contendo N linhas e N
colunas. Essa matriz deve conter o valor 1 na diagonal secundária e 0 nas
demais posições.*/

#include <stdio.h>
#include <stdlib.h>
int **matrixDiagonal(int N){
    int i,j;
    int **p;
    p = (int **) (malloc(N*sizeof(int *)));
    for (i=0;i<N;i++){
        p[i] = (int *) malloc(N*sizeof(int));
        for (j=0;j<N;j++){
            if (i==N-j-1){
                p[i][j]=1;
            }
            else{
            p[i][j] = 0;
            }
        }
    }
    return p;
}
int main(){
    int N;
    printf("Escreva o valor N: ");
    scanf("%d",&N);
    int **p = matrixDiagonal(N);
    for (int i=0;i<N;i++){
        for (int j=0;j<N;j++)
            printf("%d\t",p[i][j]);
        printf("\n");
    }
    return 0;
}