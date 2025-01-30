/*4) Elabore um programa que leia do usuário o tamanho de um vetor a ser
lido. Em seguida, faça a alocação dinâmica desse vetor. Por fim, leia o vetor
do usuário e o imprima.*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int N=-1;
    while (N<0){
        printf("Escreva o tamanho do vetor: ");
        scanf("%d",&N);
        if (N<0){
            printf("O numero deve ser acima de 0\n");
        }
    }
    //Realizando a alocacao dinamica
    int *v = malloc(N*sizeof(int));
    for (int j=0;j<N;j++){
    printf("Escreva o digito '%d' do vetor: ",j);
    scanf("%d",&v[j]);
    }
    //printando todos os resultados
    for (int d=0;d<N;d++){
    printf("%d\t",v[d]);
    }

    return 0;
}