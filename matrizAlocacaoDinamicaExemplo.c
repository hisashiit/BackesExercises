#include <stdio.h>
#include <stdlib.h>

int main(){
    int **p; //2 "*" = 2 niveis = 2 dimensoes
    int i, j, N = 2;
    p = (int **) malloc(N*sizeof(int *)); //declaracao de um ponteiro de segunda ordem 
    for (i=0;i<N;i++){
        p[i] = (int *) malloc(N*sizeof(int)); //declaracao de um vetor de ponteiros
        for (j=0;j<N;j++){
        scanf("%d",&p[i][j]);
        }
    }
    for (int z=0;z<N;z++){
        for (int ba=0;ba<N;ba++){
            printf("%d\t",p[z][ba]);
        }
        printf("\n");
    }
    for (i=0;i<N;i++){
        free(p[i]);
    }
    free(p);
    return 0;
}
 