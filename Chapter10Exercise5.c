/*5) Crie um programa que contenha um array de inteiros com cinco elementos.
Utilizando apenas aritmética de ponteiros, leia esse array do teclado e
imprima o dobro de cada valor lido.*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int vetorInteiros[5];
    int i = 0;
    int a;
    int *p = &vetorInteiros[0]; //le-se o vetorInteiros[0] ao ser declarado apenas o nome do array;
    while (i<5){
    printf("Escreva o elemento '%d'",i+1);
    scanf("%d",&vetorInteiros[i]);
    i++;
    }
    i=0;
    printf("Os valores do vetorInteiros: ");
    while (i<5){
    printf("'%d'\t",vetorInteiros[i]);
    i++;
    }
    i = 0;
    printf("\nOs valores do vetorInteiros dobrados:");
    while (i<5){
        printf("'%d'\t",(*p)*2);
        p=p+1;
        i++;
    }

    return 0;
}