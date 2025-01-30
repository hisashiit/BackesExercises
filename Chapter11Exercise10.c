/*10) Escreva uma função que receba um valor inteiro positivo N por parâmetro
e retorne o ponteiro para um vetor de tamanho N alocado dinamicamente.
Esse vetor deverá ter os seus elementos preenchidos com certo valor,
também passado por parâmetro. Se N for negativo ou igual a zero, um
ponteiro nulo deverá ser retornado.*/

#include <stdio.h>
#include <stdlib.h>
int *ponteirao(int N, int val){
    if (N==0){
        return NULL;
    }
    int *p = malloc(N*sizeof(int));
    for (int i=0;i<N;i++){
        p[i] = val;
    }
    return p;
}
int main(){
    int N;
    int val;
    printf("Escreva a quantidade de elementos do vetor: ");
    scanf("%d",&N);
    printf("Escreva o valor: ");
    scanf("%d",&val);
    int *p = ponteirao(N,val);
    for (int i=0;i<N;i++)
    printf("%d\t",p[i]);
    return 0;
}