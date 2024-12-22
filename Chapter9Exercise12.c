/*12) Escreva uma função que receba um número inteiro positivo e
retorne o maior fator primo desse número.*/

#include <stdio.h>
#include <stdlib.h>

int maiorFatorPrimo(int x){
    int i =0;
    int resultadoPrimo;
    int j = 2;
    int count = 0;
    //Apenas divida por numeros primos
    while (i<x){
        while (j<=i){//Verificacao se eh primo
            if (i%j==0){
                count++;
            }
            j++;
        }
    if (count == 1){
        if (x%i==0){
            resultadoPrimo = i;
        }
    }
    count = 0;
    j = 2;
    i++;
    }
    return resultadoPrimo;
};
int main(){
    int number;
    printf("Escreva o numero que se deseja descobrir o menor fator primo: ");
    scanf("%d",&number);
    printf("O maior fator primo do numero '%d' eh igual a '%d'",number,maiorFatorPrimo(number));
    return 0;
}