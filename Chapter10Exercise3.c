/*3) Crie um programa que contenha um array de float com 10 elementos.
Imprima o endereço de cada posição desse array.*/
#include <stdio.h>
#include <stdlib.h>

int main(){
    float vectorHisashi[10];
    int i = 0;
    while (i<10){
        printf("%p\n",&vectorHisashi[i]);
        i++;
    }



    return 0;
}