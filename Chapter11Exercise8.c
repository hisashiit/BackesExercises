/*8) Escreva uma função que receba um valor inteiro positivo N por parâmetro
e retorne o ponteiro para um vetor de tamanho N alocado dinamicamente.
Se N for negativo ou igual a zero, um ponteiro nulo deverá ser retornado.*/

#include <stdio.h>
#include <stdlib.h>
int *VetorRetorna(int N){
    if (N<=0){
        return NULL;
    }
    int *p = malloc(N*sizeof(int));
    for (int i=0;i<N;i++){
        p[i] = i*2;
    }
    return p;
}
int main(){
    int N;
    printf("Escreva um valor positivo N: ");
    scanf("%d",&N);
    int *p = VetorRetorna(N);
    for (int i=0;i<N;i++){
        printf("%d\t",p[i]);
    }
    free(p);
    return 0;
}