/*6) Leia uma matriz de tamanho 3 × 3. Em seguida, imprima a soma dos
valores contidos em sua diagonal principal.
7) Leia uma matriz de tamanho 3 × 3. Em seguida, imprima a soma dos
valores contidos em sua diagonal secundária.*/
#include <stdio.h>
#include <stdlib.h>

int main(){
    int dimension = 3;
    float matrix[dimension][dimension];
    int i = 0;
    int j = 0;
    while (i<3){
        while(j<3){
            printf("Qual o elemento da matriz na posicao '%d','%d'",i,j);
            scanf("%f",&matrix[i][j]);
            j++;
        }
        j = 0;
        i++;
    }
    float somaprincipal=0;
    float somasecundaria=0;

    i = j = 0;
    int variavelj=dimension-1;
    int variaveli=0;
    while (i<3){
        while(j<3){
            if (i==j){
            somaprincipal = somaprincipal + matrix[i][j];}
            if (j==variavelj && i==variaveli){
                somasecundaria = somasecundaria + matrix[i][j];
                variavelj = variavelj-1;
                variaveli = variaveli+1;
            }
            j++;
        }
        j=0;
        i++;
    }
    i = j = 0;
    while (i<3){
        while(j<3){
            printf("%f\t",matrix[i][j]);
            j++;
        }
        printf("\n");
        j = 0;
        i++;
    }
    printf("Soma dos valores na diagonal principal: '%f' \n", somaprincipal);
    printf("Soma dos valores na diagonal secundaria: '%f' ", somasecundaria);
    return 0;
}