/*14) Crie uma função recursiva que retorne o menor elemento em
um vetor.*/
#include <stdio.h>
#include <stdlib.h>
int menorElemento(int *vetor, int n, int i, int menor){
    if (i == n-1){
        return menor;
        }
    else{
        if (menor<vetor[i]){
        return menorElemento(vetor,n,i+1,menor);
        }
        else{
        menor = vetor[i];
        return menorElemento(vetor,n,i+1,menor);
        }
    }

}

int main(){
    int n = 10;
    int vetor[10] = {200, 12, 11, 53, -2, 30, -51, 51, 21, 100};
    int menor=vetor[0];
    printf("O menor elemento do vetor: '%d'",menorElemento(vetor,n,0,menor));

    return 0;
}