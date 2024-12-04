#include <stdio.h>
#include <stdlib.h>

int main(){
    int arrayA[6] = {1,0,5,-2,5,7};
    int i = 0;
    while (i<6){
    printf("%d\t", arrayA[i]);
    i++;
    }

    int soma = arrayA[0] + arrayA[1] + arrayA[5];
    printf("\nSoma = %d\n", soma);
    arrayA[4] = 100;
    i = 0;
    while (i<6){
    printf("%d\t", arrayA[i]);
    i++;
    }
    printf("\n");
    i = 0;
    int array8[8];
    while (i<8){
    printf("Digite o elemento na posicao '%d': ", i);
    scanf("%d",&array8[i]);
    i++;
    }
    i = 0;
    int xpo;
    int ypo;

    printf("Qual posicao [0,7] voce quer somar: ");
    scanf("%d",&xpo);
    printf("Qual posicao [0,7] voce quer somar: ");
    scanf("%d",&ypo);

    int somaxy; 
    somaxy = array8[xpo] + array8[ypo];
    printf("array8[%d] + array8[%d] = %d",xpo,ypo,somaxy);
    return 0;
}