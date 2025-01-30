/*6) Escreva um programa que aloque dinamicamente uma matriz de inteiros.
As dimensões da matriz deverão ser lidas do usuário. Em seguida, escreva
uma função que receba um valor e retorne 1, caso o valor esteja na matriz,
ou retorne 0, no caso contrário.*/

#include <stdio.h>
#include <stdlib.h>
int valorEstaMatriz(int num, int **matrix, int elementos){
    for (int i=0;i<elementos;i++){
        for (int j=0;j<elementos;j++){
        if (num==matrix[i][j]){
            return 1;
        }
        }
    }
    return 0;
}
int main(){
    //escrevendo um array de uma dimensao ou 'vector'
    int *p;
    p = (int *) malloc (5*sizeof(int));
    for (int i=0;i<5;i++){
        p[i] = 1;
    }
    for (int i=0;i<5;i++){
        printf("%d\t",p[i]);  
    } 
    printf("\n");

    //Escrevendo um array de duas dimensoes ou 'matrix'
    int **c; //2 "*" = 2 niveis = 2 dimensoes
    int z, z1, N;
    printf("Quantos elementos*elementos a matriz deve ter? ");
    scanf("%d",&N);
    c = (int **) malloc(N*sizeof(int *)); //declaracao de um ponteiro de segunda ordem 
    for (int i=0;i<N;i++){
        c[i] = (int *) malloc(N*sizeof(int)); //declaracao de um vetor de ponteiros
        for (int j=0;j<N;j++){
        printf("digite o numero da matrix: ['%d','%d']: ",i,j);
        scanf("%d",&c[i][j]);
        }
    }
    printf("A matriz digitada foi: \n");
    for (int z=0;z<N;z++){
        for (int z1=0;z1<N;z1++){
            printf("%d\t",c[z][z1]);
        }
        printf("\n");
    }
    int num;
    printf("Qual numero vai comparar? ");
    scanf("%d",&num);

    printf("O numero %d esta contido na matrix?\n%d ",num,valorEstaMatriz(num,c,N));

    //liberando a memoria
    for (int i=0;i<N;i++){
        free(c[i]);
    }
    free(c);

    return 0;
}