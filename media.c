#include <stdio.h>
#include <stdlib.h>

int main(){
    float vetor[10] = {15,13,17,31,61,31,21,100,70,50};

    printf("As notas sao: \n");
    int i = 0;
    int soma = 0;
    while (i<10){
    soma = vetor[i] + soma;
    printf("%f\t",vetor[i]);
    if ((i+1)%4==0){
        printf("\n");
    }
    i++;
    }
    printf("\n");
    printf("Media = %f",soma/10.0);
    return 0;
}