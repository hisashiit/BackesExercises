/*2) Escreva um programa que contenha duas variáveis inteiras. Leia essas
variáveis do teclado. Em seguida, compare seus endereços e exiba o
conteúdo do maior endereço.*/
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
    printf("Escreva a variavel a: ");
    scanf("%d",&a);
    printf("Escreva a variavel b: ");
    scanf("%d",&b);
    printf("O endereco de a: '%p'\n",&a);
    printf("O endereco de b: '%p'\n",&b);
    printf("O maior endereco: '%p'\n",maior(&a,&b));
    printf("O conteudo do maior endereco: '%d'\n",*maior(&a,&b));
    return 0;
}