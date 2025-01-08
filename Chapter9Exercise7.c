/*7) Crie uma função que receba uma matriz A contendo 10 linhas
e 10 colunas e retorne a soma dos seus elementos.*/

#include <stdio.h>
#include <stdlib.h>

void funcaoSoma(int mat[][10], int n, int *soma){
int i = 0;
int j = 0;
*soma = 0;
while (i<10){
    while (j<10){
        *soma = *soma + mat[i][j];
        j++;
    }
    j = 0;
    i++;
}
}
int main(){
int mat[10][10] = { {1, 2, 3, 4, 5}, {1, 2, 3, 4, 5}, {1, 2, 3, 4, 5}, {1, 2, 3, 4, 5}, {1, 2, 3, 4, 5}, 
{1, 2, 3, 4, 5}, {1, 2, 3, 4, 5}, {1, 2, 3, 4, 5}, {1, 2, 3, 4, 5}, {1, 2, 3, 4, 5}};
int soma = 0;
funcaoSoma(mat,10,&soma);
printf("O somatorio de todos os elementos de mat eh '%d' ", soma);
}