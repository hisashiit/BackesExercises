/*10) Escreva uma função recursiva que receba um número inteiro,
maior ou igual a zero, e retorne o enésimo termo da sequência
de Fibonacci. Essa sequência começa no termo de ordem zero
e, a partir do segundo termo, seu valor é dado pela soma dos
dois termos anteriores. Alguns termos dessa sequência são: 0,
1, 1, 2, 3, 5, 8, 13, 21, 34.*/

#include <stdio.h>
#include <stdlib.h>
int Fibonnaci(int n){
    if (n==0){
        return 0;
    }
    if (n==1){
        return 1;
    }
    else{
        return Fibonnaci(n-1) + Fibonnaci(n-2);
    }
}

int main(){

    int n = 7;
    printf("O valor de Fibonnaci para n = '%d' = '%d'",n,Fibonnaci(n));

    return 0;
}