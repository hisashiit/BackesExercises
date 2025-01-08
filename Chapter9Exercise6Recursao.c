/*6) Crie uma função recursiva que retorne a média dos elementos
de um vetor de inteiros.*/
#include <stdio.h>
#include <stdlib.h>
double mediaVetor(int *n, double number, int i){
    if (i==number-1){
        return (double) (n[i]/number);
    }
    return (double) ( n[i]/number + mediaVetor(n,number,i+1));

}

int main(){
    int n[10] = {20, 100, 31, 50, 91, 31, 10, 90, 9, 10};
    printf("A media do vetor: '%lf'",mediaVetor(n, 10, 0));
    return 0;
}