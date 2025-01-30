/*15) Elabore uma função que receba um vetor contendo N valores
e retorne por referência o maior e o menor elemento desse
vetor.*/
#include <stdio.h>
#include <stdlib.h>
void hisashiSort(int *v, int n, int *menor, int *maior){
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
    *menor = v[n-1];
    *maior = v[0];
}

int main(){
    int menor,maior;
    int v[10] = {4, 1, 10, 50, 100, 41, 32, 99, 10, -5};
    hisashiSort(v,10,&menor,&maior);
    printf("O menor valor do vetor: '%d'\nO maior valor do vetor: '%d'",menor,maior);
    return 0;
}

