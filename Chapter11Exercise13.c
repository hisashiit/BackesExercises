/*13) Escreva um programa que leia um inteiro N e crie uma matriz alocada
dinamicamente contendo N linhas e N colunas. Essa matriz deve conter o
valor 0 na diagonal principal, o valor 1 nos elementos acima da diagonal
principal e o valor −1 nos elementos abaixo da diagonal principal.*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int N;
    printf("Leia um inteiro N: ");
    scanf("%d",&N); 
    int **p = (int **) malloc(N*sizeof(int *));

    for (int i=0;i<N;i++){
        p[i] = (int *) malloc(N*sizeof(int));
        for (int j=0;j<N;j++){
            if (i==j){
            p[i][j] = 0;
            }
            if (i>j){
            p[i][j] = -1;
            }
            if (i<j){
            p[i][j] = 1;
            }
        }
    }

    for (int i=0;i<N;i++){
        for (int j=0;j<N;j++)
        printf("%d\t",p[i][j]);
    printf("\n");
    }

    for (int i=0;i<N;i++){
        free(p[i]);
    }
    free(p);
    return 0;
}