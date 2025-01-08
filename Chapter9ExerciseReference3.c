/*3) Escreva uma função que receba um array de 10 elementos e
retorne a sua soma.*/
/*Arrays são sempre passados por referência para uma função.*/

#include <stdio.h>
#include <stdlib.h>
void somaArray(double *n,double *soma){
    int i = 0;
    while (i<10){
        *soma = n[i] + *soma;
        i++;
    }
}
int main(){
    double soma=0;
    double array[10] = {1.2,1.4,201.21,302.12,312.12,921.1,2,1,4,1};
    somaArray(array,&soma);
    printf("Soma do array: '%lf'",soma);
    return 0;
}