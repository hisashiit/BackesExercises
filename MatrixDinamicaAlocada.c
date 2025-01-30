#include <stdio.h>
#include <stdlib.h>

int main(){
    int N=2;
    int **p = (int **) (malloc(sizeof(int *))); //Ponteiro 2 ordem que aponta para ponteiro 1 ordem
    for (int i=0;i<N;i++){
        p[i] = (int *) (malloc(N*sizeof(int))); //Ponteiro 1 ordem aponta para um array de inteiros no malloc
        for (int j=0;j<N;j++){
            scanf("%d",&p[i][j]);
        }
    }

    for (int i=0;i<N;i++){
        for (int j=0;j<N;j++){
            printf("%d\t",p[i][j]);
        }
        printf("\n");
    }

    for (int i=0;i<N;i++){
        free(p[i]);
    }

    free(p);
    return 0;
}