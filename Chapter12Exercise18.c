/*18) Escreva uma função que receba como parâmetro duas matrizes, A e B, e
seus tamanhos. A função deve retornar o ponteiro para uma matriz C, em
que C é o produto da multiplicação da matriz A pela matriz B. Se a
multiplicação das matrizes não for possível, retorne um ponteiro nulo.*/

#include <stdio.h>
#include <stdlib.h>
int **produtoMatrix(int **A, int **B, int linhaA, int colunaA, int linhaB, int colunaB){
    if (colunaA == linhaB){
        int **p = malloc(linhaA*sizeof(int *));
        for (int i=0;i<linhaA;i++){
            p[i] = malloc(colunaB*sizeof(int));
            for (int j=0;j<colunaB;j++){
                p[i][j] = 0;
            }
        }
        int j=0;
        int i=0;
        int z=0;
        int var=0;
        for (i=0;i<colunaB;i++){
            for (j=0;j<linhaA;j++){
                for (z=0;z<colunaA;z++){
                p[j][i] = p[j][i] + A[j][z]*B[z][i];
                }
            }
        }

        return p;
    }
    else{
        printf("linha A distinta da coluna B");
        return NULL;
    }
}
int main(){
    int linhaA=2, colunaA=3, linhaB=3, colunaB=3;
    int **A = malloc(linhaA*sizeof(int *));
    for (int i=0;i<linhaA;i++){
        A[i] = malloc(colunaA*sizeof(int));
        for (int j=0;j<colunaA;j++){
            A[i][j] = 4;
        }
    }
    int **B = malloc(linhaB*sizeof(int *));
    for (int i=0;i<linhaB;i++){
        B[i] = malloc(colunaB*sizeof(int));
        for (int j=0;j<colunaB;j++){
            B[i][j] = 4;
        }
    }

    int **C = produtoMatrix(A,B,linhaA,colunaA,linhaB,colunaB);
    for (int i=0;i<linhaA;i++){
        for (int j=0;j<colunaB;j++){
            printf("%d\t",C[i][j]);
        }
        printf("\n");
    }

    return 0;
}