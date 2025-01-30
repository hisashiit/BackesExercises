/*1) Escreva um programa que contenha duas variáveis inteiras. Compare seus
endereços e exiba o maior endereço.*/
#include <stdio.h>
#include <stdlib.h>
int *maior(int *a, int *b){
    int c;
    if (a>b){
        return a;
    }
    else{
        return b;
    }
}
int main(){
    int a, b;

    printf("Endereco '%p'\n",&a);
    printf("Endereco '%p'\n",&b);
    printf("O endereco maior eh '%p'",maior(&a,&b));
    return 0;
}