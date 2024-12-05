/*11) Leia um conjunto de números reais, armazenando-o em vetor. Em seguida,
calcule o quadrado de cada elemento desse vetor, armazenando esse
resultado em outro vetor. Os conjuntos têm, no máximo, 20 elementos.
Imprima os dois conjuntos de números.*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int dimensao=-2;
    while (dimensao<=0 || dimensao > 20){
    printf("Digite a dimensao do vetor: ");
    scanf("%d",&dimensao);
    if (dimensao<=0 || dimensao > 20) {
        printf("\nDimensao menor que 0 ou acima de 20\n");
    }
    }


    float vetor[dimensao];
    float outrovetor[dimensao];
    int i = 0;
    while (i<dimensao){
    printf("\nDigite o valor do vetor no index '%d': ",i);
    scanf("%f",&vetor[i]);
    i++;
    }

    i = 0;
    while (i<dimensao){
        outrovetor[i] = vetor[i]*vetor[i];
        i++;
    }

    i = 0;
    printf("Vetor 1: ");
    while (i<dimensao){
        printf("%.2f\t",vetor[i]);
        i++;
    }

    i = 0;
    printf("Vetor 2: ");
    while (i<dimensao){
        printf("%.2f\t",outrovetor[i]);
        i++;
    }


    return 0;
}