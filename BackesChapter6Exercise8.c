/*8) Faça um programa que preencha um vetor com 10 números reais. Em
seguida, calcule e mostre na tela a 
'quantidade de números negativos' e a
'soma dos números positivos' desse vetor*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int i = 0;
    float vetor[10];
    while (i<10){
    printf("Digite o elemento na posicao '%d': ", i);
    scanf("%f", &vetor[i]);
    i++;
    }
    float soma = 0;
    i = 0;
    int count=0;
    while (i<10){
       if (vetor[i]<0){
        count++;
       }
       if (vetor[i]>0){
        soma = soma + vetor[i];
       }
    i++;
    }
    printf("A quantidade de numero negativos = %d\n",count);
    printf("A soma dos numeros positivos = '%.2f'",soma);

    return 0;
}
