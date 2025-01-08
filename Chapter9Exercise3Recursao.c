/*3) Crie uma função recursiva que receba um número inteiro N e
imprima todos os números naturais de 0 até N em ordem
crescente.*/
#include <stdio.h>
#include <stdlib.h>
void imprima(int N){
    if (N==0){
    }
    else{
        imprima(N-1);
        printf("%d\n",N); 
    }
}

int main(){
    imprima(10);

    return 0;
}