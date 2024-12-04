/*13) Faça um programa que mostre ao usuário um menu com
quatro opções de operações matemáticas (as operações básicas,
por exemplo). O usuário escolhe uma das opções, e o seu
programa pede dois valores numéricos e realiza a operação,
mostrando o resultado.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    char input;
    int i = 1;
    float a, b;
    while (i == 1){
    printf("Digite a operacao matematica '+', '-', '*', '/' ");
    scanf(" %c", &input);
    printf("Digite dois numeros: ");
    scanf(" %f %f", &a,&b);
    switch(input) {
        case '+': {
            printf("O resultado de %f+%f = %f", a, b, a+b);}
            break;
        case '-':{
            printf("O resultado de %f-%f = %f", a, b, a-b);}
            break;
        case '*':{
            printf("O resultado de %f*%f = %f", a, b, a*b);}
            break;
        case '/':{
            printf("O resultado de %f/%f = %f", a, b, a/b);}
            break;
        default: printf("Operacao matematica nao validada.\n");
    }
    printf("\nDigite '1' para continuar ou '0' para finalizar... ");
    scanf(" %d", &i);
    }
    return 0;
}