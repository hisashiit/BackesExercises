/*5) Crie uma função recursiva que retorne a soma dos elementos
de um vetor de inteiros.*/
#include <stdio.h>
#include <stdlib.h>
int soma(int *n, int i){
    if (n[i]==n[0]){
        return n[i];
    }
    else{
        return n[i]+soma(n,i-1); 
    }
}
int main(){
    int N[5] = {1, 5, 10, 12, 20};
    printf("O resultado da soma dos elementos do vetor: '%d'",soma(N,4));
    
    return 0;
}