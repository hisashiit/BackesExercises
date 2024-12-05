/*12) Faça um programa que leia um vetor de 10 posições. Verifique se existem
valores iguais e os escreva na tela.*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    float array[10];
    int i = 0;
    while (i<10){
    printf("Digite um numero no indice '%d' no vetor: ",i);
    scanf("%f",&array[i]);
    i++;
    }
    i = 0;
    int j = 0;
    float compara = array[0];
    while (i<10){
        while (j<10){
            if (array[i] > array[j]){
                compara = array[i];
                array[i] = array[j];
                array[j] = compara;
            }
            j++;
        }
        i=i+1;
        j=i+1;
    }

    i = 0;

    while (i<10){
        printf("%.2f\t",array[i]);
        i++;
    }

    i = 0;
    j = 1;
    int count = 1;
    while (i<10){
        while (j<10){
            if (array[i]==array[j]){
                count = count + 1;
                j++;
            }
            if (array[i]!=array[j]){
                j++;
                break;
            }
        }
        if (count > 1) {
            printf("\n'%d' valores iguais de '%.2f'",count,array[i]);
        }
        count = 1;
        i = j-1; // por que nao i = j;
        j = i+1;
    }

    return 0;
}