/*9) Crie uma função que receba como parâmetro um vetor e o imprima. Não
utilize índices para percorrer o vetor, apenas aritmética de ponteiros.*/

#include <stdio.h>
#include <stdlib.h>
void imprimaVector(int vetor[], int tamanho){
    int *p = vetor;
    int *u = &vetor[tamanho-1];
    while (p<=u){
        printf("%2d\t",*p);
        p++;
    }
}
int main(){
    int vetor[5] = {4, 12, 4, 2, 12};
    int tamanho = 5;
    imprimaVector(vetor,tamanho);
    return 0;
}