/*6) Crie um programa que contenha um array com cinco elementos inteiros.
Leia esse array do teclado e imprima o endereço das posições contendo
valores pares.*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int vetorInteiros[5];
    int i = 0;
    int *p = vetorInteiros;
    while (i<5){
    printf("Escreva o elemento '%d' do array: ",i);
    scanf("%d",&vetorInteiros[i]);
    i++;
    }
    i = 0;
    printf("Os enderecos dos numeros inteiros:\n");
    while (i<5){
        printf("%p\n",p+i);
        i++;
    }
    i = 0;
    printf("Os enderecos dos numeros inteiros que sao pares:\n");
    while (i<5){
        if (*p%2 == 0){
            printf("%p\n",p);
        }
        p = p+1;
        i++;
    }


    return 0;
}