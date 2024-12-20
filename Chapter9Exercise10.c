/*10) Escreva uma função que receba dois valores numéricos e um
símbolo. Esse símbolo representará a operação que se deseja
efetuar com os números. Assim, se o símbolo for “ + ”, deverá
ser realizada uma adição, se for “ − ”, uma subtração, se for
“/”, uma divisão, e, se for “*”, será efetuada uma
multiplicação. Retorne o resultado da operação para o
programa principal.*/
#include <stdio.h>
#include <stdlib.h>

float doisValores(float a, float b, char simbolo){
    float resultado;
    if (simbolo == '+'){
        resultado = a + b;
    }
    if (simbolo == '-'){
        resultado = a - b;
    }
    if (simbolo == '/'){
        resultado = a/b;
    }
    if (simbolo == '*'){
        resultado = a*b;
    }
    return resultado;
}

int main(){
    float number1, number2;
    char simbolo;
    char c;
    printf("Escreva o valor 1: ");
    scanf("%f",&number1);
    printf("Escreva o valor 2: ");
    scanf("%f",&number2);
    while ((c = getchar()) != '\n' && c != EOF); //limpando buffer
    printf("Escreva o simbolo ");
    scanf("%c",&simbolo);
    printf("O resultado da conta: '%.2f'",doisValores(number1,number2,simbolo));
    return 0;
}