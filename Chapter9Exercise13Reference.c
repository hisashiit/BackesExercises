/*13) Crie uma função que receba um vetor de tamanho N e ordene
os seus valores.*/

#include <stdio.h>
#include <stdlib.h>

void hisashiSort(int *v, int n){
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
}
int main(){
    int v[20] = {52, 123, 64, 11, 2, 62, 21, 21, 2, 1, 64, 231, 64, 12, 64, 312, 754, 21, 10, 40};
    hisashiSort(v,20);
    int i = 0;
    while (i<20){
        printf("%d\t",v[i]);
        i++;
    }
    return 0;
}