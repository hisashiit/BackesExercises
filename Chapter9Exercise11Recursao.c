/*11) Escreva uma função recursiva que receba um valor inteiro e o
retorne invertido. Exemplo:
Número lido = 123.
Número retornado = 321.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int inverter(int n, int i){
    int j = 0;
    if (n>=1000){
        return i + inverter(n-1000,i);
    }
    if (n<1000 && n>= 100){
        return i*10 + inverter(n-100,i);
    }
    if (n<100 && n>= 10){
        return i*100 + inverter(n-10,i);
    }
    if (n<10 && n>= 1){
        return i*1000 + inverter(n-1,i);
    }
    if (n == 0){
        return 0;
    }
}
int main(){
    int n;
    printf("Escreva um numero: ");
    scanf("%d",&n);
    printf("O numero invertido: '%d'",inverter(n,1));

    return 0;
}