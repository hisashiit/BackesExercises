#include <stdio.h>
#include <stdlib.h>
int main(){
    int cub[5][5][5];
    int i,j,k;
    for (i=0; i<5; i++){
        for (j=0; j<5; j++){
            for (k=0; k<5; k++){
                cub[i][j][k] = 1;
            }
        }
    }

    for (i=0; i<5; i++){
        printf("\n");
        for (j=0; j<5; j++){
            for (k=0; k<5; k++){
                printf("%d\t", cub[i][j][k]);
                if (k==4) {
                    printf("\n");
                }
            }
        }
    }

    return 0;
}