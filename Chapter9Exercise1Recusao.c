/*1) Escreva uma função recursiva que calcule a soma dos
primeiros n cubos:*/
#include <stdio.h>
#include <stdlib.h>

int funcaoRecursiva(int n){
    /*while (i<=n){
        somaRecursiva = somaRecursiva + i*i*i;
        i++;
    } isso nao eh recursivo, mas seria uma maneira*/ 
    if (n==0){
        return 0; //criterio de parada da funcao recursiva
    }
    else
        return funcaoRecursiva(n-1) + n*n*n;
}



int main(){
    int num;
    printf("Escreva um numero inteiro n para ser calculado sua soma recursiva: ");
    scanf("%d",&num);

    printf("O numero resultado da funcao recursiva: '%d'",funcaoRecursiva(num));
    return 0;

}