/*5) Faça um programa que leia um valor inteiro N não negativo. Se o valor de
N for inválido, o usuário deverá digitar outro até que ele seja válido (ou
seja, positivo). Em seguida, leia um vetor V contendo N posições de
inteiros, em que cada valor deverá ser maior ou igual a 2. Esse vetor deverá
ser alocado dinamicamente.*/
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
    int num=0;
    int *v = malloc(N*sizeof(int));
    for (int i=0;i<N;i++){
        while (num<2){
        printf("Escreva o numero de index '%d': ",i);
        scanf("%d",&num);
        }
        v[i] = num;
        num = 0;
    }

    for (int i=0;i<N;i++){
        printf("%d\t",v[i]);
    }
    return 0;
}