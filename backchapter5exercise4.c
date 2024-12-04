/*4) Faça um programa que determine e mostre os cinco primeiros
múltiplos de 3 considerando números maiores que 0.
5) Faça um programa que calcule e mostre a soma dos 50
primeiros números pares.
6) Faça um programa que mostre uma contagem regressiva na
tela, iniciando em 10 e terminando em 0. Mostre uma
mensagem “FIM!” após a contagem.*/
#include <stdio.h>
#include <math.h>

int main(){
    int i = 1;
    printf("Os 5 primeiros multiplos de 3: ");
    while (i<=5){
    printf("%d\t",i*3);
    i = i + 1;
    }
    i = 0;
    int j = 0, total=0;
    while (i<50){
        j = j + 2;
        total = total + j;
        i++;
    }
    printf("\nA soma dos 50 primeiros numeros pares: '%d'\n",total);

    for(int k=10;k>=0;k--){
        printf("%d\t",k);
    }
}