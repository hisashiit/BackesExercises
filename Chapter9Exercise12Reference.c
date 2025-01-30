/*12) Escreva uma função que receba como parâmetro um vetor
contendo N valores inteiros. Essa função deve retornar, por
referência, dois valores: a soma dos números pares e ímpares.*/

#include <stdio.h>
#include <stdlib.h>
void parImpar(int *v, int n, int *somaPar, int *somaImpar){
    *somaPar = *somaImpar = 0;
    int i = 0;
    while (i<n){
        if (v[i]%2==0){
            *somaPar = *somaPar + 1;
        }
        else{
            *somaImpar = *somaImpar + 1;
        }
        i++;
    }
}
int main(){
    int v[10] = {1, 5, 31, 21, 53, 312, 10, 1, 4, 7};
    int somaPar, somaImpar;
    parImpar(v, 10, &somaPar, &somaImpar);
    printf("A quantidade de pares '%d'\nA quantidade de impares: '%d'",somaPar,somaImpar);

    return 0;
}