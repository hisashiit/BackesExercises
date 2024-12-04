/*15) Elabore um programa que faça a leitura de vários números
inteiros até que se digite um número negativo. O programa
tem de retornar o maior e o menor número lido*/

#include <stdio.h>
#include <stdlib.h>
int main(){
    int number=-3;
    int j = 0;
    int dimension;
    printf("Escreva a quantidade de elementos que queira ler: ");
    scanf("%d",&dimension);
    int numberVetor[dimension];
    while (number<0 || j<dimension){
    printf("Escreva um numero: ");
    scanf("%d", &number);
    if (number<0){
        printf("Voce escreveu numero negativo\n");
    }
    if(number>=0){
        printf("Numero '%d' escrito no vetor\n",number);
        numberVetor[j] = number;
        j++;
    }
    }
    
    int i = 0;
    int k = 0;
    while (i<dimension){
    
        while (k<dimension-i){
        if (numberVetor[i]>numberVetor[k+i]){
            int troca = numberVetor[i];
            numberVetor[i] = numberVetor[k+i];
            numberVetor[k+i] = troca;
        }
        k=k+1;
        }
    k=0;
    i=i+1;
    }

    printf("Ordem dos valores: ");
    i = 0;
    while(i<dimension){
        printf("%d\t", numberVetor[i]);
        i++;
    }
    
    printf("\nO maior numero: '%d'\n",numberVetor[dimension-1]);
    printf("O menor numero: '%d'\n",numberVetor[0]);
}