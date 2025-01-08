/*Faça uma função recursiva que calcule o valor da série S
descrita a seguir para um valor n maior do que zero a ser
fornecido como parâmetro para ela:*/
#include <stdio.h>
#include <stdlib.h>
double somaRecursiva(int n){
    if (n==1){
        return 2;
    }
    else{
        return  (double) ( (1.0+n*n)/n )+ somaRecursiva(n-1);
    }
}

int main(){
    int a = 3;
    printf("O valor da soma recursiva para n: '%d' = '%lf'",a,somaRecursiva(a));
    return 0;
}