/*Faça um programa que calcule o desvio-padrão d de um vetor V contendo
n números
em que m é a média desse vetor. Considere
n = 10. O vetor v deve ser lido do teclado.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    float vetor[10];
    int i = 0;
    float soma = 0.0;
    float diferenca = 0.0;
    float desvioPadrao = 0;
    while (i<10){
    printf("Digite o numero de indice '%d' no conjunto numerico: ", i);
    scanf("%f",&vetor[i]);
    i++;
    }
    i = 0;
    while (i<10){
    soma = soma + vetor[i];
    i++;
    }
    i = 0;

    while (i<10){
        diferenca = diferenca + (vetor[i] - soma/10.0)*(vetor[i] - soma/10.0);
        i++;
    }
    i = 0;
    
    desvioPadrao = sqrt((diferenca/(9.0)));

    printf("O desvio padrao: '%.2f'",desvioPadrao);

    return 0;
}