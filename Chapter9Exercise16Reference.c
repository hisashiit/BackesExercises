/*16) Elabore uma função que receba um vetor contendo N valores
e retorne por referência o maior elemento do vetor e o número
de vezes que esse elemento ocorreu no vetor.*/

#include <stdio.h>
#include <stdlib.h>
void hisashiSort(int *v, int n, int *maior, int *count){
    *count = 0;
    int i = 0;
    int j = 0;
    int troca;
    while (i<n){
        while (j<n){
            if (v[i]<v[j]){
                troca = v[i];
                v[i] = v[j];
                v[j] = troca;
            }
            j++;
        }
        i++;
        j=i+1;
    }
    *maior = v[0];
    i = 0;
    while (i<n){
        if (*maior == v[i]){
            *count=*count+1;
        }
        i++;
    }
}

int main(){
    int v[10] = {30, 30, 21, 30, 1, 9, 5, -1, 30, 12};
    int maior, count;
    hisashiSort(v,10,&maior,&count);
    printf("O elemento maior encontrado: '%d'\nA quantidade de vezes que ele apareceu: '%d'",maior,count);

    return 0;
}