/*4) Crie um programa que contenha uma matriz de float com três linhas e três
colunas. Imprima o endereço de cada posição dessa matriz.*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    float matrixHisashi[3][3];
    int i, j;
    float *p = &matrixHisashi[0][0];
    i = j = 0;
    printf("Os enderecos da 'matrixHisashi': \n");
    while (i<3){
        while (j<3){
            printf("%p\t",&matrixHisashi[i][j]);
            j++;
        }
        printf("\n");
        i++;
        j=0;
    }
    i = j = 0;
    printf("Endereco da 'matrixHisashi': \n");
    while (i<9){
        printf("%p\t",p+i);
        if ((i+1)%3==0){
            printf("\n");
        }
        i++;
    }

    return 0;
}