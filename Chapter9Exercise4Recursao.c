/*4) Crie uma função recursiva que receba um número inteiro N e
imprima todos os números naturais de 0 até N em ordem
decrescente.*/
#include <stdio.h>
#include <stdlib.h>
void imprima(int N){
    if (N==0){
    }
    else{
        printf("%d\n",N);
        imprima(N-1); 
    }
}

int main(){
    imprima(10);

    return 0;
}